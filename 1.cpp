#include<iostream>
using namespace std;
int a[100];
int main()
{
    void add(int );
    int n;
    cin>>n;
    for(int i=0 ; cin>>*(a+i) , i<n ; ++i){}
    add(n);
    return 0;
}
void add(int n)
{
    int sum=0;
    for(int i=0 ; i<n ; ++i){
        if(i%2==0) sum+=*(a+i);
    }
    cout<<sum<<endl;
    return;
}
