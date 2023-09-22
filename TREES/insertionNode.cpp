                                                    /*BINARY SEARCH TREE*/
#include "bits/stdc++.h"
using namespace std;
class bst
{
	public:
	int val;
	bst*left;
	bst*right;
    bst()
    {

    }
	bst(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
    //insertion logic
    bst* insertIntoBST(bst* root, int val) 
    {
        if(!root)
        {
            bst* node=new bst(val);
            return node;
        }
        if(val>root->val)
        {
            root->right=insertIntoBST(root->right,val);
        }
        if(val<root->val)
        {
            root->left=insertIntoBST(root->left,val);
        }
        return root;
    }
void inorder(bst* root)
{
        if(!root) return;
          
        inorder(root->left);
      cout<<root->val<<" ";
        inorder(root->right);
        
}
};
int main()
{
    bst x;
    bst* root=nullptr;
    vector<int>arr={4,2,9,8,10,1,3};
    for(auto i:arr)
    {
      root=x.insertIntoBST(root,i);
    }
    x.inorder(root);
}