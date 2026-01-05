#include <iostream>
#include <algorithm>

using namespace std;

string reverseString(string val) {

    reverse(val.begin(), val.end());
    return val;
}

int main() {

    string val;

    cout << "Enter string to reverse: ";
    cin >> val;

    cout << reverseString(val);

    return 0;
}