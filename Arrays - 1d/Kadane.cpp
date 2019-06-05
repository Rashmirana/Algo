#include <iostream>
using namespace std;
int main() {

    int n = 8, arr[n] = { 2, 3, -6, 1, 2, 3, -4, 5};

    int osum = arr[0];
    int currsum = arr[0];

    for(int i = 1; i < n; i++)
    {

        if(currsum < 0)
        currsum = arr[i];
        else
        currsum += arr[i];
        
        if(osum < currsum)
        osum = currsum;
    }

    cout << "Largest sum subarray : " << osum ;

}
