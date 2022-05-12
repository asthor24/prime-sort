#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> read_input() {
  int test_cases;
  cin >> test_cases;
  vector<vector<int>> arrays(test_cases);
  for (int test_case = 0; test_case < test_cases; test_case++) {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
      cin >> A[i];
    }
    arrays[test_case] = A;
  }
  return arrays;
}