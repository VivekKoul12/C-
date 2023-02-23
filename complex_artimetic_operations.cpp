#include <iostream>

using namespace std;

struct Complex {
    double real;
    double imag;
};

Complex add(Complex z1, Complex z2) {
    Complex result;
    result.real = z1.real + z2.real;
    result.imag = z1.imag + z2.imag;
    return result;
}

Complex subtract(Complex z1, Complex z2) {
    Complex result;
    result.real = z1.real - z2.real;
    result.imag = z1.imag - z2.imag;
    return result;
}

Complex multiply(Complex z1, Complex z2) {
    Complex result;
    result.real = z1.real * z2.real - z1.imag * z2.imag;
    result.imag = z1.real * z2.imag + z1.imag * z2.real;
    return result;
}

Complex divide(Complex z1, Complex z2) {
    Complex result;
    double denominator = z2.real * z2.real + z2.imag * z2.imag;
    result.real = (z1.real * z2.real + z1.imag * z2.imag) / denominator;
    result.imag = (z1.imag * z2.real - z1.real * z2.imag) / denominator;
    return result;
}

int main() {
    while (true) {
        Complex z1 = {0.0, 0.0};
        Complex z2 = {0.0, 0.0};

        cout << "Enter the real part of the first complex number (or type 'exit' to quit): ";
        string input;
        cin >> input;

        if (input == "exit") {
            break;
        }

        z1.real = stod(input);

        cout << "Enter the imaginary part of the first complex number: ";
        cin >> z1.imag;

        cout << "Enter the real part of the second complex number: ";
        cin >> z2.real;
        cout << "Enter the imaginary part of the second complex number: ";
        cin >> z2.imag;

        cout << "Enter the arithmetic operation to perform (+, -, *, /): ";
        char operation;
        cin >> operation;

        Complex result;
        switch (operation) {
            case '+':
                result = add(z1, z2);
                break;
            case '-':
                result = subtract(z1, z2);
                break;
            case '*':
                result = multiply(z1, z2);
                break;
            case '/':
                result = divide(z1, z2);
                break;
            default:
                cout << "Invalid arithmetic operation" << endl;
                continue;
        }

        cout << "Result: " << result.real << " + " << result.imag << "i"<<endl;
    }
}
