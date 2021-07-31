// Calculator using switch case.
#include <iostream>
using namespace std;
int main()
{
    float a, b, c;

    char ch;
    cout << "Enter first number : " << endl;
    cin >> a;
    cout << endl
         << "Operators are :- + - * /" << endl
         << endl;
    cout << "Enter operator : " << endl;
    cin >> ch;
    cout << "Enter Second number : " << endl;
    cin >> b;
    switch (ch)
    {
    case '+':
        c = a + b;
        break;
    case '-':
        c = a - b;
        break;
    case '*':
        c = a * b;
        break;
    case '/':
        c = a / b;
        break;
    default:
        cout << "Check the input" << endl;
        break;
    }
    cout << a << ch << b << " = " << c << endl;
    return 0;
}