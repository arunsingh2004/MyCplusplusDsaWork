#include<bits/stdc++.h>
using namespace std;
int getIthBit(int n,int i){
      int mask =(1<<i);
      return (n & mask)>0?1:0;

}
void setIthBit(int &n,int i){
      int mask =(1<<i);
         n = (n|mask);
}

void clearIthBit(int &n,int i){
      int mask = ~(1<<i);
       n = (n&mask);
}

 void updateIthBit(int &n,int i,int v){
      clearIthBit(n,i);
      int mask =(v<<i);

      n = (n|mask);
 }
  void clearLastBit(int &n,int i){
      int mask = (-1<<i);
       n= (n&mask);
  }
  void clearBitRange(int &n,int i,int j){
      int a =(-1<<j+1);
      int b= (1<<i)-1;
      int mask =(a|b);
       n = (n&mask);

  }
   void replaceBit(int &n, int i , int j, int m){
      clearBitRange(n,i,j);
      int mask = (m<<i);
      n =n| mask;
   }

    void checkPowerTwo(int n){
      if(n&(n-1)==0){
            cout<<"Power of two";
      }
       else{
            cout<<"Not a power of two";
       }
    }

    int  countBit(int n){
      int cnt =0 ;
      while(n>0){
            int last_bit = (n&1);
            cnt += last_bit;
            n =n>>1;
      }
      return cnt;
    }

    //Counting Set BIts : Hack (Faster method)
    int count_bits_hack(int n){
      int ans =0;

      while(n>0){
            //removes the last set Bit from the current number
            n =n & (n-1);
            ans++;
      }
       return ans;
    }
    

    //code in log(n) time of complexity 
    int fastExponation(int a, int n){
      int ans =1;

      while(n>0){
            int last_bit = (n&1);

            if(last_bit){
                  ans = ans*a;

            }

            a= a*a;
            n=n>>1;
      }
      return ans;
    }

    int convertDectoBinary(int n){
      int ans =0;
      int p =1;

      while(n>0){
               int last_bit = (n&1);
               ans +=p*last_bit;

      p=p*10;
      n = n>>1;
      }
      return ans;
    }
int main()
{
 int n,a;
 cin>>n;
// cin>>a
//  cout<<fastExponation(a,n)<<endl;
//  int m;
//   cin>>m;
//  int i,v,j;
// //  cin>>v;
// cin>>j;
// cin>>i;
//   cout<<getIthBit(n,i)<<endl;
//   setIthBit(n,i);
//   clearIthBit(n,i);
// updateIthBit(n,i,v);
// clearLastBit(n,i);

// clearBitRange(n,i,j);

// replaceBit(n,i,j,m);

// checkPowerTwo(n);

// cout<<countBit(n)<<endl;

// cout<<count_bits_hack(n)<<endl;


//    cout<<n;

cout<<convertDectoBinary(n)<<endl;

return 0;
}
