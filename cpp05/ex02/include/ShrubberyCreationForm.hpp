
#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string _target;
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &scf);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &scf);
	~ShrubberyCreationForm(void);

 	void	execute(Bureaucrat const & executor) const;
};

#endif