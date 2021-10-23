#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	// tests for %c
	// char ch = 'j';
	// ft_printf("Teste char: %c\n", ch);
	// ft_printf("Teste char: %c%c%c\n", ch, ch, ch);
	// printf("P Teste char: %c%c%c\n", ch, ch, ch);
	// ft_printf("Teste char: %c\n", "oie");
	// printf("P Teste char: %c\n", "oie");
	// for (int i = 0; i < 126; i++)
	// {
	// 	ft_printf("%c", i);
	// 	printf(" %c\n", i);
	// }
	// ft_printf("-----------\n");

	// tests for %s
	// char *s= NULL;
	// int len = ft_printf("%s\n", s);
	// printf("%i\n", len);
	// char *str = "O show tem que continuar!";
	// len = ft_printf("%s\n", str);
	// printf("%i\n", len);

	// // tests for %%
	// ft_printf("Teste %%\n");
	// ft_printf("%%oiee\n");
	// ft_printf("%%\n");
	// ft_printf("-----------\n");
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
