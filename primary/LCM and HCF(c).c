#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    scanf("%d",&t);
    for(int j=0;j<t;j++){
        long int a,b,m,n,t,hcf,lcm;
        scanf("%ld%ld", &a, &b);
        m = a;
        n = b;
        while (n != 0)
        {
        t = n;
        n = m % n;
        m = t;
        }
    hcf = m;
    lcm= (a*b)/hcf;
        printf("%ld ",lcm);
        printf("%ld\n",hcf);
    }
      return 0;
}