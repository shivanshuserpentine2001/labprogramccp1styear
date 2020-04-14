//PROGRAM TO CHECK FOR PALINDROME
#include <stdio.h>
#include <string.h>

int main()
{ char strg[100];
    int x, i,lastchar;
    printf("enter the word please:");
    scanf("%s",strg);
    lastchar=strlen(strg)-1;
    for(i=0;i<lastchar;i++)
    {
        if(strg[i]!= strg[lastchar-i])
         {
           x=1;
        break; }
    }
    if(x==1)
        {printf("not a palindrome ");}
    else
    {

     printf("\n it is a palindrom");}

    return 0;
}
