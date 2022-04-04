
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//NAIVE APPROACH

int main()
{
    string s;
    cin>>s;
    string rev = s;
    reverse(rev.begin(), rev.end());
    if(rev==s) cout<<"true";
    else cout<<"false";


}

//EFFICIENT APPROACH

bool isPal(string &str){
    int begin=0;
    int end = str.length() - 1;
    while(begin<end){
        if(str[begin]!= str[end]){
            cout<<"false";
            return false;
        }
        begin++;
        end--;
    }
    cout<<"true";
    return true;
}

int main()
{
    string str;
    cin>>str;
    isPal(str);
}
