#ifndef TOOLS_H
#define TOOLS_H

#include <iostream>
#include <chrono>
#include <vector>


namespace Sort {
    
namespace Tools {

    //std::vector<int> get_random_int_vector(int n, int max_values);

    template<typename T>
    bool is_sorted(std::vector<T> &data, int data_size)
    {
        for(int i = 0; i < data_size-1; i++)
        {
            if(data[i+1] < data[i])
            {
                return false;
            }
        }
        return true;
    }

} 

}

#endif /* TOOLS_H */
