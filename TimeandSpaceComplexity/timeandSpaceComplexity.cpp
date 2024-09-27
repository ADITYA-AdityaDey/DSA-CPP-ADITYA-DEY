// x,y two numbers
// sum of all the numbers between x to y
// x=2; y=6
// {2, 3, 4 ,5, 6}  -> Arithmetic Progresion

// Sum of n terms in AP(Arithmetic Progresion) -> n/2(2a + (n-1)*d)
// where, n->no of terms
//a->first term, b->difference


// n=(y-x+1) => 6-2+1 = 5
// a=x => 2
// n/2(2a + (n-1)*d) => 5/2(2*2 + (5-1)*1) => 5/2(4 + 4) => 5*8/2 => 40/2 => 20

// so the answer is 20 {2 + 3 + 4 + 5 + 6}


#include <iostream>
using namespace std;

int main() {
    int x, y;

    cin >> x >> y;

    int n = y - x + 1;
    int a = x;

    int result = (float)n/2*(2*a + (n-1)*1);

    cout << "The Sum of n terms is: " << result;

    return 0;
}