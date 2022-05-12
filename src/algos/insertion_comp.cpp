#include <chrono>
#include <iostream>
#include <vector>

#include "../utils/comparison_tests.h"
#include "../utils/read_input.h"
using namespace std;

vector<int> insertion_sort(int n, vector<int> A, int& comparison_counter) {
  for (int i = 0; i < n; i++) {
    for (int j = i; j > 0; j--) {
      comparison_counter++;
      if (A[j - 1] > A[j])
        swap(A[j - 1], A[j]);
      else
        break;
    }
  }
  return A;
}

int main() {
  vector<vector<int>> arrays = read_input();
  run_comparison_tests(arrays, insertion_sort);
}