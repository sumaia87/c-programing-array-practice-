#include<stdio.h>
int main(){
int i,j;
int A[3][4] = {{5,6,7,8},{3,4,56,87},{23,80,60,54}};
for(i=0;i<3;i++)
{
for(j=0;j<4;j++)
{
    printf("%d ",A[i][j]);
}
printf("\n");

}
return 0;
}
