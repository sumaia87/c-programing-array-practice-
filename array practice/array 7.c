//Find minimum number
#include<stdio.h>
int main(){
int num[10],n,i;
printf("How many numbers  ");
scanf("%d",&n);
for(i=0;i<n; i++)
{
    scanf("%d",&num[i]);
}
int min =num[0];
for(i=1;i<n;i++)
{
    if(min>num[i])
        min = num[i];
}
printf("Minimum   is = %d",min);
}
