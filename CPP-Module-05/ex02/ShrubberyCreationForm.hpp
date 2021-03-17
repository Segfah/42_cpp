#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm & obj);
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm & obj);
	~ShrubberyCreationForm();

	private:
	ShrubberyCreationForm();
};

#endif
