#include <stdio.h>
#include <stdlib.h>

int main(){

    int clientes,productos_total,ganador,cedula,i,cinco = 0,tres = 0;
    char color;
    float precio,descuento,prev_precio = 0;
    const int min_prod = 3,min_precio = 1000, max_precio = 5000;

    printf("Ingrese la cantidad de clientes\n");
    scanf(" %d", &clientes);
    descuento = 0.5;
    for(i=1; i <= clientes; i++)
    {
        printf("\nIngrese la cantidad de productos que ha comprado el cliente numero %d\n", i);
        scanf(" %d", &productos_total);
        if(productos_total <= min_prod)
        {
            printf("Usted no es tomado en cuenta para el descuento\n");
            continue;
        }
        printf("\nEscriba el total de la compra del cliente numero %d\n", i);
        scanf(" %f", &precio);
        if(precio > max_precio || precio < min_precio)
        {
            printf("Usted no es tomado en cuenta para el descuento\n");
            continue;
        }
        printf("\nIngrese el color de la etiqueta Amarillo (A), Morado(M), Otro (X)\n");
        scanf(" %c", &color);
        switch (color)
        {
        case 'a':
        case 'A':
        case 'm':
        case 'M':
            break;
        
        default:
            printf("Usted no es tomado en cuenta para el descuento\n");
            continue;
            break;
        }

        printf("\nIngrese su cedula\n");
        scanf("%d", &cedula);
        if(cedula%2 == 0)
        {
            printf("\nTermina en un digito par entonces se le otorga 5%% mas de descuento\n");
            descuento = descuento + 0.05;
            cinco++;
        }
        else
        {
            printf("\nTermina en un digito impar entonces se le otorga 3%% mas de descuento\n");
            descuento = descuento + 0.03;
            tres++;
        }
        if(precio > prev_precio)
        {
            ganador = i;
            prev_precio = precio;
        }
    }
    printf("\nEl Porcentaje de clientes con descuentos es de = %f %%\nLa cantidad de ganadores con el 5%% es de = %d\nLa cantidad de ganadores con el 3%% es de = %d\nEl cliente ganador del Gif es el numero = %d\n",((float)(cinco + tres)/(float)clientes)*(float)100, cinco, tres, ganador);
    system("pause");
    return 0;
}
