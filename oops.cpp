#include <bits/stdc++.h>
using namespace std;
// Product (Shopping Website)
class Product
{
private:
      int id;
      char name[100];
      int Mrp;
      int Selling_price;

public:
      // Constructor
      Product()
      {
            cout << "Product Inside constructor" << endl;
      }
      // Constructor overloading,Parameterised Constructor
      Product(int id, char *n, int Mrp, int Selling_price)
      {
            this->id = id;
            strcpy(name, n);
            this->Mrp = Mrp;
            this->Selling_price = Selling_price;
      }//copy COnstructor
      Product(Product &x){
           //Create to the copy
           id =x.id;
       strcpy(name,x.name);//Array
           Mrp=x.Mrp;
           Selling_price=x.Selling_price;

      }
      // Setters
      void setMrp(int price)
      {
            Mrp = price;
      }
      void setSelling_price(int price)
      {
            if (price > Mrp)
            {
                  Selling_price = Mrp;
            }
            else
            {
                  Selling_price =price;
            }
      }
      // Getters
      int getMrp()
      {
            return Mrp;
      }
      int getSelling_price()
      {
            return Selling_price;
      }
      void showDetails(){
            cout<<"Name:"<<name<<endl;
            cout<<"ID: "<<id<<endl;
            cout<<"Selling Price:"<<Selling_price<<endl;
            cout<<"MRP:"<<Mrp<<endl;
      }
};
int main()
{
      Product camera(23, "GoProHero29", 340555, 340555);
 //Copy Constructor
      Product webcam(camera);
  Product handycam= camera;


      camera.showDetails();
      webcam.showDetails();
      handycam.showDetails();
      camera.setMrp(100);
      camera.setSelling_price(200);
      cout << sizeof(camera) << endl;
      cout << "MRP:" << camera.getMrp() << endl;
      cout << "Slling Price:" << camera.getSelling_price() << endl;
      return 0;
}