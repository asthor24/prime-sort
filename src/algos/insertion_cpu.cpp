#include <iostream>
#include <vector>

#include "../utils/cpu_tests.h"
#include "../utils/read_input.h"
using namespace std;

vector<int> insertion_sort(int n, vector<int> A) {
  int i, j;
  for (i = 0; i < n; i++) {
    int sub1 = i - 1;
    for (j = i; j > 0 && A[sub1] > A[j]; j = sub1, sub1--) {
      swap(A[sub1], A[j]);
    }
  }
  return A;
}

int main() {
  vector<vector<int>> arrays = read_input();
  run_cpu_tests(arrays, insertion_sort);
}