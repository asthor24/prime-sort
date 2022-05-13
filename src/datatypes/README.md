# Datatypes
Datatypes are structs. To make a datatype valid you must define these outside the struct:

- input_my_type(): used to make it more 
customizable how the data is stored.

Inside the struct you must define these:

- < operator
- \> operator
- free_data(): this function gets called right 
before the pointer is freed, and it gives you an opportunity to free any data you have malloced.

Optional but typically very handy:

- << (stream, not bitshift)
- \>\> (stream, not bitshift)