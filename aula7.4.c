#include <stdio.h>

int main(){

    int x1, x2 = 9;
    float f1, f2;
    
    x1 = x2 / 2;
    printf("\n x1 = %d \n",x1);

    f1 = x2 / 2;
    printf("\n f1 = %f \n",f1);

    f2 = x2 / 2.0;
    printf("\n f2 = %f \n",f2);

    return 0;
 }