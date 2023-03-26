#include <stdio.h>
#include <stdlib.h>

int main(){
    int num_u, num_d, div_1, div_2, i;
    printf("Escribir el valor de dos números enteros\n");
    scanf("%d %d", &num_u, &num_d);
    div_1 = div_2 = 0;
    for(i=1; i<=(num_u/2) + 1; i++)
    {
        if(num_u%i == 0)
        {
            div_1 = div_1 + i;
        }
    }    
    for(i=1; i<=(num_d/2) + 1; i++)
    {
        if(num_d%i == 0)
        {
            div_2 = div_2 + i;
        }
    }
    printf("Los divisores del primer número suman = %d \nLos divisores del segundo número suman = %d \n", div_1,div_2);
    if(div_1 == num_d && div_2 == num_u)
    {
        printf("Son números amigos\n");
    }
    else
    {
        printf("No son numeros amigos\n");
    }
    system("pause");
    return 0;
}