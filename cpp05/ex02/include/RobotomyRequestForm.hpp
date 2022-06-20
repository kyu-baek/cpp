
#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form
{
private:
	std::string _target;
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &rrf);
	RobotomyRequestForm& operator=(const RobotomyRequestForm &rrf);
	~RobotomyRequestForm(void);

 	void	execute(Bureaucrat const & executor) const;
};

#endif