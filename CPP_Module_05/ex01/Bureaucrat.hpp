#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;
public:
    Bureaucrat();
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &obj);
    Bureaucrat &operator=(const Bureaucrat &obj);

    std::string getName() const;
    int getGrade() const;
    void incGrade();
    void decGrade();
    void signForm(Form &form) const;

    ~Bureaucrat();

class GradeTooHighException : public std::exception{
    const char *what() const throw();
};
class GradeTooLowException : public std::exception{
    const char *what() const throw();
};
};

std::ostream &operator<< (std::ostream &obj, const Bureaucrat &b);

#endif