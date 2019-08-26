#include <stdio.h>
int main(){

    int nro1, nro2, resultado;
    

    printf("\n digite dois numeros:\n");
    scanf("%d", &nro1);
    scanf("%d", &nro2);

    resultado = nro1 + nro2;
    printf("\n resultado = %d \n",resultado);
 
    return 0;
}