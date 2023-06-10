#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void ft_print(char c)
{
	write(1, &c, 1);
}

bool ft_filter(int x, int y)
{
	if((x != ' ' && y != ' ') && (x > 0 && y > 0))
	{
		return true;
	}else{
		return false;
	}
}

void ft_logic(int x, int y)
{
	if(ft_filter(x, y))
	{
		printf("Datos validos!");
	}else{
		printf("Datos ingresados no válidos");
	}
}

int main ()
{
	ft_logic(2, 1);
	return (0);
}