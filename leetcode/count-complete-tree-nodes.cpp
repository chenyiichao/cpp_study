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
     
    int countNodes(TreeNode* root) {
        int count = 0;
        countTreeNodes(count, root);
        return count;
    }

    void countTreeNodes(int& count, TreeNode* node) {
        if(!node){
            return;
        }
        count ++;
        countTreeNodes(count,node->left);
        countTreeNodes(count,node->right);
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
    
    
    int v = s.countNodes(root);
    cout << v << endl;
    return 0;
    
}