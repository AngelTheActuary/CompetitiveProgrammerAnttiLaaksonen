//41
//COMPARISON FUNCTIONS
/*
It is also possible give an external comparison function to the
sort function as a callback function.
For example, the following comparison function com
sorts strings by length and secondarily by alphabetical order:
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

bool comp(const string& a, string& b) {
    if(a.size() != b.size()) {
        cout<<"size of a: "<<a.size()<<"\" size of b: "<<b.size()<<endl;
        cout<<(a.size()<b.size())<<endl;
        return a.size()<b.size();
    }
    cout<<a<<" < "<<b<<"? "<<(a<b)<<endl;
    return a<b; //Orden alfabético secundario cuando las longitudes son iguales
}

int main() {
    
    //Now a vector of strings can be sorted as follows:
    vector<string> v = {"programacion", "c", "algoritmos", "matematicas", "ia"};
    cout<<"V UNORDORED:"<<endl;
    for(const auto& s : v) {
        cout<<s<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end(),comp);
    
    cout<<"V WITH ORDER:"<<endl;
    for(const auto& s : v) {
        cout<<s<<" ";
    }
    cout<<endl;

    return 0;
}


