//Вариант 10
#include "arraylib.h"
#include<iostream>

int main(){
    
    int distanced[] ={ 
12, 35, 48, 7, 64, 
28, 51, 19, 42, 33 
}; 
int dist= arr_sum(distanced,(sizeof(distanced)/sizeof(distanced[0])));
int mind=arr_min(distanced,(sizeof(distanced)/sizeof(distanced[0])));
int maxd=arr_max(distanced,(sizeof(distanced)/sizeof(distanced[0])));
double averd=arr_average(distanced,(sizeof(distanced)/sizeof(distanced[0])));
double mediand=arr_median(distanced,(sizeof(distanced)/sizeof(distanced[0])));
    std::cout<<"Общее расстояние: "<<dist<<'\n';
    std::cout<<"Минимальное расстояние: "<<mind<<'\n';
    std::cout<<"Максимальное расстояние: "<<maxd<<'\n';
    std::cout<<"Среднее расстояние: "<<averd<<'\n';
    std::cout<<"Медина расстояний: "<<mediand<<'\n';
    return 0;
}