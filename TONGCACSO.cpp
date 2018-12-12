#include<iostream>
using namespace std;
int main(){
  int n,sum ,t; 
  cin >> n;
   while (n>0)
  {
    t = n%10; 
    n=n/10;
    sum+=t;
    }
      cout << " sum= " << sum;
}
