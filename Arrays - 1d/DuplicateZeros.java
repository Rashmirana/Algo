class DuplicateZeros {
    public static void main(String a[]) {
       
       int arr[]={1,0,2,3,0,4,5,0};
       int index = 0,LEN=arr.length;
        int[] copy = arr.clone();
        for(int i : copy){
            if(index>=LEN) break;
            if(i==0&&index+1<LEN) { arr[index++]=0; arr[index++]=0; }
            else arr[index++] = i;
        }
	for(int i=0; i<arr.length; i++)
	   {
	          System.out.print(arr[i]+ " ");
	}
    }
}
/*
Output:-
1 0 0 2 3 0 0 4
*/