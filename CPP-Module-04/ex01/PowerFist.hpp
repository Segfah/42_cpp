#ifndef POWERFIST_HPP
# define POWERFIST_HPP

//# include <string>
//# include <iostream>
#include "AWeapon.hpp"

class	PowerFist : public AWeapon
{
	public:
	PowerFist();
	PowerFist( PowerFist const & obj );
	~PowerFist();
	PowerFist&	operator=( PowerFist const & rhs);

//atack
	virtual void	attack() const;

	private:
};

#endif
