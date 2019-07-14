#include <iostream>
#include <climits>
using namespace std;

int op(int arr[], int arr2[], int n)
{
    int i = 0, j = 0, k = 0;

    for(; k < n; k++)
    {
        while(i < n && j < n)
        {
            if(arr[i] == arr2[(j+k)%n])
            {
                i++;
                j++;
            }
            else {
                j = 0;
                i = 0;
                break;
            }
        }
        
        if(i == n)
        break;
    }

    return n-k;
    }

int main() {
    int n = 6;
    int arr[n][n] =  {{1, 1, 1, 4, 1, 3},
                     {1, 4, 1, 3, 1, 1},
                     {1, 1, 4, 1, 3, 1},
                     {4, 1, 3, 1, 1, 1},
                     {3, 1, 1, 1, 4, 1},
                     {1, 4, 1, 3, 1, 1},
                    };

    int min = INT_MAX;
    for(int j = 0; j < n; j++)
    {
        int cmin = 0;
        for(int i = 0; i < n; i++)
         {
            if(i == j)
            continue;

            cmin += op(arr[i], arr[j], n);
        }

        if(cmin < min)
        {
            min = cmin;
        }

    }
    
   cout << min;
    
}
/*
OUTPUT : 11
*/


