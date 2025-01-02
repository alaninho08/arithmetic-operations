#include <iostream>
using namespace std;

int main()

{
    int students = 40;

    // Arithmetic operations = return the result of a specific arithmetic operation (+, -, *, /)
    //Addition
    students = students + 1;
    students+=1;
    students++;

    // Soustraction
    students = students - 1;
    students-= 1;
    students--;

    //Multiplication
    students = 40 * 2;
    students*=2;

    //Division
    students = 40/2;
    students/=2;

    //division part.2
    students = 40/3;
    students/=3;
    /* In this case, need to change fundamental from int to double or short*/

// int remainder = students % 6;
    //cout << remainder
    int studentsSecond = 6 - (5 + 4) * 3 / 2;
    cout << studentsSecond;

    return 0;
}


// More detailed arithmetic operations
#include <iostream>
using namespace std;

int sumNumbers(int firstValue, int secondValue)
{
    int result = firstValue * secondValue;
    return result;
}
int main () {

    int firstNumber = 13;
    int secondNumber = 25;
    int total = firstNumber * secondNumber;
    cout << firstNumber << "\n"; // 13
    cout << secondNumber << "\n"; // 25
    cout << total << "\n"; //38


    total = sumNumbers(33,46); // 70
    cout << total << "\n";

    total = sumNumbers(45,55); // 100
    cout << total << "\n";

    cout << sumNumbers(47, 58) << "\n";

    return 0;
}