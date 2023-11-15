#include <iostream>
#include "Array.hpp"

#define MAX_VAL 10
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    std::cout << "Size of array is " << numbers.size() << std::endl;
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        // std::cout << value << std::endl;
        numbers[i] = value;
        mirror[i] = value;
    }
	Array<int> num2(numbers);
    // //SCOPE
    // {
    //     Array<int> tmp = numbers;
    //     Array<int> test(tmp);
    // }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (num2[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
        if (num2[i] == numbers[i])
        {
            std::cout << "index " << i << " have the same value!!" << std::endl;
        }
    }
    // try
    // {
    //     numbers[-2] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    // try
    // {
    //     numbers[MAX_VAL] = 0;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout << "Checking " << numbers[i] << " and " << mirror[i] << std::endl;
        if (num2[i] != numbers[i])
        {
            std::cout << "They didn't save the same value!!" << std::endl; //Succesfully redefine number
            // return 1;
        }
    }
    delete [] mirror;//
    return 0;
}