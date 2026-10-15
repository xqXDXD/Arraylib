

#include "arraylib.h" 
#include <cassert> 
#include <cmath> 
#include <iostream> 
static bool close(double a, double b, double eps = 1e-9) { 
return std::fabs(a - b) < eps; 
} 
int main() { 
// Массив с положительными, отрицательными и нулём 
int a[] = {-5, 0, 3, 3, 8, -2}; 
const std::size_t n = sizeof(a) / sizeof(a[0]); 
assert(arr_sum(a, n) == 7); 
assert(arr_max(a, n) == 8); 
assert(arr_min(a, n) == -5); 
int b[] = {7, 1, 9, 3}; 
assert(close(arr_median(b, 4), 5.0)); 
int c[] = {5, 1, 3}; 
assert(close(arr_median(c, 3), 3.0)); 
assert(close(arr_average(b,5),5));
return 0;

}