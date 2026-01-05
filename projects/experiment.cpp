#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> arry = {43, 23, 75, 21, 20, 12, 72, 34};

    int n = arry.size();

    // Bubble Sorting
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arry[j] > arry[j+1]) {
                int temp = arry[j];
                arry[j] = arry[j+1];
                arry[j+1] = temp;
            }
        }
    }

    // Selection Sorting

    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = 0; j < (i+1, n); j++) {
            if (arry[j] < arry[minIndex]) {
                minIndex = j;
                
            }
        }
        
        
    }



    cout << "Bubble Sort: ";
    for (int num: arry) {
        cout << num << " ";
    }
    return 0;

}