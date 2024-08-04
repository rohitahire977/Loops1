//print a table of n and takes n input from user.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a no. whose table you want to print:" ;
    cin>>n;
    for(int i=n;i<=10*n;i=i+n){
        if(i%n==0){
            cout<<i<<endl;
        }
    }
}    