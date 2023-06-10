#include <unistd.h>
#include <stdbool.h>

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
		ft_print('O');
	}else{
		ft_print('X');
	}
}

int main ()
{
	ft_logic(2, ' ');
	return (0);
}