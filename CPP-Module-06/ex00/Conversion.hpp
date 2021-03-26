#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <string>
# include <iostream>
# include <locale>

class Conversion
{
	public:
	Conversion(std::string number);
	Conversion( const Conversion & obj );
	Conversion & operator=( const Conversion & obj );
	~Conversion();


	void	convertToChar() const;
	void	convertToInt() const;
	void	convertToFloat() const;
	void	convertToDouble() const;

	protected:
	private:
	Conversion();
	std::string	_number;
};

#endif