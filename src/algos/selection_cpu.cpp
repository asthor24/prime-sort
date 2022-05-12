#include <vector>
using namespace std;

template <class T>
vector<T> selection_sort(int n, vector<T> A) {
  int i, j, imin;
  for (i = 0; i < n - 1; i++) {
    imin = i;  // get index of minimum data
    for (j = i + 1; j < n; j++) {
      if (A[j] < A[imin]) imin = j;
    }
    // placing in correct position
    swap(A[i], A[imin]);
  }
  return A;
}
