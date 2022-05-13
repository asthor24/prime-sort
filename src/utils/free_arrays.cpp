#include <vector>

template <class T>
void free_arrays(vector<vector<T *>> arrays) {
  for (int i = 0; i < arrays.size(); i++) {
    for (int j = 0; j < arrays[i].size(); j++) {
      arrays[i][j]->free_data();
      free(arrays[i][j]);
    }
  }
}