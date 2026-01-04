#include <iostream>

using namespace std;

int main() {

    int arry[] = {43, 23, 75, 21, 20, 12, 72, 34};

    int n = sizeof(arry) / sizeof(arry[0]);

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arry[j] > arry[j+1]) {
                int temp = arry[j];
                arry[j] = arry[j+1];
                arry[j+1] = temp;
            }
        }
    }

    cout << "Bubble Sort: ";
    for (int num: arry) {
        cout << num << " ";
    }
    return 0;

}