//
//#include <iostream>
//using namespace std;
//
//int summ(int n, int sum)
//{
//    if(n==0){
//        return 0;
//    }
//    cout<<sum;
//    return summ(n/10, sum + n%10);
//}
//
//int main()
//{
//    int n, sum = 0;
//    cin>>n;
//    int s = summ(n, sum);
//    cout<<s;
//}


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int func(int n, int sum){
    if(n<=0) return 0;
    if(n<10) return sum + n;
    int a = n%10;
    n = n/10;
    return func(n, sum + a);
}


int main()
{
    int n, sum=0;
    cin>>n;
    int result = func(n,sum);
    cout<<result;
}
