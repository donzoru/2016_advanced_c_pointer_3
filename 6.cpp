#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int id;
    double avg(double );
    double a,b,c,sum=0;
    for(int i=0;cin>>id>>a>>b>>c,i<5;++i)
        sum+=(a+b+c);
    cout<<setprecision(2)<<std::fixed<<avg(sum)<<endl;
    return 0;
}
double avg(double m)
{
    return m/15.0;
}
