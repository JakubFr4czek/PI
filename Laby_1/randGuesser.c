#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void){

    srand(time(NULL));

    int p = 0, k = 10000;

    int X = rand()%((k - p) + 1) + p;

    printf("X: %d\n", X);

    int N = -1;
    int i = 1;
    while(N!=X){

        N = rand()%((k - p) + 1) + p;

        printf("%d ",N);

        if(N < X) p = N;
        else if(N > X) k = N;

        i+=1;

    }

    return 0;

}