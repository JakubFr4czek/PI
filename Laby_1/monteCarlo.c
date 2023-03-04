#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

//LICZY DLA DODATNIEGO SINUSA!!!!!!!!!!!!!!

int main(void){

    int a, b, N;

    scanf("%d %d %d",&a,&b,&N);

    int d1 = 1; //bo, od OX do 1 - najwieksza wartosc sinusa
    int d2 = b - a; //dlugosc przedzialu

    srand(time(NULL));

    int inside = 0, outside = 0;

    for(int i = 0; i< N; i++){

        float x = ((b-a) * ((float)rand() / RAND_MAX) + a);
        float y = ((float)rand() / RAND_MAX);

        //printf("%f %f\n", x,y);
        //printf("%f %f\n",sin(x), y);
        if(sin(x) > y) inside+=1;
        else outside+=1;

    }

    //printf("%d, %d\n",inside, outside);

    float res = ((float)inside/(float)N) * (float)(b - a);

    printf("%f\n", res);

    return 0;

}