class MoveZeroes {
    public static void main(String ar[]) {

        int nums[]={0,1,0,3,12};
        int index=0;
        for(int i=0; i<nums.length; i++)
        {
            if(nums[i]!=0)
            {
                nums[index++]=nums[i];
            }
        }
        
        for(int i=index; i<nums.length; i++)
        {
            nums[i]=0;
        }

       for(int i=0; i<nums.length; i++)
       {System.out.print(nums[i]+" ");}
    }
}
/*
Output:-
1 3 12 0 0
*/