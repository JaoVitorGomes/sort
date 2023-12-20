#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

#include "sort.h"
#include "tools.h"

int main(int argc, char* argv[]){
    std::vector<int> array;
    array = {10,9,8,7,6,5,4,3,2,1};
    int array_size = 10;

    Sort::bubble_sort(array,array_size);

    if(!Sort::Tools::is_sorted(array, array_size))
    {
        cout << "Error: Ordenacao dos valores nao realizado corretamente" << endl;
        return -1;
    }

   cout << "Success: Ordenacao dos valores realizada com sucesso" << endl; 
    return 0;

}