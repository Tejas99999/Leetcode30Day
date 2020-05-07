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
      vector<int>v;
    vector<int>w;
public:
    int getdepth(int x,TreeNode* root)
    {

        queue<TreeNode*>q;
        int count=0;
        q.push(root);
        v.push_back(root->val);
        w.push_back(root->val);
        q.push(NULL);
        while(!q.empty())
        {
            TreeNode* temp=q.front();

            q.pop();
            if(temp==NULL)
            {
                if(q.front()!=NULL)
                    q.push(NULL);
                count++;
            }
            else
            {

            if(temp->val==x)
                return count;

            if(temp->left!=NULL)
            {
                // int s=temp->val;
                // temp->left->val=temp->left->val+temp->val;
                q.push(temp->left);
                v.push_back(temp->val+temp->left->val);
                 w.push_back(temp->left->val);
            }
            if(temp->right!=NULL)
            {
                q.push(temp->right);
                v.push_back(temp->val+temp->right->val);
                 w.push_back(temp->right->val);
            }

            }

        }
        return 0;
    }
    bool isCousins(TreeNode* root, int x, int y) {

        int temp=getdepth(x,root);
        int temp1=getdepth(y,root);
        int t,t1;
        for(int i=0;i<w.size();i++)
        {
            if(w[i]==x)
            {

             t=i;

            }
            if(w[i]==y)
            {
                 t1=i;
            }
        }
//         for(int i=0;i<v.size();i++)
//         {
//             if(v[i]!=NULL)
//             {

//             cout<<v[i]<<"\t";

//             }
//         }

        if(temp==temp1)
        {

            if(v[t]-x!=v[t1]-y)
                return true;
        }

        return false;
    }
};
