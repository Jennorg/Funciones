/*Escribir un programa que reciba como argumento un conjunto de
números. Calcular la media mediante una función*/

#include <stdio.h>

void registro(int p[5], int i)
{
    for (i = 0; i < 5; i++)
    {   
        printf("Digite un número: ");
        scanf("%d", &p[i]);
    }
}

int mediaconjunto(int p2[5], int x)
{
    int promedio=0;
    for ( x = 0; x < 5; x++)
    {
        promedio += p2[x];
    }
    promedio /= 5;
    return promedio;
}

void output(result)
{
    printf("\nLa media de los números ingresados es: %d", result);
}

int main(void)
{
    int conjunto[5], cycle, media;

    registro(conjunto, cycle);
    media = mediaconjunto(conjunto, cycle);
    output(media);
}

