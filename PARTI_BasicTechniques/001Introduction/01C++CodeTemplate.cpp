//p.4
//C++ Code Template
/*
	A typical C++ Code for competitve programming looks like this:

	#include<bits/stdc++.h>
	using namespace std;
	
	int main() {
		//Solution comes here
	}
The #include line at the beginning of the code is a feature of the g++ compiler
that allows us to include the entire standard library.
Tus, it is not needed to separately include libraries such as iostream, vector and algorithm,
but rather they are available automatically.

The using declares that the classes and fucntions of the standard library can be used directly in the code.
Without the using we would have to write,
for example, std::cout, but now it suffices to write cout.

The code can be compiled using following command:

g++ -std=c++11 -02 -Wall test.cpp -o test

This command produces a binray file test from the source code test.cpp
The compiler follows C++11 standard (-std=c++11), optimizes thge code (-02) and shows warnings about possible errors (-Wall)

*/
