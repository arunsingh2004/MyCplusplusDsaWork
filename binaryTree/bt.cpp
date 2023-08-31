#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
      int data;
      Node *left;
      Node *right;
      Node(int d)
      {
            data = d;
            left = right = NULL;
      }
};
//Preoder Build of the Tree Root ,Left ,Right
Node* buildTree(){
      int d;
      cin>>d;
if(d==-1){
      return NULL;
}
 Node * n = new Node(d);
 n->left = buildTree();
 n->right = buildTree();
 return n;

}

 void PrintPreorder(Node *root){
   if(root==NULL){
    return;
   }

    cout<<root->data<<" ";
    PrintPreorder(root->left);
    PrintPreorder(root->right);
 }

 void PrintInorder(Node*root){
      if(root==NULL){
            return;
      }
      PrintInorder(root->left);
      cout<<root->data<<" ";
      PrintInorder(root->right);

 }
 
 void PrintPostorder(Node*root){
      if(root==NULL){
            return;
      }
      PrintPostorder(root->left);
      PrintPostorder(root->right);
      cout<<root->data<<" ";

 }

int main()
{


 Node * root = buildTree();
   PrintPreorder(root);
   PrintInorder(root);
 PrintPostorder(root);
 cout<<endl;
 return 0;
}