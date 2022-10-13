#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void mergesort(int arr[],int low,int high){
    if(low<high){
        int mid=(high+low)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
void merge(int arr[],int low,int mid,int high){
   int p1=low,p2=mid+1;
    int j=0;
    int temp[high-low+1];
    while(p1<=mid && p2<=high){
        if(arr[p1]<arr[p2]){
            temp[j++]=arr[p1++];
        }
        else
            temp[j++]=arr[p2++];
    }
    while(p2<=high){
        temp[j++]=arr[p2++];
    }
    while(p1<=mid){
        temp[j++]=arr[p1++];
    }
    for(int i=0;i<(high-low+1);i++){
        arr[low+i]=temp[i];
    }
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        mergesort(arr,0,n-1);        
        for(int i=0;i<n;i++){
            if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1]){
                printf("%d\n",arr[i]);
                break;
            }
        }
    }
    return 0;
}