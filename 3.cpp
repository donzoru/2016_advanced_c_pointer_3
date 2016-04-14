#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char a[50],b[50];
    int m,n;
    cin>>a>>m>>n;
    if(n<m) cout<<"error"<<endl;
    else{
        for(int i=m-1;*(b+i)=*(a+i);++i){
            if(*(b+i)=='\0') break;
        }
    cout<<b<<endl;
    }
    return 0;
}
