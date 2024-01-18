/*
     ELECTRICAL POWER AND ENERGY CALCULATOR

          > One can calculate for the electrical power and energy in 'Watts' and 'Kilo-watts'.
*/

#include <iostream>

using std::cin;
using std::cout;

class Calculation
{
private:
    float amps, volts, powr, time, erg;
    void power_w(void);
    void power_kw(void);

public:
    void calc_process(void);
};

void Calculation ::power_w()
{
    cout << "\n\n>>> POWER CALCULATION (W)\n\n";

    cout << "Enter the Ampere(s) in A: ";
    cin >> amps;
    cout << "Enter the Volt(s) in V: ";
    cin >> volts;
    powr = amps * volts;
    cout << "Net Power: " << powr << " W\n\n";

    cout << ">>> ENERGY CALCULATION (W-Hr)\n";
    cout << "\nEnter the Time in Hr: ";
    cin >> time;
    erg = powr * time;
    cout << "Net Energy: " << erg << " W-Hr\n\n";
}

void Calculation ::power_kw()
{
    cout << "\n\n>>> POWER CALCULATION (KW)\n\n";

    cout << "Enter the Ampere(s) in KA: ";
    cin >> amps;
    cout << "Enter the Volt(s) in KV: ";
    cin >> volts;
    powr = amps * volts;
    cout << "Net Power: " << powr << " KW\n\n";

    cout << ">>> ENERGY CALCULATION (KW-Hr)\n";
    cout << "\nEnter the Time in Hr: ";
    cin >> time;
    erg = powr * time;
    cout << "Net Energy: " << erg << " KW-Hr\n\n";
}

void Calculation ::calc_process()
{
    int swc;
    cout << "*** POWER AND ENERGY CALCULATION ***\n\n";
    cout << "1. Watt Mode\n";
    cout << "2. Kilo-Watt Mode\n\n";

    cout << "Enter your mode choice: ";
    cin >> swc;

    switch (swc)
    {
    case 1:
        power_w();
        break;

    case 2:
        power_kw();
        break;

    default:
        cout << "\nERROR: WRONG CHOICE!!!\n";
    }

    cout << "\nPROCESS TERMINATED!\n\n";
}

int main()
{
    system("cls");

    Calculation c1;
    c1.calc_process();

    system("pause");

    return 0;
}
