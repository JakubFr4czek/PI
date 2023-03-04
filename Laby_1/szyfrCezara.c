#include<stdio.h>


int main(void){

    char a[100];

    scanf("%[^\n]", a);
    

    int i = 0;
    while(a[i] != '\0'){
        if(a[i] == 90) a[i] = 65;
        else if(a[i] == 122) a[i] = 97;
        else if((a[i] >= 65 && a[i] < 90) || (a[i] >= 97 && a[i] < 122)) a[i] += 1;

        i+=1;

    }

    printf("%s",a);

    return 0;

}