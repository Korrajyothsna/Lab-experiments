#include <stdio.h>
int main(){
float num1,num2,num3,max;
printf("enter num1, num2,num3:");
scanf("%f%f%f",&num1,&num2,&num3);
max=((num1>num2)&&(num1>num3))?(num1):(num2>num3)?num2:num3;
printf("maximum number is %f", max);
return 0;
}
    