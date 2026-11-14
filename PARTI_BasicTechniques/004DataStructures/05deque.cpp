//53
//QUEUE
/*
A queue also provides two O(1) time operations:
adding an element to the end of the queue, and removing the firs element in the queue.
It is only possible to access the first and last element of a queue.

The following code shows how a queue can be used:
*/

#include<iostream>
#include<queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(3);
    q.push(2);
    q.push(5);
    cout<<q.front()<<endl; //3
    q.pop();
    cout<<q.front()<<endl; //2

    return 0;
}

