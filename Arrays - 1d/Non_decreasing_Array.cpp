#include <iostream>
#include <vector>
using namespace std;
 bool isIncreasing(vector<int> nums)
    {
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i-1] > nums[i])
            return false;
        }

        return true;
    }

    bool pp(vector<int> nums, int i, int j)
    {
        for(; i <= j; i++)
        {
            int curr = nums[i];
            if(i > 0)
            nums[i] = nums[i-1];

            if(isIncreasing(nums))
            {
                return true;
            }
            nums[i] = curr;
        }
        return false;
    }

    int main() {
        vector<int> nums = {1, 2, 3, 4};
        
        int i = 0, j = nums.size()-1;
        while(i < nums.size()-2 && nums[i] <= nums[i+1] && nums[i+1] <= nums[i+2])
        i++;

        while(j > 1 && nums[j-2] <= nums[j-1] && nums[j-1] <= nums[j])
        j--;

        bool ans = pp(nums, i, j);

        bool p = true;
        for(int k = 2; k < nums.size(); k++)
        {
            if(nums[k-1] > nums[k])
            {
                p = false;
                break;
            }
        }
        
        cout <<  p || ans;
    }

/* OUTPUT : 1 */
