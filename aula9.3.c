#include <stdio.h>
int main(){

    int x = 10, y = 10;

    y = x++;
    // y = x;
    // x++;
    printf("\n x = %d \n",x);
    printf("\n y = %d \n",y);

    return 0;
}