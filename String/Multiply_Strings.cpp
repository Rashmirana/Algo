#include<bits/stdc++.h>
using namespace std;
 
string multiplyStrings(string , string );
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	
    	cout<<multiplyStrings(a,b)<<endl;
    }    
}
}

string multiplyStrings(string num1, string num2) {
    int sign = 1;
    
    if (num1[0] == '-') {
       sign = sign * (-1);
       num1.erase(num1.begin());
   }
   
   if (num2[0] == '-') {
       sign = sign * (-1);
       num2.erase(num2.begin());
   }
   
    int n1 = num1.size();
    int n2 = num2.size();
    if (n1 == 0 || n2 == 0)
       return "0";
 
    vector<int> result(n1 + n2, 0);
 
    int i_n1 = 0; 
    int i_n2 = 0; 
 
    for (int i=n1-1; i>=0; i--)
    {
        int carry = 0;
        int n1 = num1[i] - '0';
 
        i_n2 = 0; 
         
        for (int j=n2-1; j>=0; j--)
        {
        
            int n2 = num2[j] - '0';
 
            int sum = n1*n2 + result[i_n1 + i_n2] + carry;
 
            carry = sum/10;
 
            result[i_n1 + i_n2] = sum % 10;
 
            i_n2++;
        }
 
        if (carry > 0)
            result[i_n1 + i_n2] += carry;
 
        i_n1++;
    }
 
    int i = result.size() - 1;
    while (i>=0 && result[i] == 0)
       i--;
 
    if (i == -1)
       return "0";
 
    string s = "";
    while (i >= 0)
        s += std::to_string(result[i--]);
        
    if (sign == -1)
        s.insert(s.begin(), '-');
 
    return s;
   
}
/*

Input:
2
33 2
11 23
Output:
66
253
*/
