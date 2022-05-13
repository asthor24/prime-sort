#include <vector>
using namespace std;
template <class T>
vector<T*> bubble_sort(int n, vector<T*> A) {
  int i, j, p1;
  for (i = n - 1; i > 0; i--) {
    for (j = 0, p1 = 1; j < i; ++j, ++p1) {
      if (*A[j] > *A[p1]) {
        swap(A[j], A[p1]);
      }
    }
  }
  return A;
}