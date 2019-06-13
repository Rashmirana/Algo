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
