// Smallest in Array

#include <iostream>
#include <climits>  // header for INT_MAX
using namespace std;

int main()
{

    int numArr[] = {10, 23, 34, 45, 12, 32, 65, 2};
    int size = 8;

    int smallest = INT_MAX;

    for (int i = 0; i < size; i++) {
        if(numArr[i] < smallest) {
            smallest = numArr[i];
        }

        // smallest = min(numArr[i], smallest); // Using min function
    }

    cout << "Smallest in Array is " << smallest << endl;

        return 0;
}