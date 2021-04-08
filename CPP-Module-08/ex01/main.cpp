#include "span.hpp"

int	main()
{
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
/*	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	*/
	for (int i = 0; sp._tab[i] ; i++)
		std::cout << sp._tab[i] << std::endl;
	try
	{
		sp.addNumber(11);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}
