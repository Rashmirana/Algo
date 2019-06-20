#include <iostream>
#include <vector>
using namespace std;

int main() {

	int t;
	cin >> t;
	
	while(t--)
	{
	    int n,m;
	    cin >> n;
	    int arr1[n];
	    for(int i= 0; i < n; i++)
	    cin >> arr1[i];
	   
	    cin >>m;
	    int arr2[m];
	    for(int i = 0; i < m; i++)
	    cin >> arr2[i];
	    
	    
    int res = n > m ? n : m;

    int arr[res] = {0};

    for(int i = 0; i < n; i++)
    {
        int current = 0;
        for(int j = 0; j < m; j++)
        {
            if(arr1[i] == arr2[j] && current + 1 > arr[j])
            arr[j] = current + 1;

            if(arr1[i] > arr2[j] && arr[j] > current)
            current = arr[j];
        }
    }

    int cr = 0;
    for(int i = 0; i < res; i++)
    {
        if(arr[i] > cr)
        cr = arr[i];
    }

    cout << cr << endl;
	}
	return 0;
}

/*
Input:
1
4 
3 4 9 1
7
5 3  8  9  10  2  1

Output:
2
*/
