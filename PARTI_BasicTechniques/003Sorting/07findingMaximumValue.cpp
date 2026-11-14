//44
//FINDING THE MAXIMUM VALUE.
/*
Binary search can also be used to find the maximum value for a function that is
first increasing and then decreasing. Our task is to find a position k such that
- f (x) < f (x + 1) when x < k, and

- f (x) > f (x + 1) when x ≥ k.

The idea is to use binary search for finding the largest value of x for which
f (x) < f (x+1). This implies that k = x+1 because f (x+1) > f (x+2). The following
code implements the search:
int x = -1;
for (int b = z; b >= 1; b /= 2) {
while (f(x+b) < f(x+b+1)) x += b;
}
int k = x+1;
Note that unlike in the ordinary binary search, here it is not allowed that
consecutive values of the function are equal. In this case it would not be possible
to know how to continue the search
*/

#include <iostream>

using namespace std;

// Ejemplo de función unimodal (primero crece, alcanza su máximo en k = 42 y luego decrece)
long long f(long long x) {
    // Definimos una parábola invertida con vértice en x = 42
    // f(x) = -(x - 42)^2 + 2000
    return -((x - 42) * (x - 42)) + 2000;
}

int main() {
    long long z = 100; // Salto inicial suficientemente grande
    
    long long x = -1;
    for (long long b = z; b >= 1; b /= 2) {
        while (f(x + b) < f(x + b + 1)) {
            x += b;
        }
    }
    long long k = x + 1;

    cout << "Maximum value position k: " << k << endl;
    cout << "Maximum value f(k): " << f(k) << endl;

    return 0;
}