#include<iostream>
using namespace std;
int a[100];
int ma=0,mi=1000000;
int main()
{
    void finn(int );
    int n;
    cin>>n;
    for(int i=0; cin>>*(a+i),i<n;++i){}
    finn(n);
    return 0;
}
void finn(int n)
{
    for(int i=0; i<n;++i){
        if(*(a+i)>ma) ma=*(a+i);
        if(*(a+i)<mi) mi=*(a+i);
    }
    cout<<ma<<' '<<mi<<endl;
    return;
}
