//43

//C++ FUNCTIONS.

/*
The C++ standard library contains the following functions that
are base on binary search work in logarithmic time:

- lower_bound returns a pointer to the first array element whose values is at least x
- upper_bound returns a pointer to the first array element whose value is larger than x.
- equal_range returns both above pointers.

The functions asume that the array is sorted.
If there is no such element, the pointer points to the
element after the last array element.

For example, the following code finds out wheter
an array contains an element with value x:

*/

#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int array[]={38, 27, 43, 3, 9, 82, 10};
    int n=sizeof(array)/sizeof(array[0]);
    int x=43;

    auto k=lower_bound(array,array+n,x)-array;
    if(k<n && array[k]==x) {
        cout<<"Entrance to k<n && array[k]==x"<<endl;
        cout<<"x found at index k"<<endl;
    }

    //Then, the following code counts the number of elements whose value is x:
    auto a=lower_bound(array,array+n,x);
    auto b=upper_bound(array,array+n,x);
    cout<<"a: "<<(a-array)<<endl;
    cout<<"b: "<<(b-array)<<endl;
    cout<<"b-a: "<<(b-a)<<endl;

    //Using equal-range, the code becomes shorter
    auto r=equal_range(array, array+n,x);
    cout<<r.second-r.first<<endl;

    return 0;
}



