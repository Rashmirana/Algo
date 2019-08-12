// Given an integer N, find and return the count of minimum numbers, sum of whose squares is equal to N.


#include <climits>
int helper(int n, int arr[])
{
    if(n < 0)
    return 100009;

    if(n == 0)
    return 0;
    
    if(arr[n] != INT_MAX)
        return arr[n];
    
    int y = INT_MAX;
    for(int i = 1; i <= n; i++)
    {
        int x = helper(n-(i*i), arr) + 1;

        if(x < y)
        y = x;
    }
    
    arr[n] = y;
    return y;
}
int minCount(int n){
    
    /*  Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Return output and don't print it.
     *  Taking input and printing output is handled automatically.
     */
    int *arr = new int[n+1];
    
    for(int i = 0; i <=n ;i++)
    arr[i] = INT_MAX;
    
    return helper(n, arr);   
}

/* INPUT: 10
OUTPUT: 2
*/