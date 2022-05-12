#include<iostream>
#include<vector>
#include "../utils/read_input.h"
#include "../utils/cpu_tests.h"
using namespace std;

vector<int> bjornsson_sort(int n, vector<int> A) {
	int d,e,i,j,subd;
    for(d = n>>1; d >= 1; d--) {
        e=d-1;
		for(i = d-1; i < n; i+=d) {
            subd=i-d;
			for(j = i; j > e && A[subd] > A[j]; j=subd,subd-=d) {
                swap(A[j-d], A[j]);
            }
		}
	}
	return A;
}

int main() {
	vector<vector<int>> arrays = read_input();
    run_cpu_tests(arrays, bjornsson_sort);
}