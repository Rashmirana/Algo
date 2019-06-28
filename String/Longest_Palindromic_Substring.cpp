#include <iostream>
#include <string>
using namespace std;
int main() {
    string a ="aaaabbaa";

    int n = a.length();

    bool table[n][n];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            table[i][j] = false;
        }
        table[i][i] = true;
    }

    int start = 0, maxlength = 1;
   for (int i = 0; i < n-1; ++i) 
	{ 
		if (a[i] == a[i+1]) 
		{ 
			table[i][i+1] = true; 
			start = i; 
			maxlength = 2; 
		} 
	} 

   for (int k = 3; k <= n; ++k) 
	{ 
		// Fix the starting index 
		for (int i = 0; i < n-k+1 ; ++i) 
		{ 
			// Get the ending index of substring from 
			// starting index i and length k 
			int j = i + k - 1; 

			// checking for sub-string from ith index to 
			// jth index iff str[i+1] to str[j-1] is a 
			// palindrome 
			if (table[i+1][j-1] && a[i] == a[j]) 
			{ 
				table[i][j] = true; 

				if (k > maxlength) 
				{ 
					start = i; 
					maxlength = k; 
				} 
			} 
		} 
	} 


    cout << a.substr(start, start+maxlength) << endl;

}
/* 
OUTPUT : aabbaa

*/
