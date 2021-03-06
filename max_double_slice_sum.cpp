//
// Solution for codility test
// https://codility.com/demo/take-sample-test/max_double_slice_sum/
//
// Copyright 2015, Sven Anderson <sven(at)anderson.de>
//

#include <vector>

using namespace std;

int solution(vector<int> &A) {
    const int N = A.size();
    int result = 0;
    int max_ending = 0;
    int max_double_ending = 0;
    for (int i = 2; i < N-1; ++i) {
        max_ending = max(max_ending + A[i-1], 0);
        max_double_ending = max(max(max_double_ending + A[i], max_ending), 0);
        result = max(result, max_double_ending);
    }
    return result;
}
