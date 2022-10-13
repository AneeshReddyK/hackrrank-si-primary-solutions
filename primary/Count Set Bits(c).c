#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
         long int n,count=0;
        scanf("%ld",&n);
    while(n!=0){
        if((n&1)==1)
            count++;
        n=n>>1;
    }
        printf("%ld\n",count);
    }
    return 0;
}