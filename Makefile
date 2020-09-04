# Fall 2020
# PROGRAM: Program 0
# PROGRAMMER: Ethan Johnson
# z-ID: z1826490
# Date due: 9-4-2020

# Compiler variables
CCFLAGS = -Wall -std=c++11

# Rule to link object code files to create executable file
introduction.cc: introduction.o
        g++ $(CCFLAGS)  -o introduction introduction.o


clean:
        rm *.o prog1
