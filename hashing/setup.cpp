#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Node{
   public:
   string key;
   T value;
   Node * next;

   Node(string key, T value){
       this->key= key;
       this->value= value;
       next = NULL;
   }
 ~Node(){
      if(next!=NULL){
            delete next;
      }
 }
};
template<typename T>
 class Hashtable{
  Node<T> ** table;
  int cs;
  int ts;
string key;
 int hashfucn(string key){
   int idx =0;
   int power =1 ;
    for(auto ch:key ){
      idx = (idx +ch*power)%ts;
      power = (power*29)%ts;
    }
     return idx;
 }
  void rehash(){
      //save the ptr to  the oldtable and we will do Insertion innto newtable
      Node<T>** oldtable = table;
   int oldTs = ts;
    cs =0;
   //increment the table size
   int ts = ( 2*ts +1);
    table = new Node<T>*[ts];//you should make it prime

    for(int i =0 ; i<ts ; i++){
      table[i]=NULL;
    }
    
    // copy elements of oldTable into newTable 
     for(int i=0; i<oldTs; i++){
       Node<T> * temp = oldtable[i];

       while(temp!=NULL){
            string key = temp->key;
            T value = temp->value;

            // happen in new table 
            insert(key,value);
            temp= temp->next;

       }
       // dstroy the ith linked lisit

       if(oldtable[i]!=NULL){
            delete oldtable[i];
       }
     }
      delete [] oldtable;
  }
  public:
  Hashtable(int default_size=7){
      cs =0;
      ts = default_size;

       table = new Node<T>*[ts];
       for (int i = 0; i <ts; i++)
       {
            table[i]= NULL;
       }
       
  }

 void insert(string key, T value){
      //Next
        int idx = hashfucn(key);

        Node<T>* n = new Node <T>(key ,value);

        //Insertyion at heasd of the linked list
        n->next = table[idx];
        table[idx]=n;

         cs++;
         float load_factor = cs/float(ts);
     if(load_factor>0.7){
      rehash();
     }
   }
    T* search(string key){
   int idx = hashfucn(key);

   Node<T>* temp = table[idx];

   while(temp!=NULL){
      if(temp->key == NULL){
            return &temp->value;
      }
      temp = temp->next;
   }
    return NULL;
    }
    //supercool functionality
  T& operator[](string key){
      //return the value
      //if key is not found then create a new node and function 
      //return the exciting node
      T* valuefound = search(key);
       if(valuefound==NULL){
            T object;
             insert(key,object);
             valuefound = search(key);
       }
return *valuefound;
      

  }
 void print(){
      for(int i =0 ; i<ts ; i++){
cout<<"Bucket "<<i<<"->";
    Node<T> * temp = table[i];
    while(temp!=NULL){
      cout<< temp->key<<"->";
      temp = temp->next;
    }
     cout<<endl;
      }
 }

 };
int main()
{
 Hashtable<int>  h;
 h.insert("Mango",100);
 h.insert("Apple",120);
 h.insert("Banana",140);
 h.insert("kiwi",210);
 h.insert("papaya",220);
 h.insert("Litchi",30);
  h.print();

   string fruit;
    cin>>fruit;
  int * price = h.search(fruit);
     if(price!=NULL){
  cout<<"Price of fruit is"<<*price<<endl;
     }
   else{
      cout<<"Fruit nor found"<<endl;
   }
h["newfruit"]= 200;
  cout<<"New fruit cost :"<<h["newFruit"]<<endl;
  h["newFruit"]+=20;
  cout<<"New Fruit updated cost:"<<h["newFruit"]<<endl;
return 0;
}