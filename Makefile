bjornsson_comp_int: 
	g++ src/ints/bjornsson_comp.cpp -o bin/bjornsson_comp_int

bjornsson_comp_string: 
	g++ src/strings/bjornsson_comp.cpp -o bin/bjornsson_comp_string

bjornsson_cpu_int:
	g++ src/ints/bjornsson_cpu.cpp -o bin/bjornsson_cpu_int

bjornsson_cpu_string:
	g++ src/strings/bjornsson_cpu.cpp -o bin/bjornsson_cpu_string

insertion_comp_int: 
	g++ src/ints/insertion_comp.cpp -o bin/insertion_comp_int

insertion_comp_string: 
	g++ src/strings/insertion_comp.cpp -o bin/insertion_comp_string

insertion_cpu_int:
	g++ src/ints/insertion_cpu.cpp -o bin/insertion_cpu_int

insertion_cpu_string:
	g++ src/strings/insertion_cpu.cpp -o bin/insertion_cpu_string

selection_comp_int: 
	g++ src/ints/selection_comp.cpp -o bin/selection_comp_int

selection_comp_string: 
	g++ src/strings/selection_comp.cpp -o bin/selection_comp_string

selection_cpu_int:
	g++ src/ints/selection_cpu.cpp -o bin/selection_cpu_int

selection_cpu_string:
	g++ src/strings/selection_cpu.cpp -o bin/selection_cpu_string

bjornsson: bjornsson_comp_int bjornsson_cpu_int bjornsson_comp_string bjornsson_cpu_string

insertion: insertion_comp_int insertion_cpu_int insertion_comp_string insertion_cpu_string

selection: selection_comp_int selection_cpu_int selection_comp_string selection_cpu_string

all: bjornsson insertion selection

clean: 
	rm -r bin/*