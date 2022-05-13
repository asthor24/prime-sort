#include <vector>
using namespace std;
template <class T>
vector<T*> shell_sort(int n, vector<T*> A, int& comparison_count) {
  int gap, i, j;
  for (gap = n / 2; gap > 0; gap /= 2) {
    for (i = gap; i < n; i += 1) {
      T* temp = A[i];
      for (j = i; j >= gap; j -= gap) {
        comparison_count++;
        if (*A[j - gap] > *temp)
          A[j] = A[j - gap];
        else
          break;
      }
      A[j] = temp;
    }
  }
  return A;
}