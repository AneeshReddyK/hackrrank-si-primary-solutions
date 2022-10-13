#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d%d",&a,&b);
        long long int ans=1;
        long int m=1e9+7;
        for(int i=0;i<b;i++){
            ans=(ans*a)%m;
        }
        printf("%lld\n",(ans%m));
    }
    return 0;
}