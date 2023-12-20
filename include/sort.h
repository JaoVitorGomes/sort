#ifndef SORT_H
#define SORT_H

#include <vector>

namespace Sort 
{

    template<typename T>
    void bubble_sort(std::vector<T> &v, T size)
    {
        T aux; 
        for(int i = size-1; i >= 0; i--){
            for(int j = 0; j <= i ; j++){
                if(v[j+1] < v[j]){
                    aux = v[j];
                    v[j] = v[j+1];
                    v[j+1] = aux;
                }
            }
        }   
    }

    template<typename T >
    void select_sort(std::vector<T> &v, int size)
    {
        T aux;
        int min;
        for(int i =0; i< size-1;i++)
        {
            min = i;
            for(int j = i+1;j < size; j++ )
            {
                if(v[j] < v[min]){
                    min = j;
                }
            }
            aux = v[i];
            v[i] = v[min];
            v[min] = aux;
        }
    }

    template<typename T >
    void insertion_sort(std::vector<T> &v, int size)
    {
        T pivo;
        int j;
        for(int i = 1;i < size;i++)
        {
            pivo = v[i];
            j = i-1;
            while((j >= 0) && (v[j] > pivo))
            {
                v[j+1] = v[j];
                j = j-1;
            }
            v[j+1] = pivo;
        }
    }

    template<typename T >
    void merge_sort_merge(std::vector<T> &v, int p,int q, int r)
    {
        int i = p;
        int j = q;
        int k = 0;
        std::vector<T> aux = v;
        while((i < q) && (j < r))
        {
            if(v[i] < v[j])
            {
                aux[k] = v[i];
                i++;
            }else{
                aux[k] = v[j];
                j++;
            }
            k++;
        }
        while(i < q)
        {
            aux[k] = v[i];
            i++;
            k++;
        }
        while(j < r){
            aux[k] = v[j];
            j++;
            k++;
        }
        for(i = p; i < r; i++){
            v[i] = aux[i - p];
        
        }
    }

    template<typename T >
    void merge_sort_algorithm(std::vector<T> &v, int p, int r)
    {
        if(p < (r-1))
        {
            int q = (p+r)/2;
            merge_sort_algorithm(v,p,q);
            merge_sort_algorithm(v,q,r);
            merge_sort_merge(v,p,q,r);
        }
    }

    template<typename T >
    void merge_sort(std::vector<T> &v, int size)
    {
        int p = 0;
        int r = size;
        merge_sort_algorithm(v,p,r);

    }

}
#endif /* SORT_H */