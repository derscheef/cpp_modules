/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 22:26:52 by yscheef           #+#    #+#             */
/*   Updated: 2024/05/07 10:43:01 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    std::cout << "Bureaucrat constructor called" << std::endl;
    if (grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = src;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
    std::cout << "Bureaucrat assignation operator called" << std::endl;
    if (this != &src)
    {
        this->_name = src._name;
        this->_grade = src._grade;
    }
    return *this;
}

void Bureaucrat::setName(std::string name)
{
    this->_name = name;
}

std::string Bureaucrat::getName() const
{
    return this->_name;
}

void Bureaucrat::setGrade(int grade)
{
    if (grade < 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    else if (grade > 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    this->_grade = grade;
    std::cout << "Grade set to " << this->_grade << std::endl;
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
    out << "Name: " << bureaucrat.getName() << std::endl;
    out << "Grade: " << bureaucrat.getGrade() << std::endl;
    return out;
}

void Bureaucrat::incrementGrade()
{
    if (this->_grade == 1)
    {
        throw Bureaucrat::GradeTooHighException();
    }
    this->_grade--;
    std::cout << "Grade incremented to " << this->_grade << std::endl;
}

void Bureaucrat::decrementGrade()
{
    if (this->_grade == 150)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    this->_grade++;
    std::cout << "Grade decremented to " << this->_grade << std::endl;
}

void Bureaucrat::signForm(Form &form)
{
    if (form.getSigned())
    {
        std::cout << "Form is already signed" << std::endl;
    }
    else
    {
        try
        {
            form.beSigned(*this);
            std::cout << "Form signed by " << this->getName() << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << this->getName() << " cannot sign " << form.getName() << " because " << e.what() << std::endl;
        }
    }
}