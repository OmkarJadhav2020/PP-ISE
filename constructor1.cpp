#include <iostream>
#include <string>
using namespace std;

class ComplexConstructorExample {
private:
    int id;
    string name;
    double value;

public:
    
    ComplexConstructorExample(int _id = 0, string _name = "Default", double _value = 0.0) 
        : id(_id), name(_name), value(_value) {
        
        if (_id < 0) {
            
            name += " (Negative ID)";
        }
        if (_value > 100) {
            
            value = 100.0;
        }
        
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << ", Value: " << value << endl;
    }
};

int main() {
    
    ComplexConstructorExample obj1(1, "Object 1", 50.0);
    ComplexConstructorExample obj2(-2, "Object 2", 150.0);

    
    obj1.display();
    obj2.display();

    return 0;
}
