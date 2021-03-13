#include <stdio.h>
#include <stdlib.h>

int* parse(char* program) {
  int i = 0, j = 0, n = 0, sum = 0;
  int *result;

  while (program[i]) {
    if (program[i] == 'o')
      n++;
    i++;
  }
  result = malloc(sizeof(int) * n + 1);
  i = 0;
  while (program[i]) {
    if (program[i] == 'i')
      sum++;
    if (program[i] == 'd')
      sum--;
    if (program[i] == 's')
      sum *= sum;
    if (program[i] == 'o') {
      result[j] = sum;
      j++;
    }
    i++;
  }
  return result;
}

int main(void)
{
    int *arr = {0};
    
//    char *program = "iiisdoso";  // 8 64
//   char *program = "ooo";       // 0 0 0
//   char *program = "ioioio";    // 1 2 3
//   char *program = "idoiido";   // 0 1
//   char *program = "isoisoiso"; // 1 4 25
   char *program = "codewars";  // 0
    
    int i = 0;
	int n = 0;
    while (program[i] != '\0') {
        if (program[i] == 'o') {
            n = n + 1;
        }
        i++;
    }
    
	arr = parse(program);
    
	for (int i = 0; i < n; i++) {
	   	printf("%d", arr[i]);
	}
	return 0;
}
