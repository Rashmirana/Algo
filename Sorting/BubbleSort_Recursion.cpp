#include <iostream>
using namespace std;

void bubbleSort(int arr[], int i, int s, int l)
{
    if(s == l)
    return;

    if(i == l)
    {
        bubbleSort(arr, 0, s, l-1);
        return;
    }

    if(arr[i] > arr[i+1])
    {
        int t = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = t;
     }

   bubbleSort(arr, i+1, s, l);
}

int main() {

    int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1};
    bubbleSort(arr, 0, 0, 8);

    for(int i = 0; i < 9; i++)
    cout << arr[i] << " ";
}

/*
Output :
1 2 3 4 5 6 7 8 9
*/
