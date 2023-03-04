#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>

void sito(int* tab, int n){

    tab[0] = 1;
    tab[1] = 1;

    for(int i = 2; i <= sqrt(n); i+=1){

        if(tab[i] == 0){

            for(int j = i + i; j < n; j+=i)
                tab[j]=1;
        }


    }

}

bool czy_malejaca(int num){

    while(num/10 > 0){

        int a = num%10;
        int b = (num/10)%10;

        printf("%d %d\n", a,b);

        if(b > a) return false;

        num/=10;


    }
    return true;

}


int main(void){

    int n;

    scanf("%d",&n);

    int* tab;
    tab = (int*)calloc(n, sizeof(int));

    sito(tab,n);

    for(int i = 0; i < n; i+=1){

        if(tab[i] == 0){
        
            if(czy_malejaca(i))
                printf("res : %d \n", i);

        }

    }

    return 0;

}