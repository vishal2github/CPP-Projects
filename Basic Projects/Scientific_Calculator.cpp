/*
    SCIENTIFIC CALCULATOR

        It is based on the multiple complex mathematical calculations (geometric, trigonometric and logarithmic) on the required integer or decimal values and prints the result. Only one mathematical operation can be performed among all other operations at a time.
*/

#include <iostream>
#include <windows.h>
#include <math.h>

using std::cin;
using std::cout;

class Calculator
{
private:
     const int PI = 3.14;
     int choice, x, y;
     float a, b, c, result;

     // Value-setting functions

     void xyVals()
     {
          cout << "\n> Enter the first value: ";
          cin >> x;
          cout << "> Enter the second value: ";
          cin >> y;
     }

     void aVal()
     {
          cout << "\n> Enter the value: ";
          cin >> a;
     }

     void abVals()
     {
          cout << "\n> Enter the first value: ";
          cin >> a;
          cout << "> Enter the second value: ";
          cin >> b;
     }

     void abcVals()
     {
          cout << "\n> Enter the first value: ";
          cin >> a;
          cout << "> Enter the second value: ";
          cin >> b;
          cout << "> Enter the third value: ";
          cin >> c;
     }

     // Calculation-process functions

     void addition()
     {
          cout << "ADDITION OPERATION SELECTED\n";
          Sleep(2000);

          abVals();
          result = (a + b);

          cout << "\n>> The Addition of " << a << " and " << b << " is " << result << ".\n\n";
     }

     void subtraction()
     {
          cout << "SUBTRACTION OPERATION SELECTED\n";
          Sleep(2000);

          abVals();
          result = (a - b);

          cout << "\n>> The Subtraction of " << a << " to " << b << " is " << result << ".\n\n";
     }

     void multiplication()
     {
          cout << "MULTIPLICATION OPERATION SELECTED\n";
          Sleep(2000);

          abVals();
          result = (a * b);

          cout << "\n>> The Multiplication of " << a << " and " << b << " is " << result << ".\n\n";
     }

     void division()
     {
          cout << "DIVISION OPERATION SELECTED\n";
          Sleep(2000);

          abVals();
          result = (a / b);

          cout << "\n>> The Division/Quotient of " << a << " to " << b << " is " << result << ".\n\n";
     }

     void modulus()
     {
          cout << "MODULUS OPERATION SELECTED\n";
          Sleep(2000);

          xyVals();
          result = (x % y);

          cout << "\n>> The Modulus of " << x << " to " << y << " is " << result << ".\n\n";
     }

     void exponent()
     {
          cout << "EXPONENT OPERATION SELECTED\n";
          Sleep(2000);

          abVals();
          result = pow(a, b);

          cout << "\n>> The Exponent of " << a << " to " << b << " is " << result << ".\n\n";
     }

     void square_root()
     {
          cout << "SQUARE-ROOT OPERATION SELECTED\n";
          Sleep(2000);

          aVal();
          result = sqrt(a);

          cout << "\n>> The Square-Root of " << a << " is " << result << ".\n\n";
     }

     void cube_root()
     {
          cout << "CUBE-ROOT OPERATION SELECTED\n";
          Sleep(2000);

          aVal();
          result = cbrt(a);

          cout << "\n>> The Cube-Root of " << a << " is " << result << ".\n\n";
     }

     float sin(float a)
     {
          cout << "SIN OPERATION SELECTED\n";
          Sleep(2000);

          cout << "\n> Enter the value: ";
          cin >> a;
          result = sin(a);

          cout << "\n>> The value of Sin(" << a << ")"
               << " is " << result << ".\n\n";

          return result;
     }

     float cos(float a)
     {
          cout << "COS OPERATION SELECTED\n";
          Sleep(2000);
          cout << "\n> Enter the value: ";
          cin >> a;
          result = cos(a);
          cout << "\n>> The value of Cos(" << a << ")"
               << " is " << result << ".\n\n";
          return result;
     }

     float tan(float a)
     {
          cout << "TAN OPERATION SELECTED\n";
          Sleep(2000);
          cout << "\n> Enter the value: ";
          cin >> a;
          result = tan(a);
          cout << "\n>> The value of Tan(" << a << ")"
               << " is " << result << ".\n\n";
          return result;
     }

     float arc_sin(float a)
     {
          cout << "SIN-INVERSE OPERATION SELECTED\n";
          Sleep(2000);
          cout << "\n> Enter the value: ";
          cin >> a;
          result = asin(a);
          cout << "\n>> The value of arcSin(" << a << ")"
               << " is " << result << ".\n\n";
          return result;
     }

