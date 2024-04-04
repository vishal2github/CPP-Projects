/*
    SPACECRAFT DATA DISPLAY (PAYLOAD ORBITAL-DELIVERY) PROJECT

        > This program asks for user permission in yes and no for launch initiation of an imaginary spacecraft.
        > As our imagined spacecraft takes-off, the information regarding spacecraft technicals displays during entire mission.
        > One can create multiple objects (Spacecraft fleets). Each object (Spacecraft fleet) can initiate the multiple spacecrafts in series, untill anywhere at the serial point the ingition process is postponed.

        >> NOTE
            > In actual, the spacecraft sends the data signals to the satellite receivers of ground station, so this simplified program is only a replication of terminal output of spacecraft data signals in form of human-readable text.
            > This program is only for fun, and is far different from real data receiving and displaying process with the different programming approach.
            > So, take it as fun and enjoy watching as the code process runs by your command... Captain!
*/

#include <iostream>
#include <windows.h>

using std::cin;
using std::cout;

class Spacecraft_Fleet
{
private:
    int k;
    char x;
    void spacecraft_Code();

public:
    void launch_process();
};

void Spacecraft_Fleet ::spacecraft_Code()
{
    cout << "SPACECRAFT STATUS\n";
    Sleep(2000);
    cout << "ALL SYSTEMS CHECKED! SPACECRAFT IS IN STANDBY MODE!\n";
    Sleep(2000);
    cout << "READY TO COMPLY\n\n";
    Sleep(3000);
    cout << "PRESS 'Y/y' TO START OR 'N/n' TO POSTPONE THE INGNITION PROCESS...\n";
    cin >> x;

    if ((x == 'Y') || (x == 'y'))
    {
        // FLIGHT STATUS-DATA _________________________________________________________________________

        Sleep(2000);
        cout << "\nIGNITION STATUS\n";
        Sleep(2000);
        cout << "THE IGNITION PROCESS HAS STARTED\n";
        Sleep(500);
        cout << "ROCKET BOOSTERS ACTIVATED\n\n";
        Sleep(2000);

        cout << "ALERT\n";
        Sleep(2000);
        cout << "THE SPACECRAFT WILL TAKE OFF IN T-10 SECONDS FROM NOW\n\n";
        cout << "T-10 COUNTDOWN STARTED!\n";
        for (k = 9; k >= 0; k--)
        {
            cout << k << "\n";
            Sleep(1000);
        }

        cout << "\nENGINE 1 STARTED\n";
        Sleep(500);
        cout << "\nTAKE-OFF SUCCESSFUL!\n";
        Sleep(5000);
        cout << "\nFLIGHT STATUS\n";
        Sleep(1000);
        cout << "PROPULSION SYSTEM: STABLE\n";
        Sleep(2000);
        cout << "ENGINE 1 FULLY OPERATIONAL\n\n";
        Sleep(10000);

        cout << "ALERT\n";
        Sleep(1000);
        cout << "ENGINE 1 TURNING OFF AND MODULE 1 DISENGAGEMENT IN PROCESS!\n";
        Sleep(1000);
        cout << "ENGINE 1 SHUT OFF\n";
        Sleep(500);
        cout << "MODULE 1 DISENGAGED\n\n";
        Sleep(1000);
        cout << "ENGINE 2 STARTED\n";

        Sleep(5000);
        cout << "\nFLIGHT STATUS\n";
        Sleep(1000);
        cout << "PROPULSION SYSTEM: STABLE\n";
        Sleep(2000);
        cout << "ENGINE 2 FULLY OPERATIONAL\n\n";
        Sleep(10000);

        cout << "ALERT\n";
        Sleep(1000);
        cout << "ENGINE 2 TURNING OFF AND MODULE 2 DISENGAGEMENT IN PROCESS!\n";
        Sleep(1000);
        cout << "ENGINE 2 SHUT OFF\n";
        Sleep(500);
        cout << "MODULE 2 DISENGAGED\n\n";
        Sleep(1000);
        cout << "ENGINE 3 STARTED\n";

        cout << "\nFLIGHT STATUS\n";
        Sleep(1000);
        cout << "PROPULSION SYSTEM: STABLE\n";
        Sleep(2000);
        cout << "ENGINE 3 FULLY OPERATIONAL\n\n";
        Sleep(10000);

        cout << "FLIGHT STATUS\n";
        Sleep(1000);
        cout << "SPACECRAFT PROCEEDING TOWARDS THE EARTH'S ORBIT\n";
        Sleep(1000);
        cout << "STARTING REVERSE-THRUSTERS\n";
        Sleep(1000);
        cout << "VELOCITY SLOWDOWN IN PROCESS!\n";
        Sleep(5000);
        cout << "MINIMUM VELOCITY ACHIEVED!\n";
        Sleep(100);
        cout << "ORBIT ENTRY SUCCESSFUL!\n\n";

        Sleep(5000);
        cout << "ALERT\n";
        Sleep(1000);
        cout << "DISENGAGING MODULE 3\n";
        Sleep(2000);
        cout << "MODULE 3 DISENGAGED\n\n";

        // PAYLOAD STATUS-DATA _______________________________________________________________________________

        Sleep(2000);
        cout << "PAYLOAD STATUS\n";
        Sleep(2000);
        cout << "PAYLOAD MODULE HAS SUCCESSFULLY DEPLOYED INTO THE ORBIT\n";
    }

    else if ((x == 'N') || (x == 'n'))

    {
        cout << "\nWARNING!\n";
        Sleep(1000);
        cout << "IGNITION PROCESS POSTPONED!\n";
        Sleep(2000);
        cout << "SPACECRAFT(S) LAUNCH PROCEDURE HALTED!\n\n";
        exit(0);
    }

    else
    {
        exit(0);
    }
}

void Spacecraft_Fleet ::launch_process()
{
    int i, j;
    cout << "HELLO CAPTAIN! THE CONTROL IS ALL YOURS.\n";
    Sleep(1000);
    cout << "ENTER THE NUMBER OF SPACECRAFT(S) YOU WANT TO LAUNCH ONE BY ONE\n";
    cin >> j;
    cout << "\n";
    Sleep(2000);

    if (j >= 1)
    {
        for (i = 1; i <= j; i++)
        {
            Sleep(2000);
            cout << "\n\nSPACECRAFT " << i << " LAUNCH INITIATION\n\n";
            Sleep(2000);
            spacecraft_Code();
            Sleep(1000);
            cout << "\nSPACECRAFT " << i << " MISSION COMPLETED!\n\n";
            Sleep(2000);
        }
    }
    else
    {
        cout << "ALERT\n";
        cout << "SPACECRAFT NOT FOUND!\n\n";
    }
}

int main()
{
    system("cls");

    Spacecraft_Fleet fleet1;
    fleet1.launch_process();

    system("pause");

    return 0;
}
