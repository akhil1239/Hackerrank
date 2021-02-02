#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void update(int *a,int *b) {
    // Complete this function 
    *a=*a + *b;       // OR  int x=*a+*b;     // because *a will update
    *b=abs(*a-2**b);  //     int y=abs(*a-*b); // and will use in *b
}                     //     printf("%d\n%d",x,y); 

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
