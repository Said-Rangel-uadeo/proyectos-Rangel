/* Prograna: Nombre */
#include <conio.h>
#include <stdio.h>
//#include <cstdio> para usar en lugar de los otros dos puntos: #include <conio.h> O #include <stdio.h>//
int main()
{
char nombre[20]; char apellido [20]; //Cantidad de caracteres que tiene cada variable//
printf ("introdusca su nombre:"); //Pide el nombre//
scanf ("%s",nombre); //variable para el apellido//
printf ("Introdusca su apellido:"); //Pide el apellido
scanf ("%s", apellido); //Variable para el apellido//
printf ("hola %s %s, buenos dias",nombre, apellido); //Agregar un %s por cada variable, 2 en este caso//
getch();  //Pausa//
}
