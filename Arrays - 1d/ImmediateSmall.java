
import java.util.*;
import java.lang.*;
import java.io.*;

class ImmediateSmall {
    
   	public static void main (String[] args) {
	    Scanner sc= new Scanner(System.in);
	    int t= sc.nextInt();
	    while(t-->0)
	    {
	        int n= sc.nextInt();
            int prev= sc.nextInt();
	        while(n-->1)
	        {
	            int next= sc.nextInt();
	             if(prev > next)
	             System.out.print(next + " ");
	             else 
	             System.out.print(-1 + " ");
	             
	             prev= next;
	        }
	        System.out.println("-1");
	       }
	}
}