#ifndef MY_TIMING_H // Include guard to prevent multiple inclusion
#define MY_TIMING_H

#include <time.h>    // Required for timespec structure
#include <sys/time.h> // Required for gettimeofday function

// Function prototypes (declarations)
void delay(unsigned int howLong);
unsigned long millis();

#endif // End of include guard

