#include <iostream>
using namespace std;

int main () {

    double temp;
    char unit;

    cout << "----- TEMPERATURE CONVERTER -----\n";
    cout << "Select unit for new temperature (C/F): ";
    cin >> unit;

    if (unit == 'f' || unit == 'F') {
        cout << "Enter the temperature in C: ";
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "The new temperature is: " << temp << "F\n";
    }
    else if (unit == 'c' || unit == 'C') {
        cout << "Enter the temperature in F: ";
        cin >> temp;

        temp = (temp - 32) / 1.8;
        cout << "The new temperature is: " << temp << "C\n";
    }
    else {
        cout << "Please enter C or F only.";
    }
    return 0;
}