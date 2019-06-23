/*
DESCRIPTION :
Given a binary string S. The task is to count the number of substrings that start and end with 1. 
For example, if the input string is “00100101”, then there are three substrings “1001”, “100101” and “101”.
 */

#include <iostream>
using namespace std;

int fact(int a)
{
    if(a == 1 || a == 0)
    return 1;
    return a*fact(a-1);
}

int main() {
	//code
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    char binary[n];
	    int count = 0;
	    for(int i = 0; i < n; i++)
	    {
	        cin >> binary[i];
	        if(binary[i] == '1')
	        count++;
	    }
	    
	    if(count > 1)
	    count  = (count * (count-1))/2;
	    else
	    count = 0;
	    cout << count << endl;
	}
	return 0;
}

/*
Input:
2
4
1111
5
01101

Output:
6
3
 */