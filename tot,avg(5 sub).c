#include <stdio.h>
int main(){
int sub1,sub2,sub3,sub4, sub5;
float tot,avg;
printf("enter sub1, sub2,sub3,sub4,sub5:");
scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
tot=sub1+sub2+sub3+sub4+sub5;
avg=tot/5;
{
printf("\ntotal is %f", tot);
printf("\naverage is %f",avg);
}
return 0;
}
    