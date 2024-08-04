#include<iostream>
using namespace std;
int main()
//3 12 48 192 .......
{
    int n;
    cout<<"total no. of terms:" ;
    cin>>n;
    int a=3;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a=a*4;
    }
}