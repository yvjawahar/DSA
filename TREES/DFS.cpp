                                             /*BINARY SEARCH TREE*/
#include<iostream>
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
	 void preorder(bst*root)
	{
		if(root==NULL) 
		   return;
		cout<<root->val<<" ";
		preorder(root->left);
		preorder(root->right);	
	}
	 void inorder(bst*root)
	{
		if(root==NULL)
		   return;
		preorder(root->left);
		cout<<root->val<<" ";
		preorder(root->right);	
	}
	void postorder(bst*root)
	{
		if(root==NULL)
		   return;
		preorder(root->right);
		preorder(root->left);
		cout<<root->val<<" ";
			
	}
};
int main()
{
  bst x;
  bst* root = new bst(1);
  root->left = new bst(12);
  root->right = new bst(9);
  root->left->left = new bst(5);
  root->left->right = new bst(6);
  cout << "Inorder traversal: ";
  x.inorder(root);
  cout << "\nPreorder traversal ";
  x.preorder(root);
  cout << "\nPostorder traversal ";
  x.postorder(root);
}
