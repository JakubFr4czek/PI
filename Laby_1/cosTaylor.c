#include<stdio.h>
#include<math.h>

/*

    cosx
    -sinx
    -cosx
    sinx

    Taylor:

    f(0)(x) * (x -x0)^n/0!

*/

double taylorCos(float x){

    return 1 + 0 + ((-1 * x)/2) + 0;

}

int main(void){

    for(int i = 1; i < 10; i++){

        printf("%f %f\n", cos((float)i / (float)10), taylorCos((float)i / (float)10));

    }

    return 0;

}
