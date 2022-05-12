#include <chrono>
#include <ctime>
#include <iostream>
#include <ratio>
#include <vector>

#include "sort_validation.h"
using namespace std;
using namespace std::chrono;

typedef std::chrono::high_resolution_clock Clock;

void run_cpu_tests(vector<vector<int>> arrays,
                   vector<int> (*algo)(int n, vector<int>)) {
  int test_cases = arrays.size();
  vector<vector<int>> arrays_sorted(test_cases);
  auto start_time = Clock::now();
  for (int test_case = 0; test_case < test_cases; test_case++) {
    vector<int> A = arrays[test_case];
    int n = A.size();
    arrays_sorted[test_case] = algo(n, A);
  }
  auto end_time = Clock::now();
  double time_seconds =
      duration_cast<duration<double>>(end_time - start_time).count();
  bool are_sorted = are_arrays_sorted(arrays_sorted);
  if (are_sorted) {
    cerr << "Total cpu time used: ";
    cout << time_seconds << endl;
  } else {
    cout << "Failed! Did not sort some array." << endl;
  }
}