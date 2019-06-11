/* Description : Given an array of positive integers. Your task is to find the leaders in the array.
Note: An element of array is leader if it is greater than or equal to all the elements to its right side. 
Also, the rightmost element is always a leader. 
*/

#include <iostream>
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
	    for(int  i = 0; i < n; i++)
	    cin >> arr[i];
	    
	    int res[n] = {0};
	    res[n-1] = 1;
	    
	    int greatest = arr[n-1];
	    for(int i = n - 2 ; i >= 0; i--)
	    {
	        if(arr[i] >= greatest)
	        {
	            greatest = arr[i];
	            res[i]++;
	        }
	    }
	    
	    for(int i = 0; i < n; i++)
	    {
    	    if(res[i] == 1)
    	    cout << arr[i]<< " ";        
	    }
	    cout << endl;	    
	}
	return 0;
}

/*      Input:
	3
	6
	16 17 4 3 5 2
	5
	1 2 3 4 0
	5
	7 4 5 7 3
	
	Output:
	17 5 2
	4 0
	7 7 3
*/
