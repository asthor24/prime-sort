prime_comp_int: 
	g++ src/ints/prime_comp.cpp -o bin/prime_comp_int

prime_comp_string: 
	g++ src/strings/prime_comp.cpp -o bin/prime_comp_string

prime_cpu_int:
	g++ src/ints/prime_cpu.cpp -o bin/prime_cpu_int

prime_cpu_string:
	g++ src/strings/prime_cpu.cpp -o bin/prime_cpu_string

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

bubble_comp_int:
	g++ src/ints/bubble_comp.cpp -o bin/bubble_comp_int

bubble_cpu_int:
	g++ src/ints/bubble_cpu.cpp -o bin/bubble_cpu_int

shell_cpu_int:
	g++ src/ints/shell_cpu.cpp -o bin/shell_cpu_int

shell_comp_int:
	g++ src/ints/shell_comp.cpp -o bin/shell_comp_int

prime: prime_comp_int prime_cpu_int prime_comp_string prime_cpu_string

insertion: insertion_comp_int insertion_cpu_int insertion_comp_string insertion_cpu_string

selection: selection_comp_int selection_cpu_int selection_comp_string selection_cpu_string

bubble: bubble_comp_int bubble_cpu_int

shell: shell_cpu_int shell_comp_int

all: prime insertion selection bubble shell

clean: 
	rm -r bin/*