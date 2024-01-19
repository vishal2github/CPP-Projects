/*
    MULTIPLICATION TABLE PROJECT
        > A simple project based on mathematical table of multiplication with an unlimited multiplication range.

    IMPORTANT NOTE
        > Use 'Ctrl + C', to terminate the execution process, in order to avoid any harm to your system in case of an accidental execution with the objectionable multiplication-range that your system is incapable of handeling!
*/

#include <iostream>

using std::cin;
using std::cout;

class Table
{
private:
    int i, mul;
    float num;

public:
    void maths_table(void);
};

void Table ::maths_table()
{
    cout << "Enter the multiplier-number of a required table: ";
    cin >> num;
    cout << "Enter the multiplication range of a required table: ";
    cin >> mul;

    cout << "\nTHE TABLE OF " << num << " IS AS FOLLOWS:"
         << "\n\n";

    for (i = 1; i <= mul; i++)
    {
        cout << num << " x " << i << " = " << num * i << "\n";
    }

    cout << "\nPROCESS TERMINATED!\n\n";
}

int main()
{
    system("cls");

    Table t1;
    t1.maths_table();

    system("pause");

    return 0;
}
