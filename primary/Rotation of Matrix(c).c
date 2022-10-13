#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    scanf("%d",&t);
    for(int j=0;j<t;j++){
        printf("Test Case #%d:\n",j+1);
        int n;
        scanf("%d",&n);
        int a[n][n];
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
        }
        for(int i=0;i<n;i++){
            for(int j=n-1;j>=0;j--){
                printf("%d ",a[j][i]);
            }
            printf("\n");
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
