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
public:
    TreeNode* newNode(int x)
    {
        TreeNode*temp=new TreeNode(x);
        return temp;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode*head=new TreeNode(preorder[0]);
      //  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
       //TreeNode* head=TreeNode(preorder[0]);
        TreeNode*temp=head;
        for(int i=1;i<preorder.size();i++)
        {
            temp=head;
            TreeNode* temp1= new TreeNode;
            while(temp!=NULL)
            {
                temp1=temp;
                if(preorder[i]<=temp->val)
                    temp=temp->left;
                else
                    temp=temp->right;
            }

            TreeNode* temp2=new TreeNode(preorder[i]);
            if(temp2->val<=temp1->val)
                temp1->left=temp2;
            else
                temp1->right=temp2;

             //temp1->left;
           // cout<<head->left->val;
           // cout<<temp->val<<"\n";
        }
        return head;
    }
};
