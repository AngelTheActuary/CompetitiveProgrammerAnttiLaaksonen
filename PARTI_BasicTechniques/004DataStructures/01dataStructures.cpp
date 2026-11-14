//45
//DATA STRUCTURES.
/*
A data structure is a way
to store data in the memory of a computer.
*/

//DYNAMIC ARRAYS

/*
A dynamic array is an array whose size can be changed during the excution of the program.
The most popular dynamic array in C++ is the vector structure,
which can be used almost like an ordinary array.
The following code creates an empty vector and adds three elements to it.
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(5);

    // Corrección: faltaban los operadores de inserción de flujo (<<)
    cout << "v[0] = " << v[0] << endl;
    cout << "v[1] = " << v[1] << endl;
    cout << "v[2] = " << v[2] << endl;

    cout << "The function size returns the number of elements in the vector.";
    cout << "\nThe following code iterates through the vector and prints all elements in it:\n";
    
    // Corrección: el tipo del iterador debe ser 'auto' (o vector<int>::iterator),
    // se usa '!=' en lugar de '<', se calcula el índice con (i - v.begin()) y se desreferencia con *i
    for(auto i = v.begin(); i != v.end(); i++) {
        cout << "v[" << (i - v.begin()) << "] = " << *i << endl;
    }

    //The function back returns the last element in the vector, and the function pop_back removes the last element.
    vector<int> v2;
    v.push_back(5);
    v.push_back(2);
    cout<<v.back()<<endl; //2
    v.pop_back();
    cout<<v.back()<<endl; //5
    v.pop_back();
    cout<<v.back()<<endl;//5

    return 0;
}