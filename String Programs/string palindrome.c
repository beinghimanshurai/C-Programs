#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    int len,flag=0;
    int i,j;
    printf("Enter string:");      //tHIS IS TO FIND THE LENGTH OF ENTERED STRING.(;) BECZ TO STOP LPOOP ONCE LENGTH FOUND
    gets(a);                       //; this entire loop run and give in last overall value of 'len' where no ; print lenth
    //len=strlen(a);
    for(len=0;a[len]!= '\0';len++);
                                     // printf("\nl=%d",len);  //one by one like "HIMANSHU= len=8...len=0,1,2,3...7.
    for(j=0,i=len-1;i>=0;i--,j++)    //this for loop is to reverse the loop.
    {


        b[j] = a[i]; //here after evry one time complete run of loop becz no ; it will store value of b{j} from a[i].
    }
    for(i=0;i<len;i++)
    {
        if(a[i]!=b[i])
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
        printf("\nString is palindrome");
    else
        printf("\nString is not palindrome");
return 0;
}

