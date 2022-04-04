
#include <iostream>
#include <vector>
using namespace std;

int func(int n, vector <int> &dp)
{
    if(n<=1) return n;
    if(n==2) return n-1;
    if(dp[n]!=-1) return dp[n];
    return dp[n] = func(n-1, dp) + func(n-2, dp) + func(n-3, dp);
}

int main() {
    int n;
    cin>>n;
    vector <int> dp(n+1, -1);
    return func(n, dp);
}

