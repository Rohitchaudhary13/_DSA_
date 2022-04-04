#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool Ana(string &a, string &b){
    if(a.length()!=b.length()) return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return (a==b);
}

int main()
{
    string a;
    string b;
    cin>>a;
    cin>>b;
    int res = Ana(a,b);
    cout<<res;
}
