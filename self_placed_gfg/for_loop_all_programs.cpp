/*Fibonacci Series */

//#include<iostream>
//using namespace std;
//
//int main()
//{
//    int n=10;
//    int a=0, b = 1;
//    cout<<a<<" "<<b<<" ";
//    for(int i=1; i<=n; i++){
//        int nxtNum = a+b;
//        cout<<nxtNum<<" ";
//        a=b;
//        b=nxtNum;
//    }
//}


//--------------------------------------


/*Prime Numbers*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = 1;
    cout<<"Please Enter a Valid Number: ";
    cin>>n;
    for(int i=2; i<n; i++)
    {
        if(n%i==0){
//            cout<<"Not a Prime Number"<<endl;
            isPrime=0;
            break;
        }

    }
    if(isPrime==0){
        cout<<"Not a Prime number";
    }
    else{
        cout<<"is a Prime number";
    }
}
