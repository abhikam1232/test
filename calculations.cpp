Sure, I can modify the code so that the user can choose the arithmetic operation they want to perform. Here's the updated code:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "This is a program to perform basic arithmetic calculations" << endl;

    char choice;
    cout << "Choose an operation:" << endl;
    cout << "A. Addition" << endl;
    cout << "S. Subtraction" << endl;
    cout << "M. Multiplication" << endl;
    cout << "D. Division" << endl;
    cout << "Enter your choice (A/S/M/D): ";
    cin >> choice;

    switch(choice) {
        case 'A':
        case 'a': {
            int num1, num2;
            cout << "Enter the first number: ";
            cin >> num1;
            cout << "Enter the second number: ";
            cin >> num2;
            cout << "The result of addition is: " << num1 + num2 << endl;
            break;
        }
        case 'S':
        case 's': {
            int a, b;
            cout << "Enter the first number: ";
            cin >> a;
            cout << "Enter the second number: ";
            cin >> b;
            cout << "The result of subtraction is: " << a - b << endl;
            break;
        }
        case 'M':
        case 'm': {
            int x, y;
            cout << "Enter the first number: ";
            cin >> x;
            cout << "Enter the second number: ";
            cin >> y;
            cout << "The result of multiplication is: " << x * y << endl;
            break;
        }
        case 'D':
        case 'd': {
            float p, q;
            cout << "Enter the dividend: ";
            cin >> p;
            cout << "Enter the divisor: ";
            cin >> q;
            if (q != 0) {
                cout << "The result of division is: " << p / q << endl;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
            }
            break;
        }
        default:
            cout << "Invalid choice! Please choose from A, S, M, or D." << endl;
    }

    return 0;
}
```

Now the user can input a character representing the operation they want to perform (A for addition, S for subtraction, M for multiplication, and D for division), and the program will execute the corresponding operation.