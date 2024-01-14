/*
    ATM-CASH WITHDRAWAL PROJECT

        > Enter '1' for Card detection successful case (supposed). Other number choice for Card detection faliure case (supposed).

        > '5555' is the right debit card pin (supposed). Other number for wrong pin case (supposed).

        > Your Money!? Oops, it's 'supposed' as well. Why not to try out with the real card and ATM (of course, legally!).
*/

#include <iostream>
#include <windows.h>

using std::cin;
using std::cout;

int main()
{
    int card, pin, amt, i;

    cout << "\n[*PLEASE ENTER YOUR DEBIT-CARD IN THE SLOT*]"
         << "\n";

    cout << "\nENTER '1' FOR THE CARD DETECTION."
         << "\n";
    cin >> card;

    if (card == 1)
    {
        Sleep(2000);

        cout << "CARD DETECTION IN PROCESS..."
             << "\n";

        Sleep(2000);

        cout << "CARD DETECTED!"
             << "\n";

        Sleep(2000);

        cout << "\nENTER THE PIN BELOW TO PROCEED:"
             << "\n";
        cin >> pin;

        if (pin == 5555) // Supposed debit card pin is 5555
        {
            Sleep(2000);

            cout << "ENTER THE WITHDRAW AMOUNT:"
                 << "\n";
            cout << "$ ";
            cin >> amt;

            Sleep(2000);

            cout << "\nSYSTEM IS PROCESSING THE AMOUNT. PLEASE WAIT..."
                 << "\n";

            Sleep(5000);

            cout << "\n$ " << amt << " HAS BEEN DISPENSED IN TRAY."
                 << "\n";

            Sleep(2000);

            cout << "TRANSACTION COMPLETED. PLEASE COLLECT YOUR CARD."
                 << "\n";
        }
        else
        {
            Sleep(2000);

            cout << "\nWRONG PIN ENTERED. PLEASE TRY AGAIN."
                 << "\n";
        }

        cout << "\n";
    }
    else
    {
        Sleep(2000);

        cout << "CARD DETECTION IN PROCESS..."
             << "\n";

        Sleep(2000);

        cout << "\nNO CARD DETECTED. PLEASE TAKE OUT CARD AND RETRY."
             << "\n";
    }

    return 0;
}
