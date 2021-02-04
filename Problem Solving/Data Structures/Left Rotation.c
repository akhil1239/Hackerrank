#include<stdio.h>
int main(){
    int i,j,n,d;
    scanf("%d %d",&n,&d);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d ",&a[i]);
    int x;
    while(d!=0){
        x=a[0];
        for(int j=1;j<=n;j++)               
            a[j-1]=a[j];
        a[n-1]=x;
        d--;
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}
