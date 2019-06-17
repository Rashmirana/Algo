/*Description :
Given an array A of N positive numbers. The task is to find the position where equilibrium first occurs in the array. 
Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of elements after it.
*/

#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    int sum = 0;
	    for(int i = 0; i < n; i++)
	    {
	        cin >> arr[i];
	        sum += arr[i];
	    }
	    
	    int left = 0, right = sum;
	    int flag = -1;
	    for(int i = 0; i < n; i++)
	    {
	        right = right - arr[i];
	        if(left == right)
	        {
	            cout << i + 1 << endl;
	            flag++;
	            break;
	        }
	        
	        left += arr[i];
	    }
	    if(flag == -1)
	    cout << -1 << endl;
	}
	return 0;
}
/*
Input:
2
1
1
5
1 3 5 2 2

Output:
1
3
*/

