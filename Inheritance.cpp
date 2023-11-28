#include<iostream>
using namespace std;

class base1 
{
    protected:
    int data1;
    public:
    void set_base1(int d1)
    {
        data1 = d1;
    }
    void get_base1()
    {
        cout<<"enter a value of data1 "<<data1<<endl;
    }
};

class base2
{
    protected:
    int data2;
    public:
    void set_base2(int d2)
    {
        data2 = d2;
    }
    void get_base2(){
        cout<<"enter a value of data2 "<<data2<<endl;
    }
};
class derived : public base1,public base2
{
    public:
    
    void display()
    {
         get_base1();
         get_base2();
        cout<<"total value is "<<data1+data2<<endl;
    }
};

int main()
{
    derived pro;
    pro.set_base1(100);
    pro.set_base2(200);
    pro.display();
    return 0;
}
