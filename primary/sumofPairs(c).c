import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;
import java.util.Scanner;
class niku{
    void mergesort(int arr[],int low,int high){
        if(low<high){
            int mid=(low+high)/2;
            mergesort(arr,low,mid);
            mergesort(arr,mid+1,high);
            merge(arr,low,high,mid);
        }
    }
    void merge(int arr[],int low,int high,int mid){
        int p1=low;
        int p2=mid+1;
        int k=0;
        int[] temp=new int[high-low+1];
        while(p1<=mid && p2<=high){
            if(arr[p1]<arr[p2]){
                temp[k++]=arr[p1++];
            }
            else{
                temp[k++]=arr[p2++];
            }
        }
        while(p1<=mid){
            temp[k++]=arr[p1++];
        }
        while(p2<=high){
            temp[k++]=arr[p2++];
        }
        for(int i=0;i<high-low+1;i++){
            arr[low+i]=temp[i];
        }
    }
    
    
}

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        niku obj=new niku();
        int t;
        t=sc.nextInt();
        while(t!=0){
            int n,v;
            n=sc.nextInt();
            v=sc.nextInt();
            boolean str=false;
            int[] arr=new int[n];
            for(int i=0;i<n;i++){
                arr[i]=sc.nextInt();
            }
            obj.mergesort(arr,0,n-1);
            t--;
            int a=0,b=n-1;
            while(a<b){
                if(arr[a]+arr[b]==v){
                    str=true;
                    break;
                }
                else if(arr[a]+arr[b]>v){
                    b--;
                }
                else if(arr[a]+arr[b]<v){
                    a++;
                }
            }
                if(str){
                    System.out.println("True");
                    }
                else{
                    System.out.println("False");
            }
            }
        }
    }