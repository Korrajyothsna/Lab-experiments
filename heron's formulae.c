#include <stdio.h>
#include<math.h>//area of triangle(heron's formulae)
int main() {
float a,b,c,s,A;
printf("enter a,b,c:");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
A=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area of triangle of sides %f%f%f is %f",a,b,c,A);
return 0;
}
    