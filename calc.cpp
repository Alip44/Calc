#include <iostream>
#include <cmath> 
using namespace std;

void parseAddition() {
    float a = 0, b = 0;
    cout << "Enter the first value: ";
    cin >> a;
    cout << "Enter the second value: ";
    cin >> b;
    cout << "Result: " << (a + b) << endl;
}

void parseSubtraction() {
    float a = 0, b = 0;
    cout << "Enter the first value: ";
    cin >> a;
    cout << "Enter the second value: ";
    cin >> b;
    cout << "Result: " << (a - b) << endl; 
}

void parseMultiplication() {
    float a = 0, b = 0;
    cout << "Enter the first value: ";
    cin >> a;
    cout << "Enter the second value: ";
    cin >> b;
    cout << "Result: " << (a * b) << endl; 
}

void parseDivision() {
    float a = 0, b = 0;
    cout << "Enter the first value: ";
    cin >> a;
    cout << "Enter the second value: ";
    cin >> b;
    if (b != 0) {
        cout << "Result: " << (a / b) << endl; 
    } else {
        cout << "Error: Division by zero!" << endl;
    }
}

void parseExponentiation() {
    float a = 0;
    int b = 0;
    cout << "Enter the base value: ";
    cin >> a;
    cout << "Enter the exponent value: ";
    cin >> b;
    cout << "Result: " << pow(a, b) << endl; 
}

void parseSquareRoot() {
    float a = 0;
    cout << "Enter the value: ";
    cin >> a;
    if (a >= 0) { 
        cout << "Result: " << sqrt(a) << endl; 
    } else {
        cout << "Error: Cannot compute square root of a negative number!" << endl;
    }
}

void parseSine() {
    float a = 0;
    cout << "Enter the value in radians: "; 
    cin >> a;
    cout << "Result: " << sin(a) << endl; 
}

void parseCosine() {
    float a = 0;
    cout << "Enter the value in radians: "; 
    cin >> a;
    cout << "Result: " << cos(a) << endl; 
}

void parseTangent() {
    float a = 0;
    cout << "Enter the value in radians: "; 
    cin >> a;
    cout << "Result: " << tan(a) << endl; 
}

void help() {
    cout << "\n\n";
    cout << " Tiny Calculator ------------------------------\n";
    cout << "\t a\t\t Addition of two numbers\n";
    cout << "\t m\t\t Subtraction of two numbers\n";
    cout << "\t u\t\t Multiplication of two numbers\n";
    cout << "\t d\t\t Division of two numbers\n";
    cout << "\t p\t\t Exponentiation of two numbers\n";
    cout << "\t r\t\t Square root of a number\n";
    cout << "\t s\t\t Sine of a number (in radians)\n";
    cout << "\t c\t\t Cosine of a number (in radians)\n";
    cout << "\t t\t\t Tangent of a number (in radians)\n";
    cout << "\t h\t\t Help\n";
    cout << "\t e\t\t Exit\n";
    cout << "\n\n";
}

void error() {
    cout << "Error: Input is invalid!\n"; 
}

int main() {
    char type; 
    bool flag = true;
    while (flag) {
        cout << "------------------\n(h) For help\n(e) To exit\nEnter your choice: ";
        cin >> type;
        switch (type) {
            case 'a':
                parseAddition();
                break;
            case 'm':
                parseSubtraction();
                break;
            case 'u':
                parseMultiplication();
                break;
            case 'd':
                parseDivision();
                break;
            case 'p':
                parseExponentiation();
                break;
            case 'r':
                parseSquareRoot();
                break;
            case 's':
                parseSine();
                break;
            case 'c':
                parseCosine();
                break;
            case 't':
                parseTangent();
                break;
            case 'h':
                help();
                break;
            case 'e':
                flag = false; 
                break;
            default:
                error(); 
                break;
        }
    }
    return 0;
}
