import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution.*/
        Scanner sc=new Scanner(System.in);
        int t;
        t=sc.nextInt();
        for(int k=0;k<t;k++){
            int n;
            n=sc.nextInt();
            int ans=0;
            int[] arr=new int[n];
            for(int i=0;i<n;i++){
                arr[i]=sc.nextInt();
            }
            for(int i=0;i<n;i++){
                 int min=Integer.MAX_VALUE;
                int max=Integer.MIN_VALUE;
                for(int j=i;j<n;j++){
                    if(arr[j]>=max)
                        max=arr[j];
                    if(arr[j]<=min)
                        min=arr[j];
                    if(max-min==j-i)
                        if((j-i+1)>ans)
                        ans=j-i+1;
                }
            }
            System.out.println(ans);
        }
    }
}