#include "../algos/insertion_cpu.h"

#include <iostream>
#include <string>
#include <vector>

#include "../datatypes/my_string.cpp"
#include "../utils/cpu_tests.h"
#include "../utils/free_arrays.h"
#include "../utils/read_input.h"
using namespace std;

int main() {
  vector<vector<my_string*>> arrays = read_input<my_string>();
  run_cpu_tests(arrays, insertion_sort);
  free_arrays(arrays);
}