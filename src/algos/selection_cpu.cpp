#include <iostream>
#include <vector>

#include "../utils/cpu_tests.h"
#include "../utils/read_input.h"
using namespace std;

vector<int> selection_sort(int n, vector<int> A) {
  int i, j, imin;
  for (i = 0; i < n - 1; i++) {
    imin = i;  // get index of minimum data
    for (j = i + 1; j < n; j++) {
      if (A[j] < A[imin]) imin = j;
    }
    // placing in correct position
    swap(A[i], A[imin]);
  }
  return A;
}

int main() {
  vector<vector<int>> arrays = read_input();
  run_cpu_tests(arrays, selection_sort);
}