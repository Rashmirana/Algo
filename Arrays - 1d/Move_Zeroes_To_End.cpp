#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> nums = {1, 2, 0, 3, 0 , 0, 9 , 8, 0, 3};

    int i = 0, j = nums.size() - 1;
      
        while(i < j)
        {
            if((nums[i] == 0 && nums[j] == 0) || (nums[j] == 0 && nums[i] != 0))
            {
                i++;
                j--;
            }
            else if(nums[i] == 0 && nums[j] != 0)
            {
                int t = nums[j];
                nums[j] = nums[i];
                nums[i] = t;
                
                i++;
                j--;
            }
            else{
                i++;
            }
        }

        for(auto i: nums)
        cout<< i<< " ";
}

// OUTPUT : 1 2 3 3 8 9 0 0 0 0 
