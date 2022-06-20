
#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string _target;
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &rrf);
	PresidentialPardonForm& operator=(const PresidentialPardonForm &rrf);
	~PresidentialPardonForm(void);

 	void	execute(Bureaucrat const & executor) const;
};

#endif