//
// Solution for codility test
// https://codility.com/demo/take-sample-test/equi/
//
// Copyright 2015, Sven Anderson <sven(at)anderson.de>
//

#include <vector>

using namespace std;

int solution(vector<int> &A) {
    long sum_left = 0, sum_right = 0;
    for (size_t i = 0; i < A.size(); ++i) {
        sum_right += A[i];
    }
    for (size_t i = 0; i < A.size(); ++i) {
        sum_right -= A[i];
        if (sum_right == sum_left) {
            return i;
        }
        sum_left += A[i];
    }
    return -1;
}
