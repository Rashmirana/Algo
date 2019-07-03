?*DESCRIPTION :
Given three strings A, B and C your task is to complete the function isInterleave which returns true 
if C is an interleaving of A and B else returns false. C is said to be interleaving A and B, 
if it contains all characters of A and B and order of all characters in individual strings is preserved.
*/

#include <bits/stdc++.h>
using namespace std;

bool isInterleave(string A, string B, string C);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string a,b,c;
		cin>>a;
		cin>>b;
		cin>>c;
		cout<<isInterleave(a,b,c)<<endl;
	}
	
	return 0;
}

bool interFront(string A, string B, string C)
{
    if(!A.length() && !B.length() && !C.length())
    return true;
    
    if(!C.length())
    return false;
    
    if(A.length() && A[0] == C[0])
    return isInterleave(A.substr(1), B, C.substr(1));
    
    if(B.length() && B[0] == C[0])
    return isInterleave(A, B.substr(1), C.substr(1));
    
    return false;
}
bool isInterleave(string A, string B, string C) 
{
    
    if(!A.length() && !B.length() && !C.length())
    return true;
    
    if(!C.length())
    return false;
    
    if(interFront(A, B, C))
    return true;
    
    if(A.length() && A[A.length()-1] == C[C.length()-1])
    return isInterleave(A.substr(0, A.length()-1), B, C.substr(0, C.length()-1));
    
    if(B.length() && B[B.length()-1] == C[C.length()-1])
    return isInterleave(A, B.substr(0, B.length()-1), C.substr(0, C.length()-1));
    
    return false;
}

/*
Input:
2
YX  X  XXY
XY X XXY

Output
0
1
*/
