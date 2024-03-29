
public class CountingSort {
	
	public static void main(String args[]) {
		int arr[]= {2, 5, 9, 8, 2, 8, 7, 10, 4, 3};
		
		sort(arr,1,10);
		
		for(int i=0; i<arr.length; i++)
		{
			System.out.print(arr[i]+ " ");
		}
	}
	
	public static void sort(int input[],int min, int max)
	{
		int[] countArray = new int[(max-min)+1];
		
		for(int i=0; i<input.length; i++)
		{
			countArray[(input[i]- min)]++;
		}
		
		int j=0;
		for(int i=min; i<=max; i++)
		{
			while(countArray[i-min]>0)
			{
				input[j++]= i;
				countArray[i-min]-- ;
			}
		}
	}

}

/*
   Output:-
   2 2 3 4 5 7 8 8 9 10 
   */
