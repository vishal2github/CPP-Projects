/*
    BASIC CALCULATOR
        
        It is based on the four simple mathematical calulations on the two integer or decimal values and the print the required result. Only one mathematical operations can be performed among all four operations at a time.
*/

#include <iostream>
#include <windows.h>

using std::cin;
using std::cout;

char ch;
float a, b, result;

void add()
{
    cout << ":: ADDITION OPERATION SELECTED ::\n";

    float a, b, r;
    cout << "\nENTER TWO NUMBERS";
    cout << "\nThe first number is: ";
    cin >> a;
    cout << "The second number is: ";
    cin >> b;

    r = (a + b);

    cout << "\nThe addition of " << a << " and " << b << " is " << r << ".\n";
}

void sub()
{
    cout << ":: SUBTRACTION OPERATION SELECTED ::\n";

    float a, b, r;
    cout << "\nENTER TWO NUMBERS";
    cout << "\nThe first number is: ";
    cin >> a;
    cout << "The second number is: ";
    cin >> b;

    r = (a - b);

    cout << "\nThe subtraction of " << a << " and " << b << " is " << r << ".\n";
}

void mul()
{
    cout << ":: MULTIPLICATION OPERATION SELECTED ::\n";

    float a, b, r;
    cout << "\nENTER TWO NUMBERS";
    cout << "\nThe first number is: ";
    cin >> a;
    cout << "The second number is: ";
    cin >> b;

    r = (a * b);

    cout << "\nThe multiplication of " << a << " and " << b << " is " << r << ".\n";
}

void div()
{
    cout << ":: DIVISION OPERATION SELECTED ::\n";

    float a, b, r;
    cout << "\nENTER TWO NUMBERS";
    cout << "\nThe first number is: ";
    cin >> a;
    cout << "The second number is: ";
    cin >> b;

    r = (a / b);

    cout << "\nThe division of " << a << " and " << b << " is " << r << ".\n";
}

int main()
{
    system("cls");

    cout << "\nEnter any two numbers whether in form of an integer, decimal or a combination of two.";

    Sleep(2000);

    cout << "\nThe operation is performed on the basis of operator selected.";

    Sleep(2000);

    cout << "\n\nENTER THE OPERATOR (/,*,+,-) : ";
    cin >> ch;
    cout << "\n";

    if (ch == '+')
    {
        add();
    }
    else if (ch == '-')
    {
        sub();
    }
    else if (ch == '*')
    {
        mul();
    }
    else if (ch == '/')
    {
        div();
    }
    else
    {
        cout << "WRONG OPERATOR SELECTED! PLEASE SELECT FROM THE GIVEN OPERATORS ONLY!\n\n";
    }

    Sleep(2000);

    cout << "\nPROCESS TERMINATED!\n\n";

    system("pause");

    return 0;
}
