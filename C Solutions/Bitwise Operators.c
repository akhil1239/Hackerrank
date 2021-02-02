#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
  int m1=0,m2=0,m3=0,a,b,c;
  for(int i=1;i<=k;i++){
    for(int j=i+1;j<=n;j++){
        a=i&j;
        if(m1<a && a<k) m1=a;
        b=i|j;
        if(m2<b && b<k) m2=b;
        c=a^b;
        if(m3<c && c<k) m3=c; 
    }
  }
  printf("%d\n%d\n%d\n",m1,m2,m3);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
