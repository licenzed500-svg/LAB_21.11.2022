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

void sort_arr(int* arr)
{
    std::sort(std::begin(arr), std::end(arr));
}

int main()
{
    srand(time(NULL));
    const unsigned short arrsize = get_arr_size();
    int arr[arrsize];
    get_elements(arr, arrsize);
    sort_arr(arr);
    change_element(arr, arrsize);
    array_out(arr, arrsize);
    return 0;

}