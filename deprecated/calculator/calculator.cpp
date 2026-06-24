#include <iostream>
#include <cmath> 
#include <iomanip>


int main() {
    std::cout << "=== Simple Math Calculator ==\n\n";

    double a,b;
    char op;

    std::cout << "Enter the first number: ";
    std::cin >> a;

    std::cout << "Enter the operator (+ - * / ^ s for sqrt): ";
    std::cin >> op;

    if(op == 's'){
        std::cout << "sqrt(" << a << ") = " << std::sqrt(a) << "\n";
        return 0;
    }

    std::cout << "Enter the second number: ";
    std::cin >> b;

    double result;
    switch(op){
       case '+': result = a + b; break;
       case '-': result = a -b; break;
       case '*': result = a * b; break;
       case '/': 
             if(b == 0) { std::cout << "Error: division by zero!\n"; return 1; }
             result = a / b;
             break;
       case '^': result = std::pow(a,b); break;
       default:
           std::cout << "Unknown operator!\n";
           return 1;
    }

    std::cout << std::fixed << std::setprecision(6);
    std::cout << a << " " << op << " " << b << " = " << result << "\n";
    return 0;
}

