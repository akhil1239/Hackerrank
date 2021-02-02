#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    // char *s=(char*)malloc(100*sizeof(char));
    // scanf("%[^\n]",s);
    // int c;
    // char a='0';
    // for (int i=0; i<10; i++) {c=0;
    //     for(int j=0;j<strlen(s);j++)
    //         if(s[j]==a) c++;
    //     printf("%d ",c);
    //     a++;
    // }
    
    //         OR   Both are correct
    
    char s[1000];
    int map[10];
    gets(s);
    for(int i=0;i<10;i++) map[i]=0;
    for(int i=0;i<strlen(s);i++){
        int x=s[i]-'0';
        if(x>=0 && x<=9) map[x]++;
        
    }
    for(int i=0;i<10;i++) printf("%d ",map[i]);
    
    return 0;
}
