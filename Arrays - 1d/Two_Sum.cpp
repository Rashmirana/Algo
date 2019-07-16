#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {

    unordered_map<int, vector<int>> map;

    int arr[] = {2, 7, 11, 15};
    int target = 9;

    int size = *(&arr+1) - arr;
    for(int i = 0; i < size; i++)
    {
        auto k = map.find(arr[i]);
        if(k != map.end())
        {
            vector<int> v = map[arr[i]];
            v.push_back(i);

            map[arr[i]] = v;
        }else
        map[arr[i]] = {i};
    }

    int idx, idx2 = -1;
    for(int j = 0; j < size; j++)
    {
        auto it = map.find((target-arr[j]));
        if(it != map.end())
        {
            vector<int> indices = it->second;
            for(auto i = indices.begin(); i != indices.end(); i++)
            {
                if(*i != j)
                {
                    idx = j;
                    idx2 = *i;
                    break;
                }
            }
        }
        
        if(idx2 != -1)
        break;
    }
    
    cout << idx << " " << idx2;
}

/* OUTPUT: 0 1  */
