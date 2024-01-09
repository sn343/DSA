#include<iostream>
using namespace std;

int factorial(int n){
   if(n==1)
      return 1;
   int ans = n*factorial(n-1);
   return ans;   
}

int main(){
   int n;
   cout<<"enter the value of n"<<endl;
   cin>>n;

   int ans = factorial(n);
   cout<<"Ans is "<<ans<<endl;
}