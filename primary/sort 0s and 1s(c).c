#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()  
{  
    int t=0;
    scanf("%d",&t);
    while(t--){
        int N;
        scanf("%d",&N);
    int a[N], i, count = 0;  
    for(i = 0; i < N; i++)  
    {  
        scanf("%d", &a[i]);  
        if(a[i] != 0 && a[i] != 1)  
        {  
            i--;  
        }  
        else if(a[i] == 0)  
            count++;  
    }  
  
    for(i = 0; i < N; i++)  
    {  
        if(i < count)  
            a[i] = 0;  
        else  
            a[i] = 1;  
    }  
    for(i = 0; i < N; i++)  
        printf("%d ", a[i]); 
        printf("\n");
    }
  
    return 0;  
}  