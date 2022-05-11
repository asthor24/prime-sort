bjornsson_comp: 
	g++ src/bjornsson_comp_count.cpp -o bin/bjornsson_comp_count

insertion_comp: 
	g++ src/insertion_comp_count.cpp -o bin/insertion_comp_count

all: bjornsson_comp insertion_comp