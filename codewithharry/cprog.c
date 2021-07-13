#include <stdio.h>
int main() {
float quotient,remainder,a,b;
printf("enter the values of a,b:");
scanf("%f%f",&a,&b);
quotient=a/b;
remainder=a%b;
printf("the quotient and remainder of a and b are %f and %f",quotient,remainder);
return 0;
}