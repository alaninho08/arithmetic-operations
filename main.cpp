#include <iostream>
using namespace std;

int main() {
    double temp;
    char unit;
    double celsius;
    double fahrenheit;
    cout << "Convert to Fahrenheit (F) or Celsius (C) ?";
    cin >> unit;

    if (unit == 'F' || unit == 'f') {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
        cout << "Temperature in Fahreinheit = " << (1.8 * celsius) + 32.0;
    }

    if (unit == 'C' || unit == 'c') {
        cout << "Enter temperature in fahrenheit: ";
        cin >> fahrenheit;
        cout << "The temperature in fahrenheit = " << (fahrenheit - 32) / 1.8;
    }
else {
    cout << " You can only convert between Fahrenheit and celsius";
}
    return 0;
}
