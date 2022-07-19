#include <vector>
using namespace std;

template <class T>
vector<T*> prime_sort(int n, vector<T*> A) {
  int d, e, i, j, subd;
  T* tmp;
  for (d = n >> 1; d >= 1; --d) {
    e = d - 1;
    for (i = d - 1; i < n; i += d) {
      tmp = A[i];
      for (j = i, subd = i - d; j > e && *A[subd] > *tmp; j = subd, subd -= d) {
        A[j] = A[subd];
      }
      A[j] = tmp;
    }
  }
  return A;
}
