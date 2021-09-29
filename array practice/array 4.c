#include<stdio.h>
int main(){
int a[5],sum =0,average,i;
printf("enter 5 numbers :");
for(i=0;i<5;i++)
{
    scanf("%d",&a[i]);

}
for(i=0;i<5;i++)
{
    sum = sum+a[i];
    average = sum/5;
}
printf("The average is : %.3f\n",(float)sum/5);






}
