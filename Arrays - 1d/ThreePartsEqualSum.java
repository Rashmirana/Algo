class ThreePartsEqualSum {
    public boolean canThreePartsEqualSum(int[] A) {
        int sum=0;
        for(int a : A)
            sum += a;
        
        if(sum%3 != 0 ) return false;
        int avg= sum/3;
        int count=0, current=0;
        for(int i: A)
        {
            current += i;
            if(current == avg){
                count++;
                current=0;
            }
        }
        return count==3;
    }

public static void main(String ar[])
{
	int A[]={0,2,1,-6,6,-7,9,1,2,0,1};
	ThreePartsEqualSum obj= new ThreePartsEqualSum();
	System.out.println(obj.canThreePartsEqualSum(A));
}
}