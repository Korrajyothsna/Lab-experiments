#include <stdio.h>
int main(){
float i,result;
printf("enter i:");
scanf("%f", &i);
result=(i++) + (++i);
printf("result is %f", result);
return 0;
}
    