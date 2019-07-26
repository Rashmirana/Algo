class Solution {
public:
    int maxArea(vector<int>& height) {
        
        long long int area = 0;
        int l = 0, r = height.size()-1;
        
        while(l < r)
        {
            long long int curr = (r-l)*(height[l] < height[r]? height[l]: height[r]);
            if(curr > area)
                area = curr;
            
            if(height[l] < height[r])
                l++;
            else r--;
        }
        return area;
    }
};
