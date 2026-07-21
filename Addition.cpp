#include <iostream>

using namespace std;

// Function declarations for menu options
void displayMenu() {
    cout << "\n===============================\n";
    cout << "      ARITHMETIC CALCULATOR     \n";
    cout << "===============================\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "5. Modulus (%)\n";
    cout << "6. Exit\n";
    cout << "===============================\n";
    cout << "Enter your choice (1-6): ";
}

int main() {
    int choice;
    
    // Using do-while loop to keep the program running until user exits
    do {
        displayMenu();
        cin >> choice;

        // Exit early if user chooses option 6
        if (choice == 6) {
            cout << "\nExiting calculator. Goodbye!\n";
            break;
        }

        // Handle invalid choice before asking for numbers
        if (choice < 1 || choice > 6) {
            cout << "\nInvalid choice! Please select an option between 1 and 6.\n";
            continue;
        }

        // For modulus, we need integer values
        if (choice == 5) {
            int num1, num2;
            cout << "Enter two integers: ";
            cin >> num1 >> num2;

            if (num2 == 0) {
                cout << "Error: Division/Modulus by zero is not allowed!\n";
            } else {
                cout << "Result: " << num1 << " % " << num2 << " = " << (num1 % num2) << "\n";
            }
        } 
        // For basic arithmetic (+, -, *, /), we use double to allow decimal values
        else {
            double num1, num2;
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;

            switch (choice) {
                case 1:
                    cout << "Result: " << num1 << " + " << num2 << " = " << (num1 + num2) << "\n";
                    break;
                case 2:
                    cout << "Result: " << num1 << " - " << num2 << " = " << (num1 - num2) << "\n";
                    break;
                case 3:
                    cout << "Result: " << num1 << " * " << num2 << " = " << (num1 * num2) << "\n";
                    break;
                case 4:
                    if (num2 == 0) {
                        cout << "Error: Division by zero is not allowed!\n";
                    } else {
                        cout << "Result: " << num1 << " / " << num2 << " = " << (num1 / num2) << "\n";
                    }
                    break;
            }
        }

    } while (choice != 6);

    return 0;
}