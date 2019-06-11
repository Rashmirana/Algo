/* DESCRIPTION :
Write a program to input a list of n integers in an array and arrange them in a way similar to the to-and-fro movement of a Pendulum.

The minimum element out of the list of integers, must come in center position of array. If there are even elements, 
then minimum element should be moved to (n-1)/2 index (considering that indexes start from 0)
The next number (next to minimum) in the ascending order, goes to the right, 
the next to next number goes to the left of minimum number and it continues like a Pendulum.
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    
	//code
	int T;
	cin >> T;
	
	while(T--)
	{
	    int n;
	    cin >> n;
	    
	    int arr[n];
	    
	    for(int i = 0; i < n; i++)
	    {
	        cin >> arr[i];
	    }
	    
	    sort(arr, arr+n);
	    
	    int res[n], l;
	    
	    if(n%2 == 0)
	    l = (n-1)/2;
	    else
	    l = n/2;
	    
	    res[l] = arr[0];
	    
	    int r = l + 1;
	    l--;
	    
	   for(int i = 1; i < n; i++) 
	   {
	       if(i%2 != 0)
	       {
	           res[r] = arr[i];
	           r++;
	       }
	       else
	       {
	           res[l] = arr[i];
	           l--;
	       }
	   }
	   
	   for(auto i: res)
	   {
	       cout << i << " ";
	   }
	   cout << endl;
	}
	
	return 0;
}

/*
Input:
2
5
1 3 2 5 4
5
11 12 31 14 5

Output:
5 3 1 2 4
31 12 5 11 14

*/
