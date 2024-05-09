/*
    BASIC CALCULATOR

        It is based on the four simple mathematical calulations on the two integer or decimal values and prints the required result. Only one mathematical operation can be performed among all four operations at a time.
*/

#include <iostream>
#include <windows.h>

using std::cin;
using std::cout;

class Calculator
{
private:
    float a, b, r;
    void add(void);
    void sub(void);
    void mul(void);
    void div(void);

public:
    void setValue(void);
    void calc_process(void);
};

void Calculator ::setValue()
{
    cout << "\nENTER TWO NUMBERS";
    cout << "\nThe first number is: ";
    cin >> a;
    cout << "The second number is: ";
    cin >> b;
}

void Calculator ::add()
{
    cout << ":: ADDITION OPERATION SELECTED ::\n";

    setValue();
    r = (a + b);

    cout << "\nThe addition of " << a << " and " << b << " is " << r << ".\n";
}

void Calculator ::sub()
{
    cout << ":: SUBTRACTION OPERATION SELECTED ::\n";

    setValue();
    r = (a - b);

    cout << "\nThe subtraction of " << a << " and " << b << " is " << r << ".\n";
}

void Calculator ::mul()
{
    cout << ":: MULTIPLICATION OPERATION SELECTED ::\n";

    setValue();
    r = (a * b);

    cout << "\nThe multiplication of " << a << " and " << b << " is " << r << ".\n";
}

void Calculator ::div()
{
    cout << ":: DIVISION OPERATION SELECTED ::\n";

    setValue();

    if (a == 0)
    {
        cout << "Zero isn't divisible!\n\n";
        exit(0);
    }
    else
    {
        r = (a / b);
    }

    cout << "The division of " << a << " and " << b << " is " << r << ".\n";
}

void Calculator ::calc_process()
{
    char ch;
    cout << "** CALCULATOR GUIDELINES **";
    cout << "\n>> Enter any two numbers whether in form of an integer or decimal value.";
    Sleep(1000);
    cout << "\n>> Single operation at a time is performed on the basis of operator selected.";
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
}

int main()
{
    system("cls");

    Calculator c1;
    c1.calc_process();

    system("pause");

    return 0;
}
