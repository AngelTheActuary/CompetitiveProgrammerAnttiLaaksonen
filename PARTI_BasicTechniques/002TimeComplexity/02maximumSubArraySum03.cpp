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

//ALGORITHM 3

#include<algorithm>
#include<climits>
#include<vector>
#include<iostream>

using namespace std;

int main() {
    vector<int> array={-1,2,4,-3,5,2,-5,2};
    int n=array.size();
    int best=array[0], sum=0;

    for(int k=0; k<n; k++) {
        sum=max(array[k],sum+array[k]);
        best=max(best,sum);
    }

    cout<<best<<endl;

    return 0;
}