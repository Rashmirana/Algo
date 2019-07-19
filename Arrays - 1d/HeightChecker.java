class HeightChecker {
    public static void main(String ars[]) {

        int heights[] = {1,1,4,2,1,3}
        int[] copy= heights.clone();
        Arrays.sort(copy);
        int count=0;
        for(int i=0; i<copy.length; i++)
        {
            if(heights[i] != copy[i])
                count++;
        }
       System.out.println(count);
    }
}
/*
Output:-
3
*/