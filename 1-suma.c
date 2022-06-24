/*Escribir una función que sume dos números. Implemente un programa
que la utilice*/

#include <stdio.h>

float add2numbers(float num1,float num2)
{
    float add=0;

    add = num1+num2;

    return add;
}

int main(void)
{
    float number1, number2, result=0;

    printf("Digite un número: "); 
    scanf("%f", &number1);
    printf("Digite un número: "); 
    scanf("%f", &number2);

    result = add2numbers(number1, number2);

    printf("La suma de los dos números digitados es: %f", result);

    return 0;
}