//PROGRAM TO INTERCHANGE LARGEST AND SMALLEST
#include <stdio.h>
int main()
{int arr[100],i,arrlargest,arrsmallest,n,temp;
printf("***************");
printf("\nenter the numbers you want to do for:");
scanf("%d",&n);
printf("\n");
for(i=0;i<n;i++)
   {

    scanf("%d",&arr[i]);}
    arrlargest=arr[0];
    for(i=1;i<n;i++)
 {
     if(arr[i]>arrlargest)
        arrlargest=arr[i];
 }
 printf(" '%d' is the largest number of the array ",arrlargest);
printf("\n ***************");
printf("\n");
arrsmallest=arr[0];
    for(i=1;i<n;i++)
 {
     if(arr[i]<arrsmallest)
        arrsmallest=arr[i];
 }
 printf("\n '%d' is the smallest number of the array ",arrsmallest);
temp=arrlargest;
arrlargest=arrsmallest;
arrsmallest=temp;
printf("\ninterchanged figures are as follows : smallest%d & largest%d",arrsmallest,arrlargest);
return 0;
}
