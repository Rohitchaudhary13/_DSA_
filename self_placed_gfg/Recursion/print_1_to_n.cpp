//
//#include <iostream>
//using namespace std;
//
//void func(int n)
//{
//    int st=1;
//    if(n==0){
//        return;
//    }
//    func(n-1);
//    cout<<n<<" ";
//}
//
//int main()
//{
//    int n;
//    cin>>n;
//    func(n);
//}



#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int one_to_n(int n, int s){
    if(s==n){
        return n;
    }
    cout<<s;
    return one_to_n(n, s+1);
}

int main()
{
    int n, s=1;
    cin>>n;
    int result = one_to_n(n, s);
    cout<<result;
}
