/*Description :
Given an array of sorted integers. The task is to find the closest value to the given number in array. Array may contain duplicate values.

Note: If the difference is same for two values print the value which is greater than the given number.
*/

#include <iostream>
#include <climits>
using namespace std;

int main() {
	//code
	int T;
	cin >> T;
	
	while(T--)
	{
	    int n,k;
	    cin >> n >> k;
	    int arr[n];
	    for(int i = 0; i < n; i++)
	    cin >> arr[i];
	    
	    int j = 0;
	    int m = INT_MAX;
	    
	    for(int i = 0; i < n; i++)
	    {
	        if(m >= abs(k-arr[i]))
	        {
	            m = abs(k-arr[i]);
	            j = i;
	        }
	    }
	    
	    cout << arr[j] << endl;
	}
	return 0;
}

/*      Input:
	2
	4 4
	1 3 6 7
	7 4
	1 2 3 5 6 8 9

	Output:
	3
	5
*/
