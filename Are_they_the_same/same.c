#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void arr_sort(int *x, size_t n) {
  for (size_t i = 0; i < n - 1; ++i) {
    for (size_t j = 0; j < n - i - 1; ++j) {if (x[j] > x[j + 1]) {int tmp = x[j]; x[j] = x[j + 1]; x[j + 1] = tmp;}}
  }
}

bool comp(int *a, int *b, size_t n) {
  arr_sort(a, n); arr_sort(b, n);
  
  for (size_t i = 0; i < n; i++)
    if (a[i] * a[i] != b[i])
      return false;
  return true;
}

int main(void)
{
	int a[8] = {121, 144, 19, 161, 19, 144, 19, 11};
	int b[8] = {121, 14641, 20736, 361, 25921, 361, 20736, 361}; //true

//	int a[8] = {121, 144, 19, 161, 19, 144, 19, 11};
//	int b[8] = {132, 14641, 20736, 361, 25921, 361, 20736, 361}; //false

//	int a[8] = {121, 144, 19, 161, 19, 144, 19, 11};
//	int b[8] = {121, 14641, 20736, 36100, 25921, 361, 20736, 361}; //false

	bool result = comp(a, b, 8);
	printf("%s", result ? "true" : "false");
	return 0;
}
