/*
    SCIENTIFIC CALCULATOR
        
        It is based on the multiple complex mathematical calulations (geometric, trigonometric and logarithmic) on the required integer or decimal values and prints the result. Only one mathematical operation can be performed among all other operations at a time.
*/

#include <iostream>
#include <windows.h>
#include <math.h>

using std::cin;
using std::cout;

const int PI = 3.14;
int srn_choice, x, y;   // 'srn_choice' is 'Serial-number Choice'
float a, b, res;

void division()
{
     cout << "DIVISION OPERATION SELECTED\n";
     Sleep(2000);
     cout << "\n> Enter the dividend value: ";
     cin >> a;
     cout << "> Enter the divisor value: ";
     cin >> b;
     res = (a / b);
     cout << "\n>> The Division/Quotient of " << a << " to " << b << " is " << res << ".\n\n";
}

void multiplication()
{
     cout << "MULTIPLICATION OPERATION SELECTED\n";
     Sleep(2000);
     cout << "\n> Enter the first value: ";
     cin >> a;
     cout << "> Enter the second value: ";
     cin >> b;
     res = (a * b);
     cout << "\n>> The Multiplication of " << a << " and " << b << " is " << res << ".\n\n";
}

void subtraction()
{
     cout << "SUBTRACTION OPERATION SELECTED\n";
     Sleep(2000);
     cout << "\n> Enter the first value: ";
     cin >> a;
     cout << "> Enter the second value: ";
     cin >> b;
     res = (a - b);
     cout << "\n>> The Subtraction of " << a << " to " << b << " is " << res << ".\n\n";
}

void addition()
{
     cout << "ADDITION OPERATION SELECTED\n";
     Sleep(2000);
     cout << "\n> Enter the first value: ";
     cin >> a;
     cout << "> Enter the second value: ";
     cin >> b;
     res = (a + b);
     cout << "\n>> The Addition of " << a << " and " << b << " is " << res << ".\n\n";
}

void exponent()
{
     cout << "EXPONENT OPERATION SELECTED\n";
     Sleep(2000);
     cout << "\n> Enter the value: ";
     cin >> a;
     cout << "> Enter the exponential value: ";
     cin >> b;
     res = pow(a, b);
     cout << "\n>> The Exponent of " << a << " to " << b << " is " << res << ".\n\n";
}

void modulus()
{
     cout << "MODULUS OPERATION SELECTED\n";
     Sleep(2000);
     cout << "\n> Enter the first value: ";
     cin >> x;
     cout << "> Enter the second value: ";
     cin >> y;
     res = (x % y);
     cout << "\n>> The Modulus of " << x << " to " << y << " is " << res << ".\n\n";
}

void square_root()
{
     cout << "SQUARE-ROOT OPERATION SELECTED\n";
     Sleep(2000);
     cout << "\n> Enter the value: ";
     cin >> a;
     res = sqrt(a);
     cout << "\n>> The Square-Root of " << a << " is " << res << ".\n\n";
}

void cube_root()
{
     cout << "CUBE-ROOT OPERATION SELECTED\n";
     Sleep(2000);
     cout << "\n> Enter the value: ";
     cin >> a;
     res = cbrt(a);
     cout << "\n>> The Cube-Root of " << a << " is " << res << ".\n\n";
}

void sin()
{
     cout << "SIN OPERATION SELECTED\n";
     Sleep(2000);
     cout << "\n> Enter the value: ";
     cin >> a;
     res = sin(a);
     cout << "\n>> The value of Sin(" << a << ")"
          << " is " << res << ".\n\n";
}

void cos()
{
     cout << "COS OPERATION SELECTED\n";
     Sleep(2000);
     cout << "\n> Enter the value: ";
     cin >> a;
     res = cos(a);
     cout << "\n>> The value of Cos(" << a << ")"
          << " is " << res << ".\n\n";
}

void tan()
{
     cout << "TAN OPERATION SELECTED\n";
     Sleep(2000);
     cout << "\n> Enter the value: ";
     cin >> a;
     res = tan(a);
     cout << "\n>> The value of Tan(" << a << ")"
          << " is " << res << ".\n\n";
}

