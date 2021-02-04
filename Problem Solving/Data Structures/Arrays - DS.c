#include <stdio.h>
int main(){
int n,i;
scanf("%d",&n);
int A[n];
for(i=1;i<=n;i++)
    scanf("%d ",&A[i]);
for(i=n;i>=1;i--)
    printf("%d ",A[i]);
}
