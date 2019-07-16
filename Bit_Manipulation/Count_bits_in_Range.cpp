#include<iostream>
using namespace std;

int main() {

    int Q;
    cin >> Q;

    while(Q--)
    {
        int a, b;
        cin >> a >> b;

        int count = 0;
        while(a <= b)
        {
            int temp = a;
            while(temp)
            {
                if((temp & 1) != 0)
                count++;

                temp >>= 1;
            }
            a++;
        }

        cout << count << endl;
    }
	return 0;
}

/*
Input :
2
1 1
10 15

Output :
1
17

 */