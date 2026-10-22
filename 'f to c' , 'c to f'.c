#include<stdio.h>
int main (){
float f,c;
//fahrenheit to celsius 
printf("\n f:");
scanf("%f",&f);
c=5.0/9.0*(f-32);
printf("\ncelsius=%.2f",c);
//celsius to fahrenheit 
printf("\n c:");
scanf("%f",&c);
f=(c * 9.0/5.0)+32;
printf("\nfahrenheit=%.2f",f);
return 0;
}

    