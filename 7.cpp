#include<iostream>
#include<algorithm>
using namespace std;
int a[25],b[25];
bool cmp(int a,int b)
{
    return a<b;
}
int main()
{
    int ma=0,k=0;
    int mp[4]={0,4,20,24};
    bool c[25]={0};
    for(int i=0;i<25;++i)
    {
        cin>>*(a+i);
        *(b+i)=*(a+i);
        if(*(a+i)>ma) {ma=*(a+i);k=i;}
    }
    *(a+k)=*(a+12);
    *(a+12)=ma;
    *(c+12)=1;
    sort(b,b+25,cmp);
    for(int i=0;i<4;++i){
        for(int j=0;j<25;++j){
            if(*(c+j)!=1  &&  *(a+j) == *(b+i)){
                *(a+j) = *(a+*(mp+i));
                *(a+*(mp+i)) = *(b+i);
                *(c+j) = 1;
                *(c+*(mp+i)) = 1;
            }
        }
    }
    for(int i=0;i<25;++i)
        cout<<*(a+i)<<((i+1)%5==0?'\n':' ');
    return 0;
}
