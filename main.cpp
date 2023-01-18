#include <iostream>
using namespace std;

int main(){
    std::string op;
    float num1, num2;
    cout << "Welcome to the calculator app" << endl;
    cout << "Please enter your first number: " << endl;
    cin >> num1;
    cout << "Please eneter your operation (+ - * /)" << endl;
    cin >> op;
    cout << "Please enter your second number: " << endl;
    cin >> num2;
    cout << num1 << op << num2;
}