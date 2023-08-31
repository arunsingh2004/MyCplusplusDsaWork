// Forward Declaration
#include <bits/stdc++.h>
using namespace std;
class List;

class Node
{
      int data;

public:
      Node *next;
      Node(int d)
      {
            data = d;
            next = NULL;

      } // constuctor
      int getData()
      {
            return data;
      }
      //destructor
      ~Node(){
            if(next!=NULL){
                  delete next;
            }
            cout<<"Deleting Node with Data"<<data<<endl;
      }
      friend class List;
};

class List
{

      Node *head = NULL;
      Node *tail = NULL;

      int searchHelper(Node *start, int key)
      {
            // base case
            if (start == NULL)
            {
                  return -1;
            }
            // value matches
            if (start->data == key)
            {
                  return 0;
            }
            // remaining part of the linked list
            int subIdx = searchHelper(start->next, key);
            if (subIdx == -1)
            {
                  return -1;
            }
            return subIdx + 1;
      }

public:
      List()
      {
            head = NULL;
            tail = NULL;
      }
      Node *begin()
      {
            return head;
      }

      void push_front(int data)
      {
            if (head == NULL)
            {
                  Node *n = new Node(data);
                  head = tail = n;
            }

            else
            {

                  Node *n = new Node(data);
                  n->next = head;
                  head = n;
            }
      }
      void push_back(int data)
      {
            if (tail == NULL)
            {
                  Node *n = new Node(data);
                  head = tail = n;
            }
            else
            {

                  Node *n = new Node(data);
                  tail->next = n;
                  tail = n;
            }
      }
      void insert(int data, int pos)
      {
            if (pos == 0)
            {
                  push_front(data);
            }
            // otherwise
            Node *temp = head;
            for (int jump = 1; jump <= pos - 1; jump++)
            {
                  temp = temp->next;
            }
            Node *n = new Node(data);
            n->next = temp->next;
            temp->next = n;
      }
      int search(int key)
      {
            Node *temp = head;
            int idx = 0;
            while (temp != NULL)
            {
                  if (temp->data == key)
                  {
                        return idx;
                  }
                  idx++;
                  temp = temp->next;
            }
            return -1;
      }
      int recursiveSearch(int key)
      {
            int idx = searchHelper(head,key);
		return idx;
      }
      void pop_front(){
		Node * temp = head;
		head = head->next;
		temp->next = NULL;
		delete temp;
	}
      
	void remove(int pos){
            Node*temp=head;
      for (int jump = 1; jump<=pos-1; jump++)
      {
            temp=temp->next;

      }
      Node*n= new Node(pos);
      n=temp->next;
      temp->next=n->next;
      n->next=NULL;
      delete n;
    
	}
      ~List(){
            if(head!=NULL){
                  delete head;
                  head=NULL;
            
            }
      }
};