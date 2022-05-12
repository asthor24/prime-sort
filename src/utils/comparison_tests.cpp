#include <iostream>
#include <vector>

#include "sort_validation.h"
using namespace std;
template <class T>
void run_comparison_tests(vector<vector<T>> arrays,
                          vector<T> (*algo)(int, vector<T>, int&)) {
  int test_cases = arrays.size();
  vector<vector<T>> arrays_sorted(test_cases);
  int comparison_count = 0;
  for (int test_case = 0; test_case < test_cases; test_case++) {
    vector<T> A = arrays[test_case];
    int n = A.size();
    arrays_sorted[test_case] = algo(n, A, comparison_count);
  }
  bool are_sorted = are_arrays_sorted(arrays_sorted);
  if (are_sorted) {
    cerr << "Average number of comparisons: ";
    cout << ((double)comparison_count / test_cases) << endl;
  } else {
    cout << "Failed! Did not sort some array." << endl;
  }
}