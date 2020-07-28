#include <iostream>
#include "SortFunctions/sortfunctions.h"

int main(int, char **)
{
    int data[] = {3, 5, 67, 234, 1, 3, 57, 8, 3, 33, 56};
    sort_bubble(data, sizeof(data) / sizeof(int));
    std::cout << "Hello, world!\n";
}
