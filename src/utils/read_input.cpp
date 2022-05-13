#include <iostream>
#include <vector>
using namespace std;

template <class T>
vector<vector<T *>> read_input() {
  int test_cases;
  cin >> test_cases;
  vector<vector<T *>> arrays(test_cases);
  for (int test_case = 0; test_case < test_cases; test_case++) {
    int n;
    cin >> n;
    arrays[test_case] = vector<T *>(n);
    for (int i = 0; i < n; i++) {
      T *a = (T *)malloc(sizeof(T));
      cin >> *a;
      arrays[test_case][i] = a;
    }
  }
  return arrays;
}