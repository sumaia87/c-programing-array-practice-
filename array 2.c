#include<stdio.h>
int main(){
int a[]={10,10,10,10,10},sum =0,i;
for(i =0;i<8; i++)
{
    sum = sum +a[i];
}
printf("The sum is :%d\n",sum);
printf("The average is :%f\n",(float)sum/5);
getch();




}
