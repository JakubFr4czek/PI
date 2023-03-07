#include<stdio.h>
#include<math.h>

/*

    Funkcja wypełnia tablicę rzeczywistą v n wartościami równomiernie rozłożonymi
    w przedziale [start, stop]. Wartość n powinna być nieujemna; dla n = 1 funkcja
    zwraca jednoelementową tablicę zawierającą wartość start. Dla n = 0 funkcja
    zwraca pustą tablicę.

*/

 void linspace(double v[], double start, double stop, int n){

    if(n == 1) v[0] = start;
    else if(n > 1){

        double step = (fabs(start - stop))/(n-1);

        if(start > stop) step*=(-1);

        double curr = start;

        for(int i = 0; i < n; i+=1){

            v[i] = curr;

            curr+=step;

        }

    }

 }

/*

    Funkcja dodaje i-ty element tablicy rzeczywistej v2 do i-tego elementu tablicy v1.
    Obie tablice są n-elementowe.

*/

 void add(double v1[], const double v2[], int n){

    for(int  i = 0; i < n; i+=1){

        v1[i] += v2[i];

    }

}

/*

    Funkcja oblicza i zwraca iloczyn skalarny wektorów v1 i v2 o długości n

*/

double dot_product(const double v1[], const double v2[], int n){

    double res = 0;

    for(int i = 0; i < n; i+=1){

        res += v1[i]*v2[i];

    }

    return res;

}

/*

    Funkcja mnoży każdy element tablicy rzeczywistej v (o długości n) przez liczbę
    rzeczywistą s

*/

void multiply_by_scalar(double v[], int n, double s){

    for(int i = 0; i < n; i+=1){

        v[i] *= s;

    }

}

/*

    Funkcja wypełnia tablicę rzeczywistą v n wartościami od start (włącznie) z krokiem step. Krok może mieć wartość ujemną - wtedy kolejne elementy tablicy będą
    stanowić ciąg malejący

*/

void range(double v[], int n, double start, double step){

    double curr = start;

    for(int i = 0; i < n; i+=1){

        v[i] = curr;
        curr+=step;

    }

}

/*

    czyta ze standardowego wejścia n elementową tablicę rzeczywistą v

*/

void read_vector(double v[], int n){

    for(int i = 0; i < n; i += 1){

        double temp;

        scanf("%lf", &temp);

        v[i] = temp;

    }

}

void print_vector(double v[], int n){

    for(int i = 0; i < n; i += 1){

        printf("%.2lf ", v[i]);

    }printf("\n");

}

int main(void){

    double v1[1000];
    double v2[1000];

    int ile;
    scanf("%d", &ile);

    double start,stop,a,step,res;
    int n;

    switch(ile){

        case 1:

            

            scanf("%d", &n);
            scanf("%lf", &start);
            scanf("%lf", &stop);

            linspace(v1, start, stop, n);

            print_vector(v1, n);

            break;
        
        case 2:

            scanf("%d", &n);

            read_vector(v1,n);

            read_vector(v2,n);

            add(v1,v2,n);

            print_vector(v1, n);

            break;

        case 3:

            scanf("%d", &n);

            read_vector(v1,n);

            read_vector(v2,n);

            res = dot_product(v1,v2,n);

            printf("%.2lf", res);

            break;

        case 4:

            scanf("%d %lf", &n, &a);

            read_vector(v1, n);

            multiply_by_scalar(v1, n, a);

            print_vector(v1, n);

            break;

        case 5:

            scanf("%d %lf %lf", &n, &start, &step);

            range(v1, n, start, step);

            print_vector(v1, n);

            break;

        default:
            break;

    }


    return 0;

}
