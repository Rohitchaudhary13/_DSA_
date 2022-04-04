
#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int maximum(int a, int b, int c)
{
    if(a>b && a>c){
      return a;
    }
  if(b>a && b>c){
    return b;
  }
  if(c>a && c>b){
    return c;
  }
}

int myFunction(int n, int a, int b, int c){
  if(n==0){
    return 0;
  }
  if(n<0){
    return -1;
  }
  int result = maximum(myFunction(n-a, a, b, c), myFunction(n-b, a, b, c), myFunction(n-c, a ,b ,c ));
  if(result==-1){
    return -1;
  }
  return result +1;
}

int main(){
  int n, a, b, c;
  cin>>n;
  cin>>a;
  cin>>b;
  cin>>c;
  int res = myFunction(n, a, b, c);
  cout<<res;
}
