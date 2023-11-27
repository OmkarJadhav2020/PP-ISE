#include<iostream>
#include<vector>

using namespace std;

class Employee
{
    public:
        virtual double calcSalary() = 0;
        virtual string get_name() = 0;
};

class Developer : public Employee
{
    public:
        string get_name()
        {
            return "Developer";
        }
        double calcSalary()
        {
            return 100000.0;
        }
};

class Manager : public Employee
{
    public:
        string get_name()
        {
            return "Manager";
        }
        double calcSalary()
        {
            return 75000.0;
        }
};

class CEO : public Employee
{
    public:
        string get_name()
        {
            return "CEO";
        }
        double calcSalary()
        {
            return 2000000.0;
        }
};

int main()
{
    vector<Employee *> empList;
    empList.push_back(new Manager);
    empList.push_back(new Developer);
    empList.push_back(new CEO);
    for(auto &employee : empList) // for i in empList
    {
        cout<<"Salary of "<<employee->get_name()<<" is "<<employee->calcSalary()<<endl;
    }

    return 0;
}