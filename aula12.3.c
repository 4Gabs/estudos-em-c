#include <stdio.h>
int main(){
    // Operador NEGAÇÃO (!):
    //o operador é 1 se a expressão for 0
    //o operador é 0 se a expressão for 1
    int r, x = 5, y = 3;

    r = !(x > 2);
    printf("\n resultado = %d\n",r);

    r = !((x > 7) && (x > y));
    printf("\n resultado = %d \n",r);


    return 0;
}