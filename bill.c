#include<stdio.h>
int main(){
float total_bill;
int electricity_consumed;
printf("enter electricity consumed:");
scanf("%d", &electricity_consumed);
if(electricity_consumed<=100){
total_bill=electricity_consumed*1.50;
printf("total bill is %.2f",total_bill);
}else if(electricity_consumed<=200)
{
total_bill=electricity_consumed*2.50;
printf("total bill is %.2f",total_bill);
}else if(electricity_consumed<=500)
{
total_bill=electricity_consumed*4.00;
printf("total bill is %.2f",total_bill);
}else{
total_bill=electricity_consumed*6.00;
printf("total bill is %.2f",total_bill);
}
return 0;
}
    