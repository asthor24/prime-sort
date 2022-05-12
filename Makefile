bjornsson_comp: 
	g++ src/algos/bjornsson_comp.cpp -o bin/bjornsson_comp

bjornsson_cpu:
	g++ src/algos/bjornsson_cpu.cpp -o bin/bjornsson_cpu

insertion_comp: 
	g++ src/algos/insertion_comp.cpp -o bin/insertion_comp

insertion_cpu:
	g++ src/algos/insertion_cpu.cpp -o bin/insertion_cpu

selection_comp:
	g++ src/algos/selection_comp.cpp -o bin/selection_comp

selection_cpu:
	g++ src/algos/selection_cpu.cpp -o bin/selection_cpu

all: bjornsson_comp bjornsson_cpu insertion_comp insertion_cpu selection_comp selection_cpu