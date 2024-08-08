#include <iostream>

int main()
{
    char op;
    double num1, num2, result;

    do {
        std::cout << "Input which operator would you like to use: (+ - * /)\n";
        std::cin >> op;
    } while (!(op == '+' || op == '-' || op == '*' || op == '/'));

    std::cout << "Enter the first number:\n";
    std::cin >> num1;

    std::cout << "Enter the second number:\n";
    std::cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout << "The result is: " << result << '\n';
        break;
    case '-':
        result = num1 - num2;
        std::cout << "The result is: " << result << '\n';
        break;
    case '*':
        result = num1 * num2;
        std::cout << "The result is: " << result << '\n';
        break;
    case '/':
        result = num1 / num2;
        std::cout << "The result is: " << result << '\n';
        break;
    }

    return 0;
}
