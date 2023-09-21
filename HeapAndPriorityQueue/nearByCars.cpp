#include<bits/stdc++.h>
using namespace std;

class Car{
 public:
 string id;
 int x,y;
 Car(string id,int x,int y){
    this->id=id;
      this->x=x;
      this->y=y;

 }

 int dist()const{
      return x*x +y*y;
 }
};

//custom comapsre for min heap
 class CarCompare{
      public:
      bool operator()(const Car A, const Car B){
            return A.dist() < B.dist();//max heap
      }
      };

      bool distCompare(Car A, Car B){
            return A.dist() < B.dist();//cars in ascending order
      }
void printNearestCar(vector<Car> cars,int k){

priority_queue<Car,vector<Car>,CarCompare> max_heap(cars.begin(),cars.begin()+k);
for(int i=k;i<cars.size();i++){
      auto c = cars[i];
      if(c.dist()<max_heap.top().dist()){
            max_heap.pop();
            max_heap.push(c);
      }

//print all the cars inside the heap they will be smallest
vector<Car>output;

while(!max_heap.empty()){
      //cout<<max_heap.top().id<<" ";
      output.push_back(max_heap.top());
      max_heap.pop();

}

//vector of k nearest cars
sort(output.begin() ,output.end(),distCompare);
// reverse(output.begin() ,output.end(),distCompare);
for(auto c:output){
      cout<<c.id<<" ";

}
return;
}
}
int main()
{
      
            int n,k;
            cin>>n>>k;
            vector<Car> cars;
            for(int i=0;i<n;i++){
                  int x,y;
                  string id;
                  cin>>id>>x>>y;
                  Car c(id,x,y);
                  cars.push_back(c);
            }
            printNearestCar(cars,k);


return 0;
}