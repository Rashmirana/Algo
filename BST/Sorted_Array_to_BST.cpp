/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    TreeNode* helper(TreeNode* root, vector<int> nums, int i, int j)
    {
        if(i > j)
            return NULL;
        
        int k = (i+j)/2;
        
        root = new TreeNode(nums[k]);
        
        root->left = helper(root, nums, i, k-1);
        root->right = helper(root, nums, k+1, j);
        
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {

        return helper(NULL, nums, 0, nums.size()-1);

    }
};
