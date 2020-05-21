/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    int count=0;
    vector<int>v;
public:
    void inorder(TreeNode* temp,int k)
    {
        if(temp==NULL)
            return;
        inorder(temp->left,k);
        v.push_back(temp->val);
         count++;
        if(count==k)
        {
            temp->left=NULL;
            temp->right=NULL;
            temp=NULL;
            return;
        }
        cout<<temp->val;
        inorder(temp->right,k);

    }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root,k);
            cout<<"\n"<<count;
        return v[k-1];
    }
};
