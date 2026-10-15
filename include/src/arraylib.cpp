#include "arraylib.h"
#include <cstddef>
#include <algorithm>
int arr_sum(int* massive,std::size_t n){
    int s=0;
for(std::size_t i =0;i<n;++i){
    s+=massive[i];
}

return s;
}

int arr_min(int* massive,std::size_t n){
    int min=massive[0];
    for(std::size_t i=1;i<n;++i){
        if(massive[i]<min)min=massive[i];
    }
    return min;
}

int arr_max(int* massive,std::size_t n){
    int max=massive[0];
    for(std::size_t i=1;i<n;++i){
        if (massive[i]>max)max=massive[i];
    }
return max;    
}

double arr_average(int* massive,std::size_t n){
    int summ=0;
    for(std::size_t i=0;i<n;++i){
        summ+=massive[i];
    }
    return summ/static_cast<double>(n);
}

double arr_median(int* massive,std::size_t n){
int massive2[n];   
    for(std::size_t i=0;i<n;++i){
massive2[i]=massive[i];
    }
   std::sort(massive2,massive2+n);
 
   if (n%2==1){
    return (double)massive2[n/2];
   }else{
    return (double)(massive2[n/2]+massive2[(n/2)-1])/2;

   }

}