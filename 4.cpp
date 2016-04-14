#include<iostream>
using namespace std;
char amap[27]={"EFGHIJKLMNOPQRSTUVWXYZABCD"};
char a[50];
int main()
{
    void change(int );
    void ins(int );
    cin>>a;
    for(int i=0;*(a+i)!='\0';++i)
        change(i);
    for(int i=0;*(a+i)!='\0';++i)
        ins(i);
    return 0;
}
void change(int i)
{
    if(*(a+i)>=97 && *(a+i)<=122)  *(a+i)=*(amap+*(a+i)-'a')+32;
    if(*(a+i)>=65 && *(a+i)<=90) *(a+i)=*(amap+*(a+i)-'A');
    return;
}
void ins(int i)
{
    cout<<*(a+i)<<(*(a+i)!='\0'?' ':'\n');
    return;
}
