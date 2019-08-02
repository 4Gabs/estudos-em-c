#include <stdio.h>
int main(){

    float f1, f2 = 5.25;
    
    f1 = f2 + 10 / 2.0;
    printf("\n f1 = %f \n",f1);

    f1 = (f2 + 10) / 2.0;
    printf("\n f1 = %f \n",f1);

    return 0;
}