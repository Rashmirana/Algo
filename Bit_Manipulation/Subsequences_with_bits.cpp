#include <iostream>
#include <string.h>
using namespace std;
void printChars(char* a, int n)
{
    int i = 0;
    while(n)
    {
        if(n & 1)
        cout << a[i];
        i++;
        n >>= 1;
    }
    cout << endl;
}
void subsequence(char* a)
{
    int n = strlen(a);
    for(int i = 0; i < (1<<n); i++)
    {
        printChars(a, i);
    }
}

int main() {
    subsequence("abc");
    return 0;
}

/*
OUTPUT :

a
b
ab
c
ac
bc
abc

*/
