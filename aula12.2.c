#include <stdio.h>
int main(){
    //operador OU (||): O resultado é 1 se
    //uma das expressões for 1 e 0 se ambas
    //as expressões forem 0
    int r, x = 5, y = 3;
    r = (x > 2) || (y > x);
    printf("\n resultado = %d \n",r);

    r = (x%2 ==0) || (y < 0);
    printf("\n resultado = %d \n",r);

    return 0;
}