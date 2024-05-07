/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 22:26:52 by yscheef           #+#    #+#             */
/*   Updated: 2024/05/07 14:53:27 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headerfiles/Form.hpp"

Form::Form() : _name("default"), _signed(false), _gradeToSign(1), _gradeToExecute(1)
{
    std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    std::cout << "Form constructor called" << std::endl;
    if (gradeToSign < 1)
    {
        throw Form::GradeTooHighException();
    }
    else if (gradeToSign > 150)
    {
        throw Form::GradeTooLowException();
    }
}

Form::Form(const Form &src) : _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
    std::cout << "Form copy constructor called" << std::endl;
    *this = src;
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

Form &Form::operator=(const Form &src)
{
    std::cout << "Form assignation operator called" << std::endl;
    if (this != &src)
        this->_signed = src._signed;
    return *this;
}

void Form::beSigned(Bureaucrat &name)
{
    if (name.getGrade() <= this->_gradeToSign)
        this->_signed = true;
    else
        throw Form::GradeTooLowException();
}

bool Form::getSigned() const
{
    return this->_signed;
}

std::string Form::getName() const
{
    return this->_name;
}

int Form::getGradeToSign() const
{
    return this->_gradeToSign;
}

int Form::getGradeToExecute() const
{
    return this->_gradeToExecute;
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
    out << "Form name: " << form.getName() << std::endl;
    out << "Form signed: " << form.getSigned() << std::endl;
    out << "Form grade to sign: " << form.getGradeToSign() << std::endl;
    out << "Form grade to execute: " << form.getGradeToExecute() << std::endl;
    return out;
}