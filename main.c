// to delete the vowels in the given string and display the string without vowels.
#include <stdio.h>
#include <stdlib.h>
# include<string.h>

int main()
{
    char str[20];
    int i,j=0;


    printf("enter the string\n");
    scanf("%s",&str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!='a'&& str[i]!='e'&& str[i]!='i'&& str[i]!='o'&& str[i]!='u')
        {
            str[j]=str[i];
            j++;
        }
    }
str[j]='\0';

    printf("the string is %s  ",str);

}
