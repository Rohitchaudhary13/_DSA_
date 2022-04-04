//
//#include <iostream>
//using namespace std;
//
//void func(int n){
//    if(n==0){
//        return ;
//    }
//    cout<<n<<" ";
//    return func(n-1);
//}
//
//
//int main()
//{
//    int n;
//    cin>>n;
//    func(n);
//}


#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int n_to_1(int n){
    if(n==0){
        return 1;
    }
    cout<<n;
    return n_to_1(n-1);
}

int main()
{
    int n;
    cin>>n;
    int result = n_to_1(n);
}
