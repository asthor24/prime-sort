#include <vector>
using namespace std;

template <class T>
bool sort_validation(int n, vector<T> A) {
  for (int i = 0; i < n - 1; i++) {
    if (A[i] > A[i + 1]) return false;
  }
  return true;
}

template <class T>
bool are_arrays_sorted(vector<vector<T>> arrays_sorted) {
  int test_cases = arrays_sorted.size();
  bool is_sorted = true;
  for (int test_case = 0; test_case < test_cases; test_case++) {
    vector<T> A = arrays_sorted[test_case];
    int n = A.size();
    is_sorted &= sort_validation(n, A);
  }
  return is_sorted;
}