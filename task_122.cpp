#include <iostream>
#include <time.h>
#include <algorithm>


int get_arr_size()
{
    unsigned short arrsize = 0;
    std::cout << "enter array size:";
    std::cin >> arrsize;
    system("cls");
    return arrsize;
}

void get_elements(int* arr, short arrsize)
{
    short min = 0;
    short max = 200;
    for(short i = 0; i<arrsize; i++)
    {
        arr[i] = min + rand() % (max-min);
    }
}

void change_element(int* arr, short arrsize)
{
    for(short i = 0; i<arrsize; i++)
    {
        if(arr[i]>100)
        {
            arr[i] = 10;
        }
    }
}

void array_out(int* arr, short arrsize)
{
    for(short i = 0; i<arrsize; i++)
    {
       std::cout << arr[i] << "\n";
    }
}

void sort_arr(int* arr, short arrsize)
{
    for(short i = 0; i<arrsize; i++)
    {
        
       if(arr[i]<arr[i+1])
       {
           std::swap(arr[i] , arr[i+1]);
       }
    }
}

short found_max(int* arr, short arrsize)
{
    short max = arr[0];
    for(short i = 0; i<arrsize; i++)
    {
       if(arr[i]<max)
       {
           max = i;
       }
    }
    return max;
}

void out_max(short* max)
{
    std::cout << "\nmax is element #:" << *max << "\n";
}

int main()
{
    srand(time(NULL));
    const unsigned short arrsize = get_arr_size();
    int arr[arrsize];
    get_elements(arr, arrsize);
    sort_arr(arr, arrsize);
    change_element(arr, arrsize);
    array_out(arr, arrsize);
    short max = found_max(arr,arrsize);
    out_max(&max);
    return 0;

}
