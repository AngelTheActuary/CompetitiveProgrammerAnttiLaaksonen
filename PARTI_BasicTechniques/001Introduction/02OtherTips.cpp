/*
In most contests, standard streams are used for reading input and writing output.
In C++, the standard streams are cin for input and cout for output.
In addition, the C functions scanf and printf can be used.

The input for the program usually consistes of numbers and strings that are separated with spaces and newlines.
They can be read from the cin stream as follows:

int a, b;
string x;
cin>>a>>b>>x;

This kind of coce always works, assuming that there is at least one space
for newline between each element in the input.
For example, the above code can read both of the following inputs:

123 456 monkey

123 456
monkey

THe cout stream is used for output as follows:

int a=123, b=456;
string x="monkey";
cout<<a<<" "<<b<<" "<<x<<"\n";

Input and output is sometimes a bottleneck in the program.
The following lines at the beginning of code make input and output more efficient:

ios::sync_with_stdio(0);
cin.tie(0);

This loop reads elements from the iinput one after another,
until there is no more data avaialable in the input

In some contest systems, files are yused for input and output.
An easy solution for this is to write the code as usual using standard streams,
but add the following lines to the beginning of the code:

freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);

After this, the program reads the input from the file "input.txt"
and writes the output to the file "output.txt".
*/

/*
INTEGERS

The most used integer type in competitive programming is int, which is a 32-bit type
with value range of -2^31... 2^31-1 or about -2*10^9.

If the type int is not enough, the 64-bit type long long can be used.
It has a value range of -2^63....2^63-1 or about -9*10^18....9*10^18.
The following code defines a long long variable:

long long x = 123456789123456789LL;

The sufix LL means that the type of the number is long long.
A common mistake when using the type long long is that the type int is still used somewhere in the code.
For example, the following code contains a subtle error:
*/

int a=123456789;
long long b=a*a;
cout<<b<<"\n"; // -1757895751

/*
Even though the variable b is of type long long,
both numbers in the expression a*a are type int and the result
is also of type int.

Because of this, the variable b will contain a wrong reult.
The problem can be solved by changing the type of a to long long by changing
the expression to (long long)a*a.

Usually contest problems are set so that the type
long long is enough. Still, it is good to know that the g++
compiler also provides a 128-bit type __int128_t with 
a value range of -2^127...2^127-1 or about -10^38....10^38.

However, this type is not available in all contest systems.

INPUT AND OUPUT.

In most contests, standard streams are used for reading input and writing output.
In C++, the standard streams are cin for input and cout for output.
In addition, the C functions scanf and printf can be used.

The input for the program usually consists of numbers and strings that are separated
with spaces and newlines.

They can be read from the cin stream as follows:

int a, b;
string x;
cin>>a>>b>>x;

This kind of code always works, assuming that there is at least one space or newline
between each element in the input.
For example, the above code can read both of the following inputs:

123 456 monkey

123 456
monkey

If the amount of data is unknown, the following loop is useful:

while (cin>>x) {
    // code.
}

This loop reads elements from the input one after another, until there is no more
data available in the input.

In some contest systems, files are used for input and output.
An easy solution for this is to write the code as usual using standarc streams,
but add the following lines to the beginning of the code:

freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);

After this, the program reads the input from the file "input.txt" and
writes the output to the file "output.txt"

*/

//WORKING WITH NUMBERS.

//INTEGERS

/*
The most used integer type in competitive programming is int, which is
a 32-bit type with a value of range of -2^31...2^31-1 or about -2*10^9....2*10^9.
If the type int is not enough
*/

//MODULAR ARITHMETIC

/*
(a+b) mod m = (a mod m + b mod m) mod m
(a-b) mod m = (a mod m - b mod m) mod m
(a*b) mod m = (a mod m * b mod m) mod m
*/










