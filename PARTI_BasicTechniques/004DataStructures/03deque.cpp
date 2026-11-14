//52
//DEQUE
/*
A deque is a dynamic array whose size can be efficiently changed
at both ends of the array.

Like a vector, a deque provides the functions push_back and pop_back,
but it also includes the functions push_front and pop_front which are not available in a vector.

A deque can be used as follows:
*/

#include<iostream>
#include<deque>
using namespace std;

int main() {
    deque<int> d;
    d.push_back(5);
    d.push_back(2);
    d.push_front(3);
    d.pop_back();
    d.pop_front();

    for(auto x:d) {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}

