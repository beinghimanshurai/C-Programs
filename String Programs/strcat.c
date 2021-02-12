//For Concatenation to store two string value in one single string.
#include<stdio.h>
#include<string.h>
int main()
{
    char name1[20],name2[20];
    printf("Enter the first name:\n");
    gets(name1);
    printf("\nEnter the second name:\n");
    gets(name2);
    puts(strcat(name1,name2));// We can use printf instead of Puts.
    puts(name2); //same value will be print becz both value were stored in name1
return 0;
}
