#include <stdio.h>
#include<math.h>//compound interest 
int main() {
float ci,rate, principal_amount,time, amount;
printf("rate, principal_amount,time(in years):");
scanf("%f%f%f",&rate,& principal_amount,&time);
amount = principal_amount * pow((1 + rate / 100.0), time);
printf("\ntotal amount=%f", amount);
ci= amount - principal_amount;
printf("\ncompound interest=%f", ci);
return 0;
}
