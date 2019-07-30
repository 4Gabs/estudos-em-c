#include <stdio.h>

int main(){

    float f = 97.3;
    char ch1, ch2 = 'A';

    ch1 = f;
    printf("\n ch1 = %c \n",ch1);

    f = ch2;
    printf("\n f = %f \n",f);

    return 0;
}