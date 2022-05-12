#include <iostream>
#include <vector>
using namespace std;

template <class T>
vector<vector<T>> read_input() {
  int test_cases;
  cin >> test_cases;
  vector<vector<T>> arrays(test_cases);
  for (int test_case = 0; test_case < test_cases; test_case++) {
    int n;
    cin >> n;
    vector<T> A(n);
    for (int i = 0; i < n; i++) {
      cin >> A[i];
    }
    arrays[test_case] = A;
  }
  return arrays;
}