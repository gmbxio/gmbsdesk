#include<stdio.h>
int main(){
    float a,b;
    a = 5;
    b = 7;
    a = a+b;
    a = a-b;
    printf("%f",a);
    b = a+b;
    b = b-a;
    printf("\n%f", b);
    return 0;


}