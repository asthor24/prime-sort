#include <chrono>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <ratio>
#include <vector>

#include "sort_validation.h"
using namespace std;
using namespace std::chrono;

typedef std::chrono::high_resolution_clock Clock;

template <class T>
void run_cpu_tests(vector<vector<T*>> arrays,
                   vector<T*> (*algo)(int n, vector<T*>)) {
  int test_cases = arrays.size();
  vector<vector<T*>> arrays_sorted(test_cases);
  auto start_time = Clock::now();
  for (int test_case = 0; test_case < test_cases; test_case++) {
    vector<T*> A = arrays[test_case];
    int n = A.size();
    arrays_sorted[test_case] = algo(n, A);
  }
  auto end_time = Clock::now();
  long long total_time_nanoseconds =
      duration_cast<chrono::nanoseconds>(end_time - start_time).count();
  double average_time_nanoseconds =
      ((double)total_time_nanoseconds) / test_cases;
  bool are_sorted = are_arrays_sorted(arrays_sorted);
  if (are_sorted) {
    cerr << "Average cpu time used (nanoseconds): ";
    cout << fixed << setprecision(3) << average_time_nanoseconds << endl;
  } else {
    cout << "Failed! Did not sort some array." << endl;
  }
}