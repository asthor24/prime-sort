#include <vector>
using namespace std;

template <class T>
vector<T> insertion_sort(int n, vector<T> A) {
  int i, j;
  for (i = 0; i < n; i++) {
    int sub1 = i - 1;
    for (j = i; j > 0 && A[sub1] > A[j]; j = sub1, sub1--) {
      swap(A[sub1], A[j]);
    }
  }
  return A;
}