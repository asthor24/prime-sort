#include <vector>
using namespace std;

bool sort_validation(int n, vector<int> A) {
  for (int i = 0; i < n - 1; i++) {
    if (A[i] > A[i + 1]) return false;
  }
  return true;
}

bool are_arrays_sorted(vector<vector<int>> arrays_sorted) {
  int test_cases = arrays_sorted.size();
  bool is_sorted = true;
  for (int test_case = 0; test_case < test_cases; test_case++) {
    vector<int> A = arrays_sorted[test_case];
    int n = A.size();
    is_sorted &= sort_validation(n, A);
  }
  return is_sorted;
}