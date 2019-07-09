#include <iostream>
using namespace std;
void toh(char a, char b, char c, int n)
{
    if(n == 0)
    return;
    
    toh(a, c, b, n-1);

    cout << n << " disc from " << a <<" to " << b << endl;

    toh(c, b, a, n-1);
}

int main() {
    toh('A', 'B', 'C', 3);
}

/*
Output :
1 disc from A to B
2 disc from A to C
1 disc from B to C
3 disc from A to B
1 disc from C to A
2 disc from C to B
1 disc from A to B
*/
