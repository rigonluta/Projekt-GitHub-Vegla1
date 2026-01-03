#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    char op;

    cout << "Shkruaj numrin e pare: ";
    cin >> num1;

    cout << "Shkruaj operatorin (+, -, *, /): ";
    cin >> op;

    cout << "Shkruaj numrin e dyte: ";
    cin >> num2;

switch (op) {
        case '+':
            cout << "Rezultati: " << num1 + num2;
            break;
        case '-':
            cout << "Rezultati: " << num1 - num2;
            break;
        case '*':
            cout << "Rezultati: " << num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                cout << "Rezultati: " << num1 / num2;
            else
                cout << "Gabim: Nuk lejohet pjesetimi me zero!";
            break;
        default:
            cout << "Operator i pavlefshem!";
    }

    return 0;
}
