#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct s_count
{
	int byte;
	int index;
	va_list argument;
} t_count;


int ft_putchar(char c)
{
	int i;
	return (i = write(1, &c, 1));
}

int ft_strlen(const char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int ft_putstr(const char *str)
{
	int i;
	i = 0;

	if (!str)
		i = write(1, "(null)", 6);
	else 
		i = write(1, &*str, ft_strlen(str));
	return (i);
}


int ft_putnbr(long nb)
{
	static int byte;
	int minus;
	byte = 0;
	minus = 0;
	if (nb < 0)
	{
		minus = ft_putchar('-');
		nb *= -1;
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	byte += ft_putchar(nb + 48);
	return (byte + minus);
}

int hexa(unsigned long long nb)
{
	int byte;
	byte = 0;

	if (nb <= 9)
	{
		byte += ft_putchar(nb + 48);
	}
	else if (nb >= 16)
	{
		byte += hexa(nb /16);
		byte += hexa(nb % 16);
	}
	else
		byte += ft_putchar(nb - 10 + 'a');
	return (byte);
}
void conversion(const char *format, t_count *count)
{
	if (format[count->index] == 's')
			count->byte += ft_putstr(va_arg(count->argument, char *));
	else if (format[count->index] == 'd')
			count->byte += ft_putnbr(va_arg(count->argument, int));
	else if (format[count->index] == 'x')
			count->byte += hexa(va_arg(count->argument, unsigned int));
}

void printer(const char *format, t_count *count)
{
	if (format[count->index] != '%')
			count->byte += ft_putchar(format[count->index]);
	else if (format[count->index] == '%')
	{
			count->index++;
			conversion(format, count);
	}
}

int ft_printf(const char *format, ...)
{
	t_count count;

	count.byte = 0;
	count.index = 0;
	va_start(count.argument, (char *)format);
	while (format[count.index])
	{
		printer(format, &count);
		count.index++;
	}
	va_end(count.argument);
	return (count.byte);
}

#include <stdio.h>

int ft_printf(const char *format, ...);
int main()
{
	printf("%s\n", "toto");
	ft_printf("%s\n", "toto");
	printf("Magic %s is %d\n", "number", 42);
	ft_printf("Magic %s is %d\n", "number", 42);
	printf("Hexadecimal for %d is %x\n", 42, 42);
	ft_printf("Hexadecimal for %d is %x\n", 42, 42);
	return (0);
}

