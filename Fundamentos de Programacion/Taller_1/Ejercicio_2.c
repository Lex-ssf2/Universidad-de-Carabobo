#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num,aux,tres,cinco,cantidad,i;
    tres = cinco = cantidad = 0;
    
    printf("Ingrese cantidad de numeros a analizar\n");
    scanf("%d", &cantidad);
    for(i=1; i <= cantidad; i++)
    {
        printf("Ingrese un numero\n");
        scanf("%d", &num);
        aux = 0;
        while (num != 0) 
        {
            switch (num%10)
            {
            case -5:
            case 5:
                cinco++;
                break;
            case -3:
            case 3:
                tres++;
                break;       
            default:
                break;
            }
            aux = aux*10 + num%10;
            num = num/10;
        }
        if(fabs(aux) >= 100)
        {
            printf("La cifra invertida es = %d\n", aux);
        }
    }
    printf("La cantidad de 5 ingresado = %d \nLa cantidad de 3 ingresado = %d \n", cinco,tres);
    system("pause");
    return 0;
}