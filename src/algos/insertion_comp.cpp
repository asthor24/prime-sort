#include <vector>
using namespace std;

template <class T>
vector<T> insertion_sort(int n, vector<T> A, int& comparison_counter) {
  for (int i = 0; i < n; i++) {
    for (int j = i; j > 0; j--) {
      comparison_counter++;
      if (A[j - 1] > A[j])
        swap(A[j - 1], A[j]);
      else
        break;
    }
  }
  return A;
}