void arc_sin()
{
     cout << "SIN-INVERSE OPERATION SELECTED\n";
     Sleep(2000);
     cout << "\n> Enter the value: ";
     cin >> a;
     res = asin(a);
     cout << "\n>> The value of arcSin(" << a << ")"
          << " is " << res << ".\n\n";
}

void arc_cos()
{
     cout << "COS-INVERSE OPERATION SELECTED\n";
     Sleep(2000);
     cout << "\n> Enter the value: ";
     cin >> a;
     res = acos(a);
     cout << "\n>> The value of arcCos(" << a << ")"
          << " is " << res << ".\n\n";
}

void arc_tan()
{
     cout << "TAN-INVERSE OPERATION SELECTED\n";
     Sleep(2000);
     cout << "\n> Enter the value: ";
     cin >> a;
     res = atan(a);
     cout << "\n>> The value of arcTan(" << a << ")"
          << " is " << res << ".\n\n";
}

void log()
{
     cout << "LOG OPERATION SELECTED\n";
     Sleep(2000);
     cout << "\n> Enter the value: ";
     cin >> a;
     res = log(a);
     cout << "\n>> The value of log(" << a << ")"
          << " is " << res << ".\n\n";
}

void log_b10()
{
     cout << "LOG-B-10 OPERATION SELECTED\n";
     Sleep(2000);
     cout << "\n> Enter the value: ";
     cin >> a;
     res = log10(a);
     cout << "\n>> The value of logbase10(" << a << ")"
          << " is " << res << ".\n\n";
}

void circle_area()
{
     const float PI = 3.14;
     cout << "CIRCLE AREA OPERATION SELECTED\n";
     Sleep(2000);
     cout << "\n> Enter the radius: ";
     cin >> a;
     res = (PI * a * a);
     cout << "\n>> The area of circle with radius " << a << " is " << res << " unit-sq.\n\n";
}

void square_area()
{
     cout << "SQUARE AREA OPERATION SELECTED\n";
     Sleep(2000);
     cout << "\n> Enter the side length: ";
     cin >> a;
     res = (a * a);
     cout << "\n>> The area of square with side length " << a << " is " << res << " unit-sq.\n\n";
}

int main()
{
     system("cls");

     cout << "******************** SCIENTIFIC CALCULATOR ******************\n";
     cout << "_______________________________________________________________\n\n";

     Sleep(2000);

     cout << "Select the required operation's serial number from the list below.\n";
     cout << "\n";

     cout << "1. Division\t\t"
          << "2. Multiplication\t\t"
          << "3. Subtraction\n";

     cout << "4. Addition\t\t"
          << "5. Exponent\t\t\t"
          << "6. Modulus\n";

     cout << "7. Square Root\t\t"
          << "8. Cube Root\t\t\t"
          << "9. Sin\n";

     cout << "10. Cos\t\t\t"
          << "11. Tan\t\t\t\t"
          << "12. Inverse of Sin\n";

     cout << "13. Inverse of Cos\t"
          << "14. Inverse of Tan\t\t"
          << "15. Log\n";

     cout << "16. Log-B-10\t\t"
          << "17. Area of Cirle\t\t"
          << "18. Area of Square\n";

     Sleep(2000);

     cout << "\n\nEnter the Serial-Number for the respective operation : \n";
     cin >> srn_choice;
     Sleep(1000);
     cout << "\n";

     switch (srn_choice)
     {
     case 1:
          division();
          break;

     case 2:
          multiplication();
          break;

     case 3:
          subtraction();
          break;

     case 4:
          addition();
          break;

     case 5:
          exponent();
          break;

     case 6:
          modulus();
          break;

     case 7:
          square_root();
          break;

     case 8:
          cube_root();
          break;

     case 9:
          sin();
          break;

     case 10:
          cos();
          break;

     case 11:
          tan();
          break;

     case 12:
          arc_sin();
          break;

     case 13:
          arc_cos();
          break;

     case 14:
          arc_tan();
          break;

     case 15:
          log();
          break;

     case 16:
          log_b10();
          break;

     case 17:
          circle_area();
          break;

     case 18:
          square_area();
          break;

     default:
          cout << "\nERROR! Please enter the correct serial number from the list of operations.\n";
     }

     cout << "\nPROCESS TERMINATED!\n\n";

     system("pause");

     return 0;
}
