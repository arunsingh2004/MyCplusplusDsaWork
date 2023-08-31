#include<iostream>
using namespace std;
int main(){
   char button;

   cout<<"Input a character";
   cin>>button;
//    if(button=='a'){
//          cout<<"Hello"<<endl;
//    }
//    if(button=='b'){
//          cout<<"Namaste"<<endl;
//    }
//    if(button=='c'){
//          cout<<"Arun"<<endl;
//    }
//    if(button=='d'){
//          cout<<"Mandeep"<<endl;
//    }
//    if(button=='e'){
//          cout<<"Shivam"<<endl;
//    }
switch (button)
{
case 'a':
      cout<<"Hello"<<endl;
      break;
case 'b':
      cout<<"Arun"<<endl;
      break;
case 'c':
      cout<<"Mandeep"<<endl;
      break;
case 'd':
      cout<<"Shivam"<<endl;
      break;
case 'e':
      cout<<"Raju"<<endl;
      break;

default:
cout<<"theek se character choose kr le"<<endl;
      break;
}
return 0;
}