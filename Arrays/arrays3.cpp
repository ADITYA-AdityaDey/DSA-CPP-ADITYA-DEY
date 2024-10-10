// Linear Search

#include <iostream>
using namespace std;

int linearSearch(int arr[], int sz, int targetVal) {
    for(int i = 0; i < sz; i++) {
        if(arr[i] == targetVal) {
            return i;
        }
    }
    return -1; // Not Found
}


int main() {

int arr[] = {1, 2, 3, 4, 5};
int sz = 5;
int targerVal = 3;

cout << linearSearch(arr, sz, targerVal) << endl;

    return 0;
}