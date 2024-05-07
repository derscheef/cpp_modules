/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yscheef <yscheef@student.42vienna.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 23:56:58 by yscheef           #+#    #+#             */
/*   Updated: 2024/05/07 10:49:17 by yscheef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
#define Form_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    std::string _name;
    bool _signed;
    int _gradeToSign;
    int _gradeToExecute;

public:
    // canonical form
    Form();
    Form(const std::string name, int gradeToSign);
    Form(const Form &src);
    ~Form();
    Form &operator=(const Form &src);

    // functions
    void beSigned(Bureaucrat &name);

    // getters
    std::string getName() const;
    bool getSigned() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;

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

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif