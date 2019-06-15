#include <iostream>
using namespace std;
string keys[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void combi(int arr[], int n, string word, int i)
{
    if(i == n)
    {
        cout << word <<" ";
        return;
    }
    for(int j= 0; j < keys[arr[i]].size(); j++)
    {
        word += keys[arr[i]][j];
        combi(arr, n, word, i + 1);
        word.pop_back();
    }
}

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
	    cin >> arr[i];
	    
	    combi(arr, n, "", 0);
	    cout<<endl;
	}
	return 0;
}

/*
Input:
1
3
2 3 4

Output:
adg adh adi aeg aeh aei afg afh afi bdg bdh bdi beg beh bei bfg bfh bfi cdg cdh cdi ceg ceh cei cfg cfh cfi
*/
