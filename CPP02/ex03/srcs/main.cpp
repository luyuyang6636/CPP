#include "../includes/Point.hpp"

int	main(void)
{
	{
		Point	a(0.0f, 0.0f);
		Point	b(4.5f, 0.0f);
		Point	c(2.0f, 4.8f);
		Point	p(2.0f, 2.4f);

		//true
		std::cout << bsp (a, b, c, p) << std::endl;
	}
	{
		Point	a(0.0f, 0.0f);
		Point	b(4.5f, 0.0f);
		Point	c(2.0f, 4.8f);
		Point	p(5.0f, 5.92f);

		//false
		std::cout << bsp (a, b, c, p) << std::endl;
	}
	{
		Point	a(0.0f, 0.0f);
		Point	b(5.0f, 0.0f);
		Point	c(0.0f, 5.0f);
		Point	p(2.5f, 2.5f);

		//false
		std::cout << bsp (a, b, c, p) << std::endl;
	}
	{
		Point	a(3.59f, 9.875f);
		Point	b(15.3f, 15.59f);
		Point	c(8.56f, 4.8f);
		Point	p(8.56f, 9.0f);

		//true
		std::cout << bsp (a, b, c, p) << std::endl;
	}
	{
		Point	a(0.0f, 0.0f);
		Point	b(4.5f, 0.0f);
		Point	c(2.0f, 4.8f);
		Point	p(2.0f, 4.8f);

		//false
		std::cout << bsp (a, b, c, p) << std::endl;
	}

	return (0);
}