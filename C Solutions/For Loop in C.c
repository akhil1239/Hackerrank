#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,a,b;
    char *arr[]={"one","two","three","four","five","six","seven","eight","nine"};
    scanf("%d\n%d", &a, &b);
  
    for(n=a;n<=b;n++){
        if(n>=1 && n<=9)
            printf("%s\n",arr[n-1]);
        else{
            if(n>9){
                if(n%2==0)
                    printf("even\n");
                else
                    printf("odd\n");    
            }
        }
    }
    return 0;
}

