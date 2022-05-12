#include <vector>
using namespace std;

template <class T>
vector<T> bjornsson_sort(int n, vector<T> A) {
  int d, e, i, j, subd;
  for (d = n >> 1; d >= 1; d--) {
    e = d - 1;
    for (i = d - 1; i < n; i += d) {
      for (j = i, subd = i - d; j > e && A[subd] > A[j]; j = subd, subd -= d) {
        swap(A[subd], A[j]);
      }
    }
  }
  return A;
}
