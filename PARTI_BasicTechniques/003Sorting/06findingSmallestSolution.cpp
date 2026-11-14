//43
//FINDING THE SMALLEST SOLUTION.
/*
An important use for bunary search is to find the position
where the value of a function changes.

Suppose that we wich to find the smallest value k
that is a valid solution for a problem.

We are given a function ok(x) that returns true if x is avalid solution and false otherwise.

In addition, we know that ok(x) is false when x<k and true
when x>=k. The situation looks as follows:

x     | 0        1     ....   k-1       k       k+1     .....
ok(x) | false  false   ....  false     true     true    .....

Now, the value of k can be found using binary search:

*/

#include <iostream>
using namespace std;

// Ejemplo de función monótona: devuelve true si x >= 42 (aquí k = 42)
bool ok(int x) {
    return x >= 42;
}

int main() {
    int z = 100; // Salto inicial suficientemente grande donde ok(z) es true
    
    int x = -1;
    for (int b = z; b >= 1; b /= 2) {
        while (!ok(x + b)) x += b;
    }
    int k = x + 1;

    cout << "Smallest valid solution k: " << k << endl;

    return 0;
}

/*
The search finds the largest value of x for which ok(x) is false.
Thus, the next value k = x + 1 is the smallest possible value for which ok(k) is true.
The initial jump length z has to be large enough, for example some value for which
we know beforehand that ok(z) is true.
The algorithm calls the function ok O(log z) times, so the total time complexity
depends on the function ok. For example, if the function works in O(n) time, the
total time complexity is O(n log z)
*/