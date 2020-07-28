
#include <iostream>
#include "sortfunctions.h"

void sort_bubble(int arr[], int len)
{
  for (int i = 0; i < len - 1; i++)
  {
    bool isSort = true;
    for (int j = 0; j < len - 1 - i; j++)
    {
      int temp = 0;
      if (arr[j] > arr[j + 1])
      {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        isSort = false;
      }
    }
    if (isSort)
    {
      break;
    }
  }
}
