//AVERAGE USING ARRAY AND FOR LOOP
#include<stdio.h>
int main()
{int sum,arry[100],n,i;
float average;
printf("enter the number you want to perform for ");
scanf("%d",&n);
printf("\n");
for(i=0;i<n;i++)
{

    scanf("%d",&arry[i]);
}
sum=0;
for(i=0;i<n;i++)
{
    sum=sum+arry[i];
}
printf("sum is %d",sum);
 average=sum/n;
printf("\n avg is:%f",average);
return 0;


}
