#include <unistd.h>		//para usar el write
#include <stdio.h>		//para usar el printf
#include <stdbool.h>	//para usar los booleanos true / false
#include <stdlib.h> 	//para la function exit

//solo se usara para imprimir las posiciones despues de hacer la logica
void ft_print(char c)
{
	write(1, &c, 1);
}

//valida si los datos ingresados existen y si son mayores a 0.
void ft_filter(int x, int y)
{
	if((x == ' ' || y == ' ') || (x < 0 || y < 0)){
		printf("error...");
		exit(0);
	}
}

/*
	OJO:
	la logica se puede basar en la complejidad del programa, pero seria mejor crear nuevas funciones
	que hagan partes pequeñas y su resultado pasar a la logica y que este haga lo que quiera con dicha respuesta.
	como imprimir en pantalla,  analizar, etc.
	de tal modo como se hizo con ft_filter.
*/

void ft_sud_logic(int x)
{

}

//logica del programa
void ft_logic(int x, int y)
{
	//le decimos que si es falso termine la ejecucion y no haga nada.
	ft_filter(x, y);

	int frame = 0;
	while (frame <= x)
	{
		ft_print('X');
		frame++;
	}
	

}

//ejecucion del programa
int main ()
{
	ft_logic(4, 1);
	return (0);
}