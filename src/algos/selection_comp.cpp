#include <vector>
using namespace std;

template <class T>
vector<T*> selection_sort(int n, vector<T*> A, int& comparison_count) {
  int i, j, imin;
  for (i = 0; i < n - 1; i++) {
    imin = i;
    for (j = i + 1; j < n; j++) {
      comparison_count++;
      if (*A[j] < *A[imin]) imin = j;
    }
    swap(A[i], A[imin]);
  }
  return A;
}