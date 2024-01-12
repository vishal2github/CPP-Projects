/*
    MULTIPLICATION TABLE PROJECT

        > A simple project based on mathematical table multiplication.
*/

#include <iostream>

using std::cin;
using std::cout;

int i, mul;
float num;

void maths_table()
{
    cout << "Enter the multiplier-number of a required table: ";
    cin >> num;
    cout << "Enter the multiplication range of a required table: ";
    cin >> mul;

    cout << "\nTHE TABLE OF " << num << " IS AS FOLLOWS:" << "\n\n";

    for (i = 1; i <= mul; i++)
    {
        cout << num << " x " << i << " = " << num * i << "\n";
    }
}

int main()
{
    system("cls");

    maths_table();

    cout << "\nPROCESS TERMINATED!\n"
         << "\n";

    system("pause");

    return 0;
}
