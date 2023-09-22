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
     bst* extright(bst* temp)
    {
        while(temp->right!=nullptr)
        {
            temp=temp->right;
        }
        return temp;
    }
    bst* solve(bst* root)
    {
        if(root->left==nullptr)
        return root->right;
         if(root->right==nullptr)
        return root->left;
        bst* temp=root->right;
        bst* lastright=extright(root->left);
        lastright->right=temp;
        return root->left;
    }
bst* deleteNode(bst* root, int key) 
{
    if(root==nullptr) return root;
    if(root->val==key)
    return solve(root);
    bst* ans=root;
    while(root!=nullptr)
    {
            if(root->val>key)
            {
                if(root->left!=nullptr and root->left->val==key)
                root->left=solve(root->left);
                else
                root=root->left;
            }
            else
            {
                if(root->right!=nullptr and root->right->val==key)
                root->right=solve(root->right);
                else
                root=root->right;
            }
    }
    return ans;
}
void inorder(bst* root)
{
        if(!root) return;
          
        inorder(root->left);
      cout<<root->val<<" ";
        inorder(root->right);
        
}
};
int main(){
    bst x;
  //node insertion part
  bst* root = new bst(4);
  root->left = new bst(2);
  root->right = new bst(9);
  root->right->right=new bst(10);
  root->right->left=new bst(8);
  root->left->left = new bst(1);
  root->left->right = new bst(3);
  cout<<"ENTER THE VALUE OF NODE TO BE DELETED\n";
  int y;cin>>y;
  //deletion logic
 bst* temp=x.deleteNode(root,y);
 //printing the new tree
  x.inorder(temp);
 

}
    