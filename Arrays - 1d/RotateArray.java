
import java.util.*;
import java.io.*;

class RotateArray {
    
     int gcd(int a, int b)
     {
         if(a==0)
         return b;
         else
         return gcd(b%a, a);
     }
     
   void rotate(int arr[], int n, int d)
     {  int j,k,temp;
        int gcd1= gcd(d,n);
        for(int i=0; i<gcd1; i++)
        {
            temp=arr[i];
            j=i;
            
            while(true)
            {
                k=j+d;
                if(k>=n)
                k= k-n;
                if(k == i)
                break;
                
                arr[j]= arr[k];
                j=k;
            }
            arr[j]=temp;
        }
     }
     
     void printArr(int a[],int n)
     {
         for(int z=0; z<n; z++)
         {
             System.out.print(a[z]+" ");
         }
     }
     
     
	public static void main (String[] args) throws IOException {
	    RotateArray ra= new RotateArray();
	   Scanner sc= new Scanner(System.in);
		int t= sc.nextInt();
		int n,r;
		
		while(t-->0)
		{
		   n= sc.nextInt();
		    int arr[]= new int[n];

		    for(int i=0; i<n; i++)
		     arr[i]= sc.nextInt();
		
		    r=sc.nextInt();
		    ra.rotate(arr, n, r);
		    ra.printArr(arr,n);
		}
		 
	}
}
/*
Input:-
1
5
1 2 3 4 5
2
Output:-
3 4 5 1 2 
*/