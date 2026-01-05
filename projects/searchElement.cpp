#include <iostream>

using namespace std;

int searchElement(int array[], int size, int element);

int searchElement(int array[], int size, int element) {

    for (int  i = 0; i < size; i++) {
        if (array[i] == element) {
            return i;

        }

    }
    return -1;
}   
int main () {

    int nums[] = {1,2,3,4,5,6,7,8,9,10};

    int size = sizeof(nums) / sizeof(nums[0]);
    int index;
    int element;


    cout << "Enter element to find: ";
    cin >> element;

    index = searchElement(nums, size, element);

    if (index != -1) {
        cout << element << " is at index " << index;

    } else {
        cout << element << " is not in index";

    }
    
    return 0;

}