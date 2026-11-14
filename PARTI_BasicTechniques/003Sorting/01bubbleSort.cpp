//SORTING THEORY

//Input: 1 3 8 2 9 2 5 6
//Result: 1 2 2 3 5 6 8 9

//O(n^2) Algorithms
//Bubble sort

#include<vector>
#include<iostream>

using namespace std;

int main() {
    vector<int> array={1,3,8,2,9,2,5,6};
    int n=array.size();
    for(int i=0; i<n; i++) {
        for(int j=0; j<n-1; j++) {
            if(array[j] > array[j+1]) {
                int swap=array[j];
                array[j]=array[j+1];
                array[j+1]=swap;
            }
        }
    }

    cout<<"IMPRIMIR"<<endl;
    for(int j=0; j<n; j++) {
        cout<<array[j]<<" ";
    }
    cout<<endl;

    return 0;
}

