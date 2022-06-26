/*Escribir un programa que reciba una serie de cadenas de caracteres
como argumentos. El programa deberá concatenarlas y dar la vuelta a la cadena
resultante. La cadena que almacene la concatenación de los argumentos debe
utilizar la memoria justa y necesaria.
*/
#include <stdio.h>
#include <string.h>

char cadena(char strin1[],char strin2[])
{
    strcat(strin1, strin2);

    printf("La cadena concatenada es: %s", strin1);

    strrev(strin1);

    printf("\nLa cadena al revés es: %s", strin1);
}

int main(void)
{
    char frase1[]={"Me gusta el pan"}, frase2[]={" con mayonesa"};
    cadena(frase1, frase2);
}