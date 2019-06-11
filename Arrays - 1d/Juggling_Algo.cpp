#include <iostream>
using namespace std;

int g_cd(int a, int b)
{
    int rem = a%b;
    while(rem != 0)
    {
        a = b;
        b = rem;
        rem = a%b;
    }
    return b;
}

int main() {

	int T;
	cin >> T;
	
	while(T--)
	{
	    int n;
	    cin >> n;
	    
	    int arr[n];
	    for(int i = 0; i < n; i++)
	    cin >> arr[i];
	    
	    int d;
	    cin >> d;
	    
	    int gcd = g_cd(n, d);
	    
	    for(int i = 0; i < gcd; i++)
	    {
	        int temp = arr[i];
	        
	        int j = i;
	        
	        while(1){
	           int k = j + d;
	           
	           if(k >= n)
	           k = k-n;
	           
	           if(k == i)
	           break;
	           
	           arr[j] = arr[k];
	           j = k;
	        }
	        
	        arr[j] = temp;
	    }
	    
	    for(int i = 0; i < n; i++)
	    cout << arr[i] << " ";
	    
	    cout << endl;
	}
	
	return 0;
}

/* Input :
	
   1
   5
   1 2 3 4 5
   2
   
   Output :
   
   3 4 5 1 2
*/
