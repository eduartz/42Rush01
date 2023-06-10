#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

//solo se usara para imprimir las posiciones despues de hacer la logica
void ft_print(char c)
{
	write(1, &c, 1);
}

//valida si los datos ingresados existen y si son mayores a 0.
bool ft_filter(int x, int y)
{
	if((x != ' ' && y != ' ') && (x > 0 && y > 0))
	{
		return true;
	}else{
		return false;
	}
}

/*
	OJO:
	la logica se puede basar en la complejidad del programa, pero seria mejor crear nuevas funciones
	que hagan partes pequeñas y su resultado pasar a la logica y que este haga lo que quiera con dicha respuesta.
	como imprimir en pantalla,  analizar, etc.
	de tal modo como se hizo con ft_filter.
*/

//logica del programa
void ft_logic(int x, int y)
{
	if(ft_filter(x, y))
	{
		printf("Datos validos!");
	}else{
		printf("Datos ingresados no válidos");
	}
}

//ejecucion del programa
int main ()
{
	ft_logic(2, 1);
	return (0);
}