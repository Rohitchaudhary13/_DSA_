
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//ITERATIVE SOLUTION

bool isSub( string &s1, string &s2, int n, int m){
    int j=0;
    for(int i=0; i<n && j<m; i++){
        if(s1[i]==s2[j]){
            j++;
        }
    }
    return (j==m);
}

int main()
{
    string s1, s2;
    cin>>s1;
    cin>>s2;
    int n = s1.length();
    int m = s2.length();
    int res = isSub(s1, s2, n, m);
    cout<<res;
}



//RECURSIVE SOLUTION


bool isSub( string &s1, string &s2, int n, int m){
    int j=0;
    if(m==0) return true;
    if(n==0) return false;
    if(s1[n-1] == s2[m-1]) return isSub(s1,s2,n-1,m-1);
    else isSub(s1,s2, n-1,m);
}
