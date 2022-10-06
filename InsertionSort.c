#include <stdio.h>

int main()
{
  int n, arr[100], i, j, t, flag = 0;

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  for (i = 1 ; i <= n - 1; i++) {
    t = arr[i];

    for (j = i - 1 ; j >= 0 && arr[j] >= t; j--) {
        arr[j + 1] = arr[j];
  }
  arr[j + 1] = t;
  }

  printf("Sorted list in ascending order:\n");

  for (i = 0; i <= n - 1; i++) {
    printf("%d\n", arr[i]);
  }

  return 0;
}