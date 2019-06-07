
public class BubbleSort {
	
	public static void swap(int arr[], int i, int j)
	{
		int temp=0;
		if(i==j)
		{
			return;
		}
		if(arr[i]> arr[j])
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	
     public static void main(String args[]) {
       	int arr[]= {20,35,-15,7,55,1,-22};
    	for(int i=arr.length-1; i>0;i--)
    	{
    		for(int j=0; j<i;j++)
    		{
    			swap(arr,j,j+1);
    		}
    	}
    	 
    	for(int i=0;i<arr.length; i++)
    	{
    		System.out.print(arr[i]+" ");
    	}
     }
}
/* Output:-
 * -22 -15 1 7 20 35 55 
 * */

