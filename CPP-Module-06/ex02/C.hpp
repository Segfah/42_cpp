#ifndef C_HPP
# define C_HPP

#include <iostream>
#include <string>
#include "Base.hpp"

class	Base;

class	C : public Base
{
	public:
	virtual ~C();
	void	i_am() const;
};

#endif