
import java.io.*;
import java.util.*;

class MatrixInterchange{
    
   
	public static void main (String[] args) {
	    
	    // Taking input using scanner class
		Scanner sc = new Scanner(System.in);
		
		int testcase = sc.nextInt();
		
		while(testcase-- > 0){
		    int rows = sc.nextInt();
                                      int cols = sc.nextInt();
		    int a[][] = new int[rows][cols];
		    
		    for(int i = 0;i<rows;i++){
		        for(int j = 0;j<cols;j++){
		            a[i][j] = sc.nextInt();
		        }
		    }
		    
		    Geeks obj = new Geeks();
		    obj.interchange(a, rows, cols);
		}
	}
}


class Geeks{
    
    static void interchange(int a[][],int r, int c){
        
        for(int i=0; i<r; i++){
                int temp=a[i][0];
                a[i][0]= a[i][c-1];
                a[i][c-1]=temp;
           }
        
        for(int i = 0;i<r;i++){
            for(int j = 0;j<c;j++){
                System.out.print(a[i][j] + " ");
            }
            System.out.println();
        } 
    }
}
/*
Input:
1
3 4
1 2 3 4
4 3 2 1
6 7 8 9
Output:
4 2 3 1
1 3 2 4
9 7 8 6
*/