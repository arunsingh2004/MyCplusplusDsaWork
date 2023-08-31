#include<bits/stdc++.h>
using namespace std;
 class Node{
      public:
      int data;
      Node *left;
      Node *right;

       Node(int d){
         data=d;
         left =right=NULL;
       }
 };

 Node* buildTree(){
      int d;
      cin>>d;
  if(d==-1){
       return NULL;
  }
  Node * n = new Node(d);
  n->left= buildTree();
  n->right= buildTree();
 }

  void levelOrderPrint(Node *root){
      queue<Node*> q;
  q.push(root);
  q.push(NULL);
   while(!q.empty()){
      Node *temp = q.front();
      if(temp==NULL){
            cout<<endl;
            q.pop();
            //insert a new null for the next level
             if(!q.empty()){
                  q.push(NULL);
             }
      }
       else{
            q.pop();
            cout<<temp->data<<endl;
            if(temp->left){
                  q.push(temp->left);
            }
             if(temp->right){
                  q.push(temp->right);
             }
       }
   }

  }

//   Todo: Implement Level order Build for the tree

Node * levelOrderBuild(){
  int d;
   cin>> d;
    Node * root = new Node(d);
    queue<Node*> q;
   q.push(root);

   while(!q.empty()){
      Node * current = q.front();
      q.pop();
       int c1, c2;
        cin>>c1>>c2;
         if(c1=!-1){
            current->left = new Node(c1);
            q.push(current->left);
         }
         if(c2=!-1){
            current->right = new Node(c2);
            q.push(current->right);
         }
   }
      return root;

}
 int Height(Node *root){
   if(root==NULL){
      return 0;
   }

   int h1  = Height(root->left);
   int h2  = Height(root->right);

   return 1 + max(h1,h2);
 }

 int diameter(Node * root){
     //base case
   if(root==NULL){
     return 0;
   }
    int h1  = Height(root->left);
   int h2  = Height(root->right);

    int d1 = h1 +h2;
    int d2 = diameter(root->left);
    int d3 = diameter(root->right);

     return  max(d1,max(d2,d3));

 }
 //Diameter optimized 
class HDpair{
  public:
   int height;
   int diameter;   
};

HDpair optDiameter(Node*root){
     HDpair p;
 if (root==NULL){
     p.height= p.diameter =0;
     return p;

 }
 //otherwise

 HDpair Left =optDiameter(root->left);
 HDpair Right =optDiameter(root->right);


p.height = max(Left.height,Right.height)+1;

int D1 = Left.height + Right.height;
int D2= Left.diameter;
int D3 = Right.diameter;

p.diameter =max(D1,max(D2,D3));
return p;

}

int main()
{

      // Node * root = buildTree();
      Node * root = buildTree();
     // levelOrderPrint(root);
     cout<<"Diameter is "<<diameter(root)<<endl;
     // Height(root);
     cout<<"Diameter is "<<optDiameter(root).diameter<<endl;



return 0;
}