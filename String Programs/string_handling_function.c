#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[100],e[100],f[100];
    printf("Enter the first string:\n");
    gets(a);
    printf("Enter the second string:\n");
    gets(b);
    printf("Enter the third string:\n");
    gets(c);
    printf("Enter the fourth string:\n");
    gets(e);
    printf("Enter the fifth string:\n");
    gets(f);
    //Combining two strings.
    strcat(a,b);
    printf("\nString obtained on Concatenation is(STRCAT) :\n");
    puts(a);
    //Comparing two functions return either 0 OR 1, ASCII value.
    strcmp(a,b);
    printf("\nThe result of string comparison is(STRCMP):\n%d",strcmp(a,b));
    //To find the length of a string.
    strlen(c);
    printf("\n\nLength of the string is (STRLEN) :\n %d",strlen(f));
    //It copy string2 value in string1.
    strcpy(a,b);
    printf("\n\nResultant(STRCPY):\n %s",a);//also we can use strcpy(a,b) instead of 'a' inside printf" ".
    //It is used to reverse the string.
    strrev(e);
    printf("\n\nReverse of the string is(STRREV): \n %s",e);
    return 0;
}
