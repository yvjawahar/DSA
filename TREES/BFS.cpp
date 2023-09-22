                                              /*BINARY SEARCH TREE*/
#include "bits/stdc++.h"
using namespace std;
class bst
{
	public:
	int val;
	bst*left;
	bst*right;

	bst(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};
int main(){
    //node insertion part
  bst* root = new bst(1);
  root->left = new bst(12);
  root->right = new bst(9);
  root->left->left = new bst(5);
  root->left->right = new bst(6);
  //bfs algorithm
  queue<bst*>q;
  q.push(root);
  while(!q.empty())
  {
    bst*temp=q.front();q.pop();
    cout<<temp->val<<" ";
    if(temp->left)
    q.push(temp->left);
    if(temp->right)
    q.push(temp->right);
  }
}