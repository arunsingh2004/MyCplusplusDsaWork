#include <bits/stdc++.h>
#include<vector>
using namespace std;

class node
{
public:
      int key;
      node *left;
      node *right;

      node(int key)
      {
            this->key = key;
            left = right = NULL;
      }
};

node *insert(node *root, int key)
{
      if (root == NULL)
      {
            return new node(key);
      }
      if (key < root->key)
      {
            root->left = insert(root->left, key);
      }
      else
      {

            root->right = insert(root->right, key);
      }
      return root;
}

void printInorder(node *root)
{

      if (root == NULL)
      {
            return;
      }
      printInorder(root->left);
      cout << root->key << ",";
      printInorder(root->right);
}

void search(node *root, int key)
{

      if (root == NULL || root->key == key)
      {
            cout << "Number is present" << endl;
      }
      if (key > root->key)
      {
            return search(root->right, key);
      }

      return search(root->left, key);
}
bool search1(node *root, int key)
{
      if (root == NULL)
      {
            return false;
      }
      if (key == root->key)
      {
            return true;
      }

      if (key > root->key)
      {
            return search1(root->right, key);
      }
      return search1(root->left, key);
}
node *findMin(node *root)
{
      while (root->left != NULL)
      {
            root = root->left;
      }
      return root;
}
node *remove(node *root, int key)
{
      if (root == NULL)
      {
      return NULL;
      }
      else if (key < root->key)
      {
            root->left = remove(root->left, key);
      }
      else if (key > root->key)
      {
            root->right = remove(root->right, key);
      }
      else
      {
            // when the current node matches with key
            // No children
            if (root->left == NULL && root->right == NULL)
            {
                  delete root;
                  root = NULL;
            }
            // Single child
            else if (root->left == NULL)
            {
                  node *temp = root;
                  root = root->right;
                  delete temp;
            }
            else if (root->right == NULL)
            {
                  node *temp = root;
                  root = root->left;
                  delete temp;
            }

            // Two children
            else
            {
                  node *temp = findMin(root->right);
                  root->key = temp->key;
                  root->right = remove(root->right, temp->key);
            }
      }
      return root;
}
 void printRange(node * root ,int k1,int k2){
      if(root==NULL){
            return;
      }
      if(root->key>=k1 && root->key<=k2){
            printRange(root->left,k1,k2);
            cout<<root->key<<" "<<endl;
            printRange(root->right,k1,k2);
      }
       else if(root->key >k2){
            printRange(root->left,k1,k2);
       }
       else {
            // root->key<k1
             printRange(root->right,k1,k2);
       }
 }
  void printRootToLeafPaths(node * root, vector<int> &path){
       if(root==NULL){
             return;
       }
        if(root->left ==NULL && root->right==NULL){
            //print vector
            for(auto node : path){
       cout<<node<<"->";
            }
              cout<<root->key<<"->";
            cout<<endl;
              return;
        }
        //rec case
         path.push_back(root->key);
         printRootToLeafPaths(root->left, path);
         printRootToLeafPaths(root->right, path);
         //backTracking
         path.pop_back();
         return;
  }
int main()
{

      node *root = NULL;
      int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};
     

      for (int x : arr)
      {
            root = insert(root, x);
      }

      // printInorder(root);
      //    search(root,32);
      // cout << search1(root, 32) << endl;

//   int key;
//    cin>>key;
//      root = remove(root, key);

      // printInorder(root);

//  int k1, k2;
//  cin>>k1>>k2;
//       printRange(root,k1,k2);

      vector<int> path;
      printRootToLeafPaths(root,path);
      return 0;
}
