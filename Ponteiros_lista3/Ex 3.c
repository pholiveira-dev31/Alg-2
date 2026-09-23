#include <stdio.h>

int main(){

    int m[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int *p=&m[0][0];
    int total=0;

    total = *p;
    total = total + *(p+4);
    total = total + *(p+8);

    printf("Soma da diagonal: %d",total);

    return 0;
}
