#include <iostream>
#include <string>
using namespace std;

int main() {
	//code
	
	int t;
	cin >> t;
	
	while(t--)
	{
	    string a, b;
	    cin >> a >> b;
	    
	    int length = 0;
	    while(a.length() > 0)
	    {
	        auto f = b.find(a);
	        if(f != string::npos)
	        {
	            cout << f << " " << a << endl;
	            break;
	        }
	        a.pop_back();
	    }
	    
	    if(a.length() == 0)
	    cout << -1 << endl;
	}
	return 0;
}
/*
INPUT:
2
geeks
dgeek
practicegeeks
coderpractice

OUTPUT:
1 geek
5 practice
*/
