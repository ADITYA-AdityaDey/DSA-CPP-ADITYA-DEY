// Second Largest Element in Array

#include <iostream>
#include <climits>
using namespace std;

int main() {

    int arr[] = {10, 23, 34, 32, 43, 45};
    // int arr[] = {10, 10, 10, 10, 10, 10};
    int sz = 6;

    int l = arr[0];
    int sl = INT_MIN;

    for(int i = 1; i < sz; i++) {
        if(arr[i] > l) {
            sl = l;
            l = arr[i];
        }
        else if(arr[i] < l && arr[i] > sl) {
            sl = arr[i];
        }
    }

    cout << sl;

    if (sl == INT_MIN)
    {
        cout << "no SL";
    }
    



    return 0;
}