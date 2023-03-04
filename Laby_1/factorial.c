#include<stdio.h>

//silnia iteracyjnie

int main(void){

    int n;

    scanf("%d",&n);

    long long res = 1;

    while(n > 1){

        res *= n;
        n-=1;

    }

    printf("%lld\n", res);

    return 0;
}