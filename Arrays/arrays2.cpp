// Largest in Array

#include <iostream>
#include <climits> // header for INT_MIN
using namespace std;

int main() {

    int numArr[] = {12, 23, 3, 9, 2, 34, 90, 20, 500, 3};
    int size = 10;

    int largest = INT_MIN;

    for(int i = 0; i < size; i++) {
        if(numArr[i] > largest) {
            largest = numArr[i];
        }

        // largest = max(numArr[i], largest);
    }


    cout << "Largest in Array is " << largest;

    return 0;
}