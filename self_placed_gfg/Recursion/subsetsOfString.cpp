
#include <iostream>
#include<bits/stdc++.h>
#include <string.h>

using namespace std;

int printArray( vector<string> arr){

}

vector <char> myFunc(string a, vector<char>s, int i=0){
  vector <char> arr;
  arr.push_back(myFunc(a, s, i+1));
  arr.push_back(myFunc(a,s + a[i], i+1));
  return arr;
}

int main(){
  string s="";
  string a;
  int i=0;
  cin>>a;
  string res = myFunc(a, s, i);
  for(int i=0; i<res.length(); i++){
    cout<<res[i];
  }
}
