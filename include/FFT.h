#define REAL 0
#define IMAG 1
#include <fftw3.h>
#include "../include/Record.h"
#include <math.h>
fftw_complex* input(SAMPLE* Record);
//fftw_complex* A_weighted(fftw_complex* signal);