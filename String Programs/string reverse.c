#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int len,x;
    int i,j;
    printf("Enter a string to be reversed :"); //ravi
    gets(a);
    for(len=0;a[len]!= '\0';len++);
    //len=strlen(a);
    printf("%d\n",len);
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        b[j]=a[i];
    }
    printf("reverse of a string is: %s",b);

return 0;
}
