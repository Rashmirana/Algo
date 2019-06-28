/*Given an arry A (may contain duplicates) of N elements and a positive integer K. The task is to count the number of elements which occurs exactly floor(N/K) times in the array.*/

import java.io.*;
import java.util.*;
import java.lang.*;
class CountSpecials {
	public static void main (String[] args) {
	    
	   Scanner sc = new Scanner(System.in);
		
		int testcase = sc.nextInt();
		
		while(testcase-- > 0){
		    int sizeof_array = sc.nextInt();
		    int k = sc.nextInt();
		    
		    int a[] = new int[sizeof_array];
		    
		    for(int i = 0;i<sizeof_array;i++){
		        a[i] = sc.nextInt();
		    }
		    
		    Geeks obj = new Geeks();
		    obj.countSpecials(a, sizeof_array, k);
		}
		
	}
}

class Geeks{
    static void countSpecials(int a[], int n, int k){
        int f = (int)Math.floor(n/k);
        int count=0, max=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]>max)
            max= a[i];
        }
        int input[]= new int[max+1];
         
         for(int i=0; i<n; i++)
         {
             input[a[i]]++;
         }
         
         for(int i=0; i<max+1; i++)
         {
             if(input[i] == f)
             count++ ; 
         }
         System.out.println(count);
    }
}
/*
Input:-
1
5 2
1 4 1 2 4
Output:-
2
*/