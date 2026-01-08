#include <iostream>
#include <vector>
#include <limits>

using namespace std;

class GWA {
private:
    vector<float> subtotal;
    vector<int> units;

public:
    GWA() {}

    void gradePerUnit();
    void compute(float &total, int &totalUnits);
};

void userInput(int &unit, float &grade) {
    while (true) {
        cout << "Unit Amount: ";
        cin >> unit;

        cout << "Grade: ";
        cin >> grade;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Invalid input, try again.\n\n";
        } else {
            break;
        }
    }
}

void GWA::gradePerUnit() {
    int subjects;
    cout << "How subjects will you calculate? ";
    cin >> subjects;

    for (int i = 0; i < subjects; i++) {
        int unit;
        float grade;

        userInput(unit, grade);

        subtotal.push_back(unit * grade);
        units.push_back(unit);
    }
}

void GWA::compute(float &total, int &totalUnits) {
    total = 0;
    totalUnits = 0;

    for (float value : subtotal)
        total += value;

    for (int unit : units)
        totalUnits += unit;
}

int main() {
    GWA gwa;

    gwa.gradePerUnit();

    float totalGrades;
    int totalUnits;

    gwa.compute(totalGrades, totalUnits);

    float gwaValue = totalGrades / totalUnits;

    cout << "\nTotal Units  : " << totalUnits << endl;
    cout << "Total Grades : " << totalGrades << endl;
    cout << "Your GWA     : " << gwaValue << endl;

    return 0;
}
