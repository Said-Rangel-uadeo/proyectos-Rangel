//Operaciones//
#include <conio.h>
#include <stdio.h>

int main (){

	int num1, num2, resta, suma, division, multiplicacion;

	printf("ingrese el primer numero");
	scanf("%d", &num1);
	printf("ingrese el segundo numero");
	scanf("%d", &num2);
	suma = num1 + num2;
	resta = num1 - num2;
	division = num1 / num2;
	multiplicacion = num1 * num2;
	printf("\tgfv  nresultado de la suma %d", suma);
	printf("\nresultado de la resta %d", resta);
	printf("\nresultado de la division %d", division);
	printf("\nresultado de la multiplicacion %d", multiplicacion);

	getch();
	return 0;
}
