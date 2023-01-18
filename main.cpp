#include <iostream>
using namespace std;

int main(){
    // Takes in string and float input. Asks user for num1 and 2 and a operation. :)
    std::string op;
    float num1, num2;
    float result;
    cout << "Welcome to the calculator app" << endl;
    cout << "Please enter your first number: " << endl;
    cin >> num1;
    cout << "Please eneter your operation (+ - * /)" << endl;
    cin >> op;
    cout << "Please enter your second number: " << endl;
    cin >> num2;
    if (op == "+"){
      result = num1 + num2;
    }else if(op == "-"){
      result = num1 - num2;
    }else if (op == "*"){
      result = num1 * num2;
    }else if (op == "/"){
      result = num1 / num2;
    }else{
      cout << "Wrong operation entered :(" << std::endl;
    }
    cout << result << endl;
}