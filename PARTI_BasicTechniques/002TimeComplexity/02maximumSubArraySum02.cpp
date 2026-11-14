//MAXIMUM SUB ARRAY SUM
/*
Given an array of n numbers, our task is to calculate
the maximum subarray sum. i.e, the largest possible sum of a sequence
of consecutive values in the array^2.

THe problem is interesting when there may be negative values in
the array. For example, in the array

-1, 2, 4, -3, 5, 2, -5, 2

THe folowwing subarray produces the maximum sum 10:

{2,4,-3,5,2}

We assume that an empty subarray is allowed, so the maximum subarray sum is always at least 0

*/

//ALGORITHM 2

/*
A straighforward way to solve the problem is to go
through all possible subarrays, calculate the sum
of values in each subarray and maintain the maximum sum.
The following code implements this algorithm:
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main() {
    vector<int> arr={-1,2,4,-3,5,2,-5,2};
    int n=arr.size();

    int best=arr[0];

    for(int a=0; a<n; a++) {
        int sum=0;
        for(int b=a; b<n; b++) {
            sum+=arr[b];
            best=max(best,sum);
        }
    }

    cout<<"Max subarray sum: "<<best<<endl;

    return 0;
}
