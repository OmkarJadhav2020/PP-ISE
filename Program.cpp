#include <iostream>

using namespace std;
double division(int a, int b) {
    if (b == 0) {
        throw "Division by zero error";
    }
    return static_cast<double>(a) / b;
}

int main() {
    int x = 10;
    int y = 0;
    double result = 0;

    try {
        result = division(x, y);
        cout << "Result of division: " << result << endl;
    } catch (const char* error) {
        cerr << "Exception caught: " << error << endl;
    }
    return 0;
}
