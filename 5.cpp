#include<iostream>
using namespace std;
int main()
{
    int ni(int );
    char ip[33];
    int ipv4[4]={0},i,j;
    cin>>ip;
    for(i=0,j=0;j<33;++j){
        if(*(ip+j)>'0') *(ipv4+i)+=((*(ip+j)-'0')<<((i+1)*8-j-1));
        if((j+1)%8==0) ++i;
    }
    for(i=0;i<4;++i)
        cout<<*(ipv4+i)<<((i!=3)?'.':'\n');
    return 0;
}

