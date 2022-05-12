#include<iostream>
#include<vector>
#include<chrono>
#include "../utils/read_input.h"
#include "../utils/comparison_tests.h"
using namespace std;

vector<int> bjornsson_sort(int n, vector<int> A, int& comparison_count) {
	for(int d = n>>1; d >= 1; d--) {
		for(int i = d; i <= n; i+=d) {
			for(int j = i; j > d; j-=d) {
				comparison_count++;
				if(A[j-d-1] > A[j-1])swap(A[j-d-1], A[j-1]);
				else break;
			}
		}
	}
	return A;
}

int main() {
	vector<vector<int>> arrays = read_input();
	run_comparison_tests(arrays, bjornsson_sort);
}