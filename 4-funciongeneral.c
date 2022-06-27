/*Escribir una función que calcule y presente las raíces reales de la
ecuación de segundo grado
ax2+bx+c=O
utilizando la fórmula
𝑥 =(−𝑏 ± √(𝑏*b − 4𝑎𝑐))/(2a)
Suponer que a, b y c son argumentos en coma flotante con valores dados y que x1
y que x2 son variables en coma flotante. Suponer también que b'>4*a*c, de forma
que las raíces calculadas son siempre reales.
*/
#include <stdio.h>
#include <math.h>

float ecuacion(float a, float b, float c)
{
    float x1 = 0, x2 = 0;
    x1 = (-b - (sqrt(pow(b, 2)-4*a*c))/2*a);
    x2 = (-b + (sqrt(pow(b, 2)-4*a*c))/2*a);

    printf("\nEl valor de x1 es: %f", x1);
    printf("\nEl valor de x2 es: %f", x2);
}

int main(void)
{
    float a = 2, b = 50, c = 3;
    ecuacion(a, b, c);
}