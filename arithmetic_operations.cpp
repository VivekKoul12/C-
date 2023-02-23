#include <iostream>
using namespace std;
struct calculator
{
    int add;
    int sub;
    int mul;
    int div;
};

int main()
{
    calculator c;
    int i, a, b;
    while (1)
    {
        cout << "1.Add 2.Sub 3.Mul 4=Div" << endl;
        cout << "Enter the number of operation you want to perform: ";
        cin >> i;
        cout << "Enter the two numbers: ";
        cin >> a >> b;
        switch (i)
        {
        case 1:
            c.add = a + b;
            cout << "Addition of " << a << "and " << b << " is :" << a + b << endl;
            break;
        case 2:
            c.sub = a - b;
            cout << "Subtraction of " << a << "and " << b << " is :" << a - b << endl;
            break;
        case 3:
            c.mul = a * b;
            cout << "Multiplication of " << a << "and " << b << " is :" << a * b << endl;
            break;
        case 4:
            c.div = a / b;
            cout << "Addition of " << a << "and " << b << " is :" << a / b << endl;
            break;

        case 5:
            exit(0);
        default:
            cout << "Invalid" << endl;
        }
    }
    return 0;
}
