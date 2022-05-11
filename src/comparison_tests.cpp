#include <vector>
#include <iostream>
using namespace std;
void run_comparison_tests(vector<vector<int>> arrays, vector<int> (*algo)(int, vector<int>, int&)) {
    int test_cases = arrays.size();
	int comparison_count = 0;
	for(int test_case = 0; test_case < test_cases; test_case++) {
		vector<int> A = arrays[test_case];
		int n = A.size();
		algo(n, A, comparison_count);
	}
    cerr << "Average number of comparisons: ";
	cout << ((double)comparison_count/test_cases) << endl;
}