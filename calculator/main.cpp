#include <iostream>

using namespace std;

int main()
{
    double num1, num2;
    char op;
    std::cout << "First Number: ";
    std::cin >> num1;
    std::cout << "Enter Operator: ";
    std::cin >> op;
    std::cout << "Second Number: ";
    std::cin >> num2;

    int result;
    if(op == '+'){
        result = num1 + num2;

    } else if (op == '-'){
        result = num1 - num2;

    } else if (op == '/'){
        result = num1 / num2;

    } else if (op == '*'){
        result = num1 * num2;
    } else {
        cout << "Invalid Operator" << endl;
    }     
    cout << result;
    return 0;
}
