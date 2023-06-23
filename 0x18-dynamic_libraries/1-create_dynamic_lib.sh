#!/bin/bash

# Compile the .c files into object files
gcc -Wall -Werror -fPIC -c *.c

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up the object files
rm *.o

# Move the library to the desired location (optional)
# mv liball.so /path/to/destination

# Print success message
#echo "Dynamic library liball.so created successfully"
