#include<stdio.h>
#include<math.h>

int main(void){

    int n;

    scanf("%d", &n);

    if(n==0){

        printf("0\n");
        return 0;

    }

    int a = 1, b = 1;

    while(a <= sqrt(n)){

        if(n%a == 0){

            int c = 1, d = 1;

            while(c < (n/a)){

                int temp = c;
                c = d;
                d += temp;

            }

            if(c == (n/a)){

                printf("%d %d\n",c,a);
                return 0;

            }

        }

        int temp = a;
        a = b;
        b+=temp;

    }

    printf("Nie ma takich!\n");

    return 0;
}