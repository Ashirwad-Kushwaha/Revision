// Problem Description
// You are given 3 sorted arrays A, B and C.
// Find i, j, k such that : max(abs(A[i] - B[j]), abs(B[j] - C[k]), abs(C[k] - A[i])) is minimized.
// Return the minimum max(abs(A[i] - B[j]), abs(B[j] - C[k]), abs(C[k] - A[i])).


// Problem Constraints
// 1 <= len(A), len(B), len(c) <= 106
// 0 <= A[i], B[i], C[i] <= 107


// Input Format
// First argument is an integer array A.
// Second argument is an integer array B.
// Third argument is an integer array C.


// Output Format
// Return an single integer denoting the minimum max(abs(A[i] - B[j]), abs(B[j] - C[k]), abs(C[k] - A[i])).

// Example Input
// Input 1:
// A = [1, 4, 10] B = [2, 15, 20] C = [10, 12]
// Input 2:

// A = [3, 5, 6] B = [2] C = [3, 4]


// Example Output
// Output 1:
// 5
// Output 2:
// 1


// Example Explanation
// Explanation 1:
// With 10 from A, 15 from B and 10 from C.
// Explanation 2:

// With 3 from A, 2 from B and 3 from C.

#include<iostream>

using namespace std;

int main(){
    int array1[3] = {1, 4, 10};
    int array2[3] = {2, 15, 20};
    int array3[2] = {10, 12};

    int mindiff = INT8_MAX;
    int i=3,j=3,k=2;

    while(i>=0 && j>=0 && k>=0){
       int currentmin = max(abs(array1[i] - array2[j]), abs(array2[j] - array3[k]), abs(array3[k] - array1[i]));
       
       mindiff = min(mindiff, currentmin);

       if(array1[i]>=array2[j] && array1[i]>=array3[j]){
        i--;
       }
       else if(array2[i]>=array1[j] && array2[i]>=array3[j]){
        j--;
       }
       else{
        k--;
       }
    }

    cout<<mindiff;
}
