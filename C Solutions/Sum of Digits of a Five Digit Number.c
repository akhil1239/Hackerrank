#include <stdio.h>

int main() {
    int n,i=1,s=0,r;
    scanf("%d", &n);
    while(i<=n){
        r=n%10;
        s=s+r;
        n=n/10;
    }
    printf("%d",s);
    return 0;
}
