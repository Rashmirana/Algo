#include <iostream>
#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(NULL), right(NULL) {}
};

void helper(TreeNode* root, int sum, vector<int> path, vector<vector<int>> &paths)
{
    if(root == NULL)
    {
        return;
    }

    if(root->left == NULL && root->right == NULL) 
    {
         path.push_back(root->val);
         if(sum == root->val)
         paths.push_back(path);
         return;
    }
   
    path.push_back(root->val);
    helper(root->left, sum - root->val, path, paths);
    helper(root->right, sum - root->val, path, paths);
}

int main() {
    TreeNode* root = new TreeNode(5);

    root->left = new TreeNode(4);
    root->right = new TreeNode(8);

    root->left->left = new TreeNode(11);

    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);

    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);

    root->right->right->left = new TreeNode(5);
    root->right->right->right = new TreeNode(1);
    
    vector<vector<int>> a;
    vector<int> b;
    helper(root,22, b, a);

    for(auto s: a)
    {
        for(auto d: s)
        cout << d <<" ";
        cout << endl;
    }
}

/* 
OUTPUT :
5 4 11 2 
5 8 4 5 
*/
