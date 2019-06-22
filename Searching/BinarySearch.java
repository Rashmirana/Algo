
public class BinarySearch {
	
	static int search(int a[],int n)
	{ 
		int end= a.length - 1;
		int start = 0;
		
		while(start <= end) {
			int mid= (end + start) / 2;
			
			if(a[mid]== n)
				return mid;
			
			if(a[mid]<n)
				start= mid + 1;
			else
				end= mid-1;
		}
		
		return -1;
		
	}
	
	public static void main(String ar[])
	{
		int arr[]= {1, 7, 20, 35, 55 };
		int data= 7;
		int index= search(arr,data);
		if(index == -1) {
			System.out.print("Element is not present in array");
			} else {
				System.out.print("Element found at position "+ (index+1));
			}
		
	}

}
/*
Element found at position 2
*/