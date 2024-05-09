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

class Debit
{
private:
     int card, pin, amt, i;
     void process(void);

public:
     void transaction_process()
     {
          process();
     }
};

void Debit ::process()
{
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

               cout << "ENTER THE WITHDRAWAL AMOUNT:"
                    << "\n";
               cout << "$ ";
               cin >> amt;
               Sleep(2000);

               if (amt >= 1)
               {
                    cout << "\nSYSTEM IS PROCESSING THE AMOUNT. PLEASE WAIT..."
                         << "\n";

                    Sleep(5000);

                    cout << "\n$" << amt << " HAS BEEN DISPENSED IN TRAY."
                         << "\n";

                    Sleep(2000);

                    cout << "TRANSACTION COMPLETED. PLEASE COLLECT YOUR CARD.\n";
                    Sleep(2000);
                    cout << "THANK YOU FOR USING OUR ATM SERVICE.\n";
                    Sleep(500);
               }
               else
               {
                    cout << "AMOUNT CAN'T BE LESS THAN OR EQUAL TO ZERO\n";
                    Sleep(1500);
                    cout << "PLEASE RETRY!\n";
               }
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
}

int main()
{
     system("cls");

     Debit card1;
     card1.transaction_process();

     return 0;
}