     float arc_cos(float a)
     {
          cout << "COS-INVERSE OPERATION SELECTED\n";
          Sleep(2000);
          cout << "\n> Enter the value: ";
          cin >> a;
          result = acos(a);
          cout << "\n>> The value of arcCos(" << a << ")"
               << " is " << result << ".\n\n";
          return result;
     }

     float arc_tan(float a)
     {
          cout << "TAN-INVERSE OPERATION SELECTED\n";
          Sleep(2000);
          cout << "\n> Enter the value: ";
          cin >> a;
          result = atan(a);
          cout << "\n>> The value of arcTan(" << a << ")"
               << " is " << result << ".\n\n";
          return result;
     }

     float log(float a)
     {
          cout << "LOG OPERATION SELECTED\n";
          Sleep(2000);
          aVal();
          result = log(a);
          cout << "\n>> The value of log(" << a << ")"
               << " is " << result << ".\n\n";
          return result;
     }

     float log_b10(float a)
     {
          cout << "LOG-B-10 OPERATION SELECTED\n";
          Sleep(2000);
          cout << "\n> Enter the value: ";
          cin >> a;
          result = log10(a);
          cout << "\n>> The value of logbase10(" << a << ")"
               << " is " << result << ".\n\n";
          return result;
     }

     void circle_area()
     {
          cout << "CIRCLE AREA OPERATION SELECTED\n";
          Sleep(2000);

          aVal();
          result = (PI * a * a);

          cout << "\n>> The area of circle with radius " << a << " is " << result << " unit-sq.\n\n";
     }

     void square_area()
     {
          cout << "SQUARE AREA OPERATION SELECTED\n";
          Sleep(2000);

          aVal();
          result = (a * a);

          cout << "\n>> The area of square with side length " << a << " is " << result << " unit-sq.\n\n";
     }

     void rectangle_area()
     {
          cout << "RECTANGLE AREA OPERATION SELECTED\n";
          Sleep(2000);

          abVals();
          result = (a * b);

          cout << "\n>> The area of reactangle with length " << a << " and "
               << "breadth " << b << " is " << result << " unit-sq.\n\n";
     }

     void common_triangle_area()
     {
          // Common Triangle: A polygon with three angles and sides.

          cout << "COMMON-TRIANGLE AREA OPERATION SELECTED\n";
          Sleep(2000);

          abVals();
          result = (0.5 * (a * b));

          cout << "\n>> The area of the common triangle with base " << a << " and height " << b << " is " << result << " unit-sq.\n\n";
     }

     void common_triangle_perimeter()
     {
          cout << "COMMON-TRIANGLE PERIMETER OPERATION SELECTED\n";
          Sleep(2000);

          abcVals();
          result = (a + b + c);

          cout << "\n>> The perimeter of the common triangle with sides " << a << ", " << b << " and " << c << " is " << result << " unit(s).\n\n";
     }

     void eqlat_triangle_area()
     {
          // Equilateral Triangle: A triangle with all three sides of an equal length.

          cout << "EQUILATERAL-TRIANGLE AREA OPERATION SELECTED\n";
          Sleep(2000);

          aVal();
          result = ((sqrt(3) / 4) * (a * a));

          cout << "\n>> The area of an equilateral triangle with side length " << a << " is " << result << " unit-sq.\n\n";
     }

     void eqlat_triangle_perimeter()
     {
          cout << "EQUILATERAL-TRIANGLE PERIMETER OPERATION SELECTED\n";
          Sleep(2000);

          aVal();
          result = (3 * a);

          cout << "\n>> The perimeter of an equilateral triangle with side length " << a << " is " << result << " unit(s).\n\n";
     }

public:
     void calculation(void);
};

void Calculator ::calculation()
{
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

     // **************************** [CORRECTION-WARNING: USER-LAYOUT TO BE ADJUSTED FROM HERE ] *************************************
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
     cin >> choice;
     Sleep(1000);
     cout << "\n";

     switch (choice)
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
          sin(a);
          break;
     case 10:
          cos(a);
          break;
     case 11:
          tan(a);
          break;

     // Inverse-trigonometric Operation Case(s)
     case 12:
          arc_sin(a);
          break;
     case 13:
          arc_cos(a);
          break;
     case 14:
          arc_tan(a);
          break;

     // Logarithmic Operation Case(s)
     case 15:
          log(a);
          break;
     case 16:
          log_b10(a);
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

     cout << "PROCESS TERMINATED!\n\n";
}

int main()
{
     system("cls");

     Calculator c1;
     c1.calculation();

     system("pause");

     return 0;
}
