#include <iostream>
#include <string>
#include <climits>    
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--)
	{
	     int n;
	     cin >> n;
	     string arr[n];
	     
	     for(int i = 0; i < n; i++)
	     {
	         cin >> arr[i];
	     }
	     
	     int least = INT_MAX;
	     for(int i = 1; i < n; i++)
	     {
	         int curr = 0;
	         for(int j = 0; j < arr[i].length(); j++)
	         {
	             if(arr[0][j] == arr[i][j])
	             {
	                 curr++;
	             }else break;
	         }
	         
	         if(curr < least)
	         least = curr;
	     }
	     if(least == 0)
	     cout << "-1" << endl;
	     else
	     cout << arr[0].substr(0, least) << endl;
	}
	return 0;
}
/*
Input:
2
4
geeksforgeeks geeks geek geezer
3
apple ape april

Output:
gee
ap
*/
