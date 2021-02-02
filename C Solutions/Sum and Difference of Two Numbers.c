#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    scanf("%d%d",&a,&b);
    printf("%d %d",a+b,a-b);
    scanf("%f%f",&c,&d);
    printf("\n%.1f %.1f",c+d,c-d);
    
    return 0;
}

