#include "../algos/bjornsson_comp.h"

#include <iostream>
#include <vector>

#include "../utils/comparison_tests.h"
#include "../utils/read_input.h"
using namespace std;

int main() {
  vector<vector<string>> arrays = read_input<string>();
  run_comparison_tests(arrays, bjornsson_sort);
}