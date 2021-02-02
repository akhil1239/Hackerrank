#include <stdio.h>
int main()
{
    char ch,s[10],sen[25];
    scanf("%c",&ch);
    printf("%c",ch);

    scanf("%s",&s);
    printf("\n%s",s);

    scanf(" %[^\n]s",&sen);
    printf("\n%s",sen);
}
