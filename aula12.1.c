#include <stdio.h>
int main(){
    //operador E (&&): o resultado é 1 apenas
    //se ambas as expressões também forem 1
    //do contrário, o resultado é 0

    int r, x = 5, y = 3;

    r = (x > 2) && (y < x);
    printf("\n Resultado = %d \n",r);

    r = (x%2 == 0) && (y > 0);
    printf("\n Resultado = %d \n",r);


    return 0;
}