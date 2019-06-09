#include <iostream>
using namespace std;
int main() {

    int n = 4;
    
    int matrix[n][n] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
    {13, 14, 15, 16}
    };

    for(int i = 0; i < n/2; i++)
    {
        for(int j = i; j < n - i - 1; j++)
        {
            int temp = matrix[i][j];

            matrix[i][j] = matrix[n-1-j][i];

            matrix[n-j-1][i] = matrix[n-i-1][n-j-1];

            matrix[n-i-1][n-j-1] = matrix[j][n-i-1];

            matrix[j][n-i-1] = temp;

        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << "   ";
        }
        cout<<endl;
    }
}

/* OUTPUT:

    13   9   5   1   
    14   10   6   2   
    15   11   7   3   
    16   12   8   4  
*/ 
