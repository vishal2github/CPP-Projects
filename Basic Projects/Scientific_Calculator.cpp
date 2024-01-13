/*
    SCIENTIFIC CALCULATOR

        It is based on the multiple complex mathematical calculations (geometric, trigonometric and logarithmic) on the required integer or decimal values and prints the result. Only one mathematical operation can be performed among all other operations at a time.
*/

#include <iostream>
#include <windows.h>
#include <math.h>

using std::cin;
using std::cout;

const int PI = 3.14;
int srn_choice, x, y; // 'srn_choice' is 'Serial-number Choice'
float a, b, c, res;

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

void rectangle_area()
{
     cout << "RECTANGLE AREA OPERATION SELECTED\n";
     Sleep(2000);
     cout << "\n> Enter the length: ";
     cin >> a;
     cout << "\n> Enter the breadth: ";
     cin >> b;
     res = (a * b);
     cout << "\n>> The area of reactangle with length " << a << " and "
          << "breadth " << b << " is " << res << " unit-sq.\n\n";
}

void common_triangle_area()
{
     // Common Triangle: A polygon with three angles and sides.

     cout << "COMMON-TRIANGLE AREA OPERATION SELECTED\n";
     Sleep(2000);
     cout << "\n> Enter the base: ";
     cin >> a;
     cout << "\n> Enter the height: ";
     cin >> b;
     res = (0.5 * (a * b));
     cout << "\n>> The area of the common triangle with base " << a << " and height " << b << " is " << res << " unit-sq.\n\n";
}

void common_triangle_perimeter()
{
     cout << "COMMON-TRIANGLE PERIMETER OPERATION SELECTED\n";
     Sleep(2000);
     cout << "\n> Enter the length of first side: ";
     cin >> a;
     cout << "\n> Enter the length of second side: ";
     cin >> b;
     cout << "\n> Enter the length of third side: ";
     cin >> c;
     res = (a + b + c);
     cout << "\n>> The perimeter of the common triangle with sides " << a << ", " << b << " and " << c << " is " << res << " unit(s).\n\n";
}

void eqlat_triangle_area()
{
     // Equilateral Triangle: A triangle with all three sides of an equal length.

     cout << "EQUILATERAL-TRIANGLE AREA OPERATION SELECTED\n";
     Sleep(2000);
     cout << "\n> Enter the side length: ";
     cin >> a;
     res = ((sqrt(3) / 4) * (a * a));
     cout << "\n>> The area of an equilateral triangle with side length " << a << " is " << res << " unit-sq.\n\n";
}

void eqlat_triangle_perimeter()
{
     cout << "EQUILATERAL-TRIANGLE PERIMETER OPERATION SELECTED\n";
     Sleep(2000);
     cout << "\n> Enter the length of side: ";
     cin >> a;
     res = (3 * a);
     cout << "\n>> The perimeter of an equilateral triangle with side length " << a << " is " << res << " unit(s).\n\n";
}

int main()
{
     system("cls");

     cout << "******************** SCIENTIFIC CALCULATOR ******************\n";
     cout << "_______________________________________________________________\n\n";

     Sleep(2000);

     cout << "Select the required operation's serial number from the list below.\n";
     cout << "\n";

     cout << "BASIC OPERATIONS\n";
     cout << "1. Addtion\t\t\t"
          << "2. Subtraction\t\t\t"
          << "3. Multiplication\t\t\t"
          << "4. Division\t\t\t"
          << "5. Modulus\n\n\n";

     cout << "EXPONENTIAL OPERATIONS\n"
          << "6. Exponent\n\n\n";

     cout << "ROOT OPERATIONS\n"
          << "7. Square Root\t\t\t"
          << "8. Cube Root\n\n\n";

     cout << "TRIGONOMETRIC OPERATIONS\n"
          << "9. Sin\t\t\t\t"
          << "10. Cos\t\t\t\t"
          << "11. Tan\n\n\n";

     cout << "INVERSE-TRIGONOMETRIC OPERATIONS\n"
          << "12. Inverse of Sin\t\t"
          << "13. Inverse of Cos\t\t"
          << "14. Inverse of Tan\n\n\n";

     cout << "LOGARITHMIC OPERATIONS\n"
          << "15. Log\t\t\t\t"
          << "16. Log-B-10\n\n\n";

     // wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww
     cout << "GEOMETRIC OPERATIONS\n"
          << "17. Area of Cirle\t\t\t"
          << "18. Area of Square\n";

     cout << "19. Area of Rectangle\t\t\t"
          << "20. Common-Triangle Area\t\t"
          << "21. Common-Triangle Perimeter\n";

     cout << "22. Equilateral-Triangle Area\t\t"
          << "23. Equilatral-Triangle Perimeter\t\t\t";

     Sleep(2000);

     cout << "\n\nEnter the Serial-Number for the respective operation : \n";
     cin >> srn_choice;
     Sleep(1000);
     cout << "\n";

     switch (srn_choice)
     {
     // Basic Operation Case(s)
     case 1:
          addition();
          break;
     case 2:
          subtraction();
          break;
     case 3:
          multiplication();
          break;
     case 4:
          division();
          break;
     case 5:
          modulus();
          break;

     // Exponential Operation Case(s)
     case 6:
          exponent();
          break;

     // Root Operation Case(s)
     case 7:
          square_root();
          break;
     case 8:
          cube_root();
          break;

     // Trigonometric Operation Case(s)
     case 9:
          sin();
          break;
     case 10:
          cos();
          break;
     case 11:
          tan();
          break;

     // Inverse-trigonometric Operation Case(s)
     case 12:
          arc_sin();
          break;
     case 13:
          arc_cos();
          break;
     case 14:
          arc_tan();
          break;

     // Logarithmic Operation Case(s)
     case 15:
          log();
          break;
     case 16:
          log_b10();
          break;

     // Geometric Operation Case(s)
     case 17:
          circle_area();
          break;
     case 18:
          square_area();
          break;
     case 19:
          rectangle_area();
          break;
     case 20:
          common_triangle_area();
          break;
     case 21:
          common_triangle_perimeter();
          break;
     case 22:
          eqlat_triangle_area();
          break;
     case 23:
          eqlat_triangle_perimeter();
          break;

     default:
          cout << "\nERROR! Please enter the correct serial number from the list of operations.\n";
     }

     cout << "\nPROCESS TERMINATED!\n\n";

     system("pause");

     return 0;
}
