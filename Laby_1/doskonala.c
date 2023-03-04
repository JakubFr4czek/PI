#include<stdio.h>
#include<stdbool.h>
#include<math.h>

bool znajdz(int n){

    int sum = 0;

    for(int i = 2; i <= sqrt(n); i++){

        if(n%i == 0){

            sum+=i + n/i;

        }

    }sum+=1;
    if(sum == n) return true;
    return false;


}


int main(){

    int n;

    scanf("%d", &n);

    int res = 0;

    for(int i = 2; i <= n; i++){

        if(znajdz(i)) res+=1;

    }

    printf("%d\n", res);


}

