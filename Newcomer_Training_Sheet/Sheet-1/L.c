
#include <stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100],f1[100],f2[100];
    int x,a;
    scanf("%s %s %s %s",f1,s1,f2,s2);
    if(strcmp(s1,s2)==0)
    {
        printf("ARE Brothers\n");
    }
    else
    {
        printf("NOT\n");
    }
    return 0;
}