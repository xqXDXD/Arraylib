//Массив из варианта 10
#include "arraylib.h"
#include<iostream>

int main(){
    
    int data[] ={ 
12, 35, 48, 7, 64, 
28, 51, 19, 42, 33 
};
std::size_t n= sizeof(data)/sizeof(data[0]);
 
std::cout << "Сумма: " << arr_sum(data, n) << "\n";
    std::cout << "Минимальное число: " << arr_min(data, n) << "\n";
    std::cout << "Максимальное число: " << arr_max(data, n) << "\n";
    std::cout << "Среднее число: " << arr_average(data, n) << "\n";
    std::cout << "Количество положительных чисел:  " << arr_count_positive(data, n) << "\n";
    std::cout << "Количество отрицательных чисел:  " << arr_count_negative(data, n) << "\n";
    std::cout << "Количество нулей: " << arr_count_zero(data, n) << "\n";
    std::cout << "Произведение: " << arr_product(data, n) << "\n";
    std::cout << "Медиана: " << arr_median(data, n) << "\n";

    return 0;
}
    