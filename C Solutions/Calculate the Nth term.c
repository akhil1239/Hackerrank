#include <stdio.h>

int find_nth_term(int n, int a, int b, int c) {
  int x=a+b+c;
  if(n>4) x=find_nth_term(--n,b,c,a+b+c);
  return x;
}

int main() {
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
    printf("%d", ans); 
    return 0;
}
