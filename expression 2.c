#include <stdio.h>
int main(){
float A,B,C,D,result;
printf("enter A,B,C,D:");
scanf("%f%f%f%f", &A, &B, &C, &D);
result=A/B*C-B+A*D/3;
printf("result is %f", result);
return 0;
}
    