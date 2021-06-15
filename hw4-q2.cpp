
/*************************************************************************
** Author : @perfectephraim
** Program : hw4, q2
** Date Created : June 3, 2021
** Date Last Modified : June 4, 2021
** Usage : No command line arguments
** Problem:
Write a simple calculator program that adds, subtracts, multiplies and divides. When the
program is run, it initiliazes the result to 0. The user can then type in an operator and
number. The result is updated and displayed. The following operators are valid:
Operator Meaning
--------------------------------
+ Addition
- Subtraction
* Multiplication
/ Division
---------------------------------

** Pseudocode:
** 1)
** 2)
*************************************************************************/




# include <iostream>
using namespace std;

int main() {
    char op;
    float value, result = 0;

    while (true){
        cout << "Enter operation from the table below, Q or q for quit, H or h for help :";
        cout << R"(
        Operator    Meanining
        ========    ==========
               +           Add
               -      Subtract
               *      Multiply
               /        Divide
        )" << endl;
        cin >> op;

        if(op == 'q' || op == 'Q'){
            break;
        }else if(op == 'h' || op == 'H'){
            cout << "Use '+' to add a value to the result (" << result << ")," << endl;
            cout << "Use '-' to subtract a value from the result (" << result << ")," << endl;
            cout << "Use '*' to multiply a value with the result (" << result << ")," << endl;
            cout << "Use '/' to divide a value into the result (" << result << ")," << endl;
            cout << "Result: " << result << endl;
            continue;
        }
        
        if((op != '+') && (op != '-') && (op != '*') && (op != '/')){
            cout << "Invalid Entry! Please retry" << endl;
            cout << op << endl;
            continue;
        }

        cout << "Enter the value: ";
        cin >> value;

        switch(op) {
            case '+':
                cout << result << " + " << value << " = " << result + value << endl;
                result += value;
                break;

            case '-':
                cout << result << " - " << value << " = " << result - value << endl;
                result -= value;
                break;

            case '*':
                cout << result << " * " << value << " = " << result * value << endl;
                result *= value;
                break;

            case '/':
                try{
                    if(value == 0){
                        throw "Division by zero";
                    }
                    cout << result << " / " << value << " = " << result / value << endl;
                    result /= value;
                }catch(const char* msg){
                    cerr << "Error:" << msg << endl;
                }

                break;

            default:
                // If the operator is other than +, -, * or /, error message is shown
                cout << "Error! operator is not correct" << endl;
                break;
        }

        cout << "Result: " << result << endl;
    }
    cout << "Thank you for using out calculator. Come back again :-)" << endl;
    return 0;
}