#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    int i,len,c=0;
    printf("Enter the string:");
    gets(a);
    //len=strlen(a);
    for(len=0;len[a]!='\0';len++);
      printf("%d\n",len);
    for(i=0;i<len/2;i++)
    {
        if(a[i]==a[len-i-1])
        {
            c++;
        }
    }
    if(c==i)
        printf("It is palindrome");
    else
        printf("It is not palindrome");

    return 0;
}
