#include <stdio.h>//distance travelled by an object 
int main() {
float s,u,t,a;
printf("enter u,a,t:");
scanf("%f%f%f",&a,&u,&t);
s =(u*t) + (0.5 * a * t*t);
printf("distance is %f",s);
return 0;
}
    