
public class InsertionSort {

     public static void main(String args[]) {
       	int arr[]= {20,35,-15,7,55,1,-22};
    	for(int i=1;i<arr.length; i++)
    	{
    		int temp= arr[i];
    		int j;
    		for(j=i;j>0 && arr[j-1]>temp; j--)
    		{
    			arr[j]=arr[j-1];
    		}
    		arr[j]=temp;
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