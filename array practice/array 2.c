#include<stdio.h>
int main(){
int a[10]={4,5,7,8,3,6,4,9,5},sum=0,i;
for(i=0;i<10;i++)
{
    sum = sum+a[i];
}
printf("The sum is : %d\n",sum);
getch();


}
