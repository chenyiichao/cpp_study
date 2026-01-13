#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

/**
 * Definition for a binary tree node.
 * 
 */
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 


class Solution {
public:
    Solution(){}
    // 树的前中后序列遍历
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        inorder(v, root);
        return v;
    }

    void inorder(vector<int> &v, TreeNode* node) {
        if(!node){
            return;
        }
        inorder(v,node->left);
        v.push_back(node->val);
        inorder(v,node->right);
    }
};

int main() {
    Solution s;

    // root = [1,null,2,3]
    TreeNode * root = new TreeNode(1);
    root->left = nullptr;
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);

    // TreeNode * root = new TreeNode(1);
    
    
    vector<int> v = s.inorderTraversal(root);

    for (int i = 0; i < v.size(); i++)
    {
        cout <<  "v[" << i << "]  = " <<v[i] << endl; 
    }

    // delete root->right->left;
    // delete root->right;
    // delete root;
    return 0;
    
}