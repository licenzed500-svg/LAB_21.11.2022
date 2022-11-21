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

void change_element(int* arr_one, int* arr_two, short arrsize)
{
    for(short i = 0; i<arrsize; i++)
    {
       int element_one = arr_one[i];
       int element_two = arr_two[i];
       arr_one[i] = element_two;
       arr_two[i] = element_one;
    }
}

void array_out(int* arr_one, int* arr_two, short arrsize)
{
    for(short i = 0; i<arrsize; i++)
    {
       std::cout << arr_one[i] << "\t" << arr_two[i] << "\n";
    }
}




int main()
{
    srand(time(NULL));
    const unsigned short arrsize = get_arr_size();
    int arr_one[arrsize];
    int arr_two[arrsize];
    get_elements(arr_one, arrsize);
    get_elements(arr_two, arrsize);
    change_element(arr_one, arr_two, arrsize);
    array_out(arr_one,arr_two,arrsize);

}
