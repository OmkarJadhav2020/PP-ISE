#include <iostream>
#include <string>
using namespace std;

class Example {
private:
    int number;
    string text;

public:
    // Normal Constructor
    Example(int _number, string _text) : number(_number), text(_text) {
        cout << "Normal Constructor invoked." << endl;
    }

    // Default Constructor
    Example() : number(0), text("Default") {
        cout << "Default Constructor invoked." << endl;
    }

    void display() {
        cout << "Number: " << number << ", Text: " << text << endl;
    }
};

int main() {
    
    Example obj1(10, "Object 1");
    Example obj2; 

    
    obj1.display();
    obj2.display();

    return 0;
}
