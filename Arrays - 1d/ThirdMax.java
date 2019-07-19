class ThirdMax {
    public static void main(String ar[]){

        int nums[] = {3, 2, 1}; 
        long first=nums[0], second=Long.MIN_VALUE, third=Long.MIN_VALUE;
        
        for(int i=0; i<nums.length; i++)
        {
            if(nums[i]>first)
            {
                third=second;
                second= first;
                first=nums[i];
            }
            
            else if(nums[i]>second && nums[i]<first)
            {
                third=second;
                second=nums[i];
            }
            else if(nums[i]>third && nums[i]<second)
            {
                third= nums[i];
            }
        }
        int res= (third == Long.MIN_VALUE) ? (int)first : (int)third;
        System.out.println(res);
    }
}