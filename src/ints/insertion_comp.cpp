#include "../algos/insertion_comp.h"

#include <iostream>
#include <vector>

#include "../datatypes/my_int.cpp"
#include "../utils/comparison_tests.h"
#include "../utils/free_arrays.h"
#include "../utils/read_input.h"
using namespace std;

int main() {
  vector<vector<my_int*>> arrays = read_input<my_int>();
  run_comparison_tests(arrays, insertion_sort);
  free_arrays(arrays);
}