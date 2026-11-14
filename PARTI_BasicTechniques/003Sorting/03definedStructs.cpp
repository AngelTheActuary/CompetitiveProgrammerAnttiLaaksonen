//USER-DEFINED structs
/*
User-defined structs do not have a comparison operator automatically.
The operator should be defined inside the struct as a function operator<,
whose parameter is another element of the same type.
The operator should return true if the element is smaller tha
the parameter, and false otherwise.

For example, the following struct P contains the x and y coordinates of a point.
The comparison operator is defined so that the points are sorted primarly bu
the x coordinate and secondarily by the y coordinate.
*/

#include<iostream>
using namespace std;

struct P {
    int x,y;
    bool operator<(const P &p) {
        if(x!=p.x) return x<p.x;
        else return y<p.y;
    }
}

int main() {
    //
    return 0;
}






