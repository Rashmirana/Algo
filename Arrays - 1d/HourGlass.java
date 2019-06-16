import java.util.*;
import java.lang.*;

class HourGlass
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc= new Scanner(System.in);
		int[][] arr= {{1,1,1,0,0,0},
                      {0,1,0,0,0,0},
                      {1,1,1,0,0,0},
                      {0,0,2,4,4,0},
                      {0,0,0,2,0,0},
                      {0,0,1,2,4,0}};
        int sum[] = new int[16];
        int h = 0;
        for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            sum[h] = arr[i][j] + arr[i][j+1] + arr[i][j+2]
                    + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1]
                    + arr[i+2][j+2];
            h++;
        }
    }
    Arrays.sort(sum);
    System.out.println("Output:-\nMaximum Sum of Hour Glass: "+sum[15]);
    
	}
}

/* Output:-
   Maximum Sum of Hour Glass: 19
    */