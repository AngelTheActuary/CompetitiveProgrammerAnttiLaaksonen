//47
//SET STRUCTURES.
/*
The structure set is bassed on a balanaced binary tree
and its operation work in O(log n) time.
The struture unordered_set uses hashing,
and its operation work in O(1) time on average.

THe benefits of the set structure is that it mantains the order of the elements
and provides functions that are not available in unordered_set.

On the other hand, unordered_set can be more efficient.
*/

#include<iostream>
#include<set>
using namespace std;

int main() {
    set<int> s;
    s.insert(3);
    s.insert(2);
    s.insert(5);
    cout<<"s.count(3) = "<<s.count(3)<<endl;
    cout<<"s.count(4) = "<<s.count(4)<<endl;
    
    s.erase(3);
    s.insert(4);

    cout<<"s.count(3) = "<<s.count(3)<<endl;
    cout<<"s.count(4) = "<<s.count(4)<<endl;

    /*
    An important properly of sets is that all their elements are dictinct.
    Thus, the function count always returns either 0 (the element is not in the set)
    or 1 (the element is in the set), and the function insert never adds an element to the set if it is already there.
    The following code ilustrates this:
    */
    set<int> s2;
    s2.insert(5);
    s2.insert(5);
    s2.insert(5);
    cout<<"s2.count(5): "<<s2.count(5)<<endl;

    /*
    A set can be used mostly like a vector, but it is not possible to access the elements
    using the []notation.
    The following code creates a set, prints the
    number of elements int it, and then iterates through all the elements:
    */
    cout<<"PRINTING set(3)"<<endl;
    set<int> s3={2,5,6,8};
    cout<<s3.size()<<endl;//4
    for(auto x:s3) {
        cout<<x<<" ";
    }
    cout<<endl;
    
    return 0;
}

