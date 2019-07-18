package recursion;

public class TowerofHanoi {

	public static void toha(String s, String d, String h, int n) {
		
		if(n==0)
			return;
		
		toha(s,h,d,n-1);
		System.out.println("Move "+n + " disk from "+ s+ " to "+ d);
		
		toha(h,d,s, n-1);
		
	}
	
	public static void main(String ar[]) {
		toha("A", "B", "C", 3);
	}
}
