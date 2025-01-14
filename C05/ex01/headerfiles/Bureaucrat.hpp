/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:56:58 by yscheef           #+#    #+#             */
/*   Updated: 2024/05/07 10:53:53 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Bureaucrat_HPP
#define Bureaucrat_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    std::string _name;
    int _grade;

public:
    // canonical form
    Bureaucrat();
    Bureaucrat(const std::string name, int grade);
    Bureaucrat(const Bureaucrat &src);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &src);

    // getters and setters
    void setName(std::string name);
    std::string getName() const;
    void setGrade(int grade);
    int getGrade() const;

    // inc and dec
    void incrementGrade();
    void decrementGrade();

    // form
    void signForm(Form &form);

    // exceptions
    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return "Grade is too high";
        }
    };
    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return "Grade is too low";
        }
    };
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif