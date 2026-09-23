#include <stdio.h>

void tabuada(int n){
    int i;

    for(i=1;i<=n;i++){
        printf("%d x %d = %d\n",i,n,i*n);
    }
}

int main(){
    int n;

    printf("Digite N: ");
    scanf("%d",&n);

    tabuada(n);

    return 0;
}