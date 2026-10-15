#ifndef ARRAYLIB_H
#define ARRAYLIB_H
#include <cstddef>


int arr_sum(int* massive,std::size_t n);
int arr_min(int* massive,std::size_t n);
int arr_max(int* massive,std::size_t n);
double arr_average(int* massive,std::size_t n);
int arr_count_positive(int* massive,std::size_t n);
int arr_count_negative(int*massive,std::size_t n);
int arr_count_zero(int*massive,std::size_t n);
int arr_product(int* massive,std::size_t n);
double arr_median(int* massive,std::size_t n);

#endif