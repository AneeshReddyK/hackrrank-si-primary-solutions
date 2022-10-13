#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int t;
    scanf("%d",&t);
    while(t--){
        long int n,sum=0,x;
        scanf("%ld",&n);
        for(int i=0;i<n;i++){
            scanf("%ld",&x);
            sum=sum+x;
        }
        printf("%ld\n",sum);
    }
    return 0;
}