//FILES PROGRAM OUTPUT IS SHARED USING CAMSCANNER
#include<stdio.h>
 int main()
{   int i=0,data[13];
    FILE *fp;
    fp=fopen("INPUT.txt","w");
    if(fp==0)
    {
        printf("error");
    }
for(i=0;i<=5;i++)
{printf("enter data to be copied to file");
    scanf("%d",&data[i]);
fprintf(fp,"%d \t",data[i]);
}
printf("the data was inputed into file\n");
   for(i=0;i<=5;i++)
    {fscanf(fp,"%d",&data[i]);
printf("data from file is:%d \n",data[i]);}

 fclose(fp);

 }
