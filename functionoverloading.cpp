#include<iostream>
using namespace std;
int add(int a,int b)
{
    return(a+b);
}
int add(int a,int b,int c)
{
    return (a+b+c);
}
int add(int a,int b,int c,int d)
{
    return (a+b+c+d);
}
int main()
{
    cout<<"sum is:"<<add(3,5)<<endl;
    cout<<"sum is:"<<add(3,4,5)<<endl;
    cout<<"sum is:"<<add(3,5,7,5)<<endl;
    return 0;
}
