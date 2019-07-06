#include <iostream>
#include <string>
using namespace std;

void printer(int n, char *a, int rows, int cols, string path)
{
    if(rows == n-1)
    { 
        for(int i = cols; i < n; i++)
        path += *(a + rows*n + i);
        cout << path << endl;
        return;
    }

    if(cols == n-1)
    {
        for(int j = rows; j < n; j++)
        path += *(a+j*n+cols);
        cout << path << endl;
        return;
    }

        path += *(a+rows*n + cols);
        printer(n, a, rows+1, cols, path);
        printer(n, a, rows, cols+1, path);
    
}
int main() {
    char a[][3] = {
        {'0', '1', '2'},
        {'3', '4', '5'},
        {'6', '7', '8'}
    };

    printer(3, (char*)a, 0, 0, "");
}
/*
OUTPUT :

03678
03478
03458
01478
01458
01258

*/
 
