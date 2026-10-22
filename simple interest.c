#include <stdio.h>//simple interest 
int main() {
float principal, rate, time, interest,tot;
printf("Enter Principal Amount: ");
scanf("%f", &principal);
printf("Enter Rate of Interest: ");
scanf("%f", &rate);
printf("Enter Time Period (in years): ");
scanf("%f", &time);
interest = (principal * rate * time) / 100.0;
printf("\nSimple Interest = Rs. %.2f\n", interest);
tot=principal + interest;
printf("Total Amount to Pay = Rs. %.2f\n", tot);
return 0;
}
