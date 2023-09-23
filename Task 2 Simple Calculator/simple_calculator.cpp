
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    cout<<"\n___Welcome to our Simple Calculator___\n\n";
    char choice;
    do {
        ll num1, num2;
        char op;
        cout << "Enter the first number: \n";
        cin >> num1;
        cout << "Enter the second number: \n";
        cin >> num2;
        cout << "Enter the operator +,-,*,/: \n";
        cin >> op;
        switch (op) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2;
                break;
            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2;
                break;
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2;
                break;
            case '/':
                if (num2 != 0)
                    cout << num1 << " / " << num2 << " = " << num1 / num2;
                else
                    cout << "Division by zero is not allowed!";
                break;
            default:
                cout << "Invalid operator.";
                break;
        }
        cout << "\nDo you want to Exit? (y/n):\n ";
        cin >> choice;
    }
    while(choice=='n'||choice=='N');
    cout<<"Thank you for using our calculator\n";
}
