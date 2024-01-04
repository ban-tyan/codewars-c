#include <stddef.h>

void ft_swap(int *a, int *b)
{
  int tmp;
    
  tmp = *a;
  *a = *b;
  *b = tmp;
}

void move_zeros(size_t len, int arr[len])
{
    for (size_t i = 0, j = i + 1; j < len; i++, j = i + 1)
      if (arr[i] == 0)
      {
        for (;j < len - 1 && arr[j] == 0; j++);
        ft_swap(&arr[i], &arr[j]);
      }
}
