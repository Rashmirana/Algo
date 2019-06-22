
public class LinearSearch {
	
	static int search(int a[],int n)
	{
		for(int i=0; i<a.length; i++)
		{
			if(a[i]==n)
			return i;
		}
		 return -1;
	}
	
	public static void main(String ar[])
	{
		int arr[]= {1, 7, 20, 35, 55 };
		int data= 35;
		int index= search(arr,data);
		if(index == -1) {
			System.out.print("Element is not present in array");
			} else {
				System.out.print("Element found at position "+ (index+1));
			}
		
	}

}
/*
Element found at position 4
*/
