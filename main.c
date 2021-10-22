#include "ft_printf.h"

int	main(void)
{
	ft_printf("%%");
	return (0);
}

/*int	sum(int firstArg, ...)
{
	int	i = firstArg;
	int	sum = 0;

	// va_list holds the information needed by macros va_start, va_arg, va_end, and va_copy
	// argument used to manipulate de argument list containing variable arguments of our function
	va_list argument;

	// start of iterations in the variadic function arguments
	va_start(argument, firstArg);
	while (i > 0)
	{
		sum += i;
		// get the next variadic function argument
		i = va_arg(argument, int);
	}
	// ends of iteration in the variadic function arguments
	va_end(argument);
	return (sum);
}

int	main(void)
{
	printf("%d", sum(1, 10, 10, 1));
	return (0);
}
*/
