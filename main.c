#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	// // tests for %c
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

	// // tests for %s
	// char *s= NULL;
	// int len = ft_printf("%s\n", s);
	// printf("%i\n", len);
	// char *str = "O show tem que continuar!";
	// len = ft_printf("%s\n", str);
	// printf("%i\n", len);
	// ft_printf("-----------\n");

	// // tests for %p
	// int var = 10;
	// ft_printf("%p ", 0);
	// printf("%p ", 0);

	// // test %u
	printf("%u\t", 4294967296);
	ft_printf("%u\t", 4294967296);
	// // tests for %d
	// int v = -2147483648;
	// printf("%d ", v);
	// ft_printf("%d\n", v);
	// printf(" %p %p ", 0, 0);
	// ft_printf(" %p %p ", 0, 0);
	// // tests for %i
	// int v = 10;
	// printf("%i\n", "7D0");
	// printf("%d\n", "7D0");
	// ft_printf("%i ", 120000);
	// printf("%i ", 120000);
	// printf("%d\n", 120000);
	// ft_printf("%i ", 012);
	// printf("%i ", 012);
	// printf("%d\n", 012);
	// ft_printf("%i ", 010);
	// printf("%i ", 010);
	// printf("%d\n", 010);
	// ft_printf("%i ", 033);
	// printf("%i ", 033);
	// printf("%d\n", 033);
	// ft_printf("%i ", -120000);
	// printf("%i ", -120000);
	// printf("%d\n", -120000);
	// ft_printf("%i ", -012);
	// printf("%i ", -012);
	// printf("%d\n", -012);
	// int testInteger;
	// testInteger = 1;
    // while (testInteger != 0)
	// {
	// 	scanf("%d", &testInteger);
    // 	printf("d Number = %d\n",testInteger);
	// 	scanf("%i\n", &testInteger);
    // 	printf("i Number = %i\n",testInteger);
	// }


	// // tests for %
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
