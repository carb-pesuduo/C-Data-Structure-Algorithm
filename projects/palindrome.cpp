#include <iostream>
#include <algorithm>

using namespace std;

string palindrome(string val) {

    reverse(val.begin(), val.end());

    return val;
};

int main() {

    string val;

    cout << "WELCOME TO PALINDROME CHECKER\n";
    cout << "enter a word to check: ";
    cin >> val;

    if (palindrome(val) == val) {
        cout << "The word is palindrome.";
    } else {
        cout << "The word is Emordnilap.";
    }

    return 0;
}