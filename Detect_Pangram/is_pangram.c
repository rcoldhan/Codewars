#include <stdio.h>
#include <stdbool.h>

bool is_pangram(const char *str_in) {
  
  bool i_in_str;
  char i;
  unsigned int j;
  
  for (i = 65; i <= 90; i++) {
    i_in_str = false;
    for (j = 0; str_in[j]; j++) {
      if (str_in[j] == i || str_in[j] == i + 32) {
        i_in_str = true;
        break;
      }
    }
    if (i_in_str == false)
      return false;
  }
  return true;
}

int main()
{
	char *str1 = "The quick, brown fox jumps over the lazy dog!";
    char *str2 = "The quick, brown fox jumped over the lazy dog!";

	printf("%d\n", is_pangram(str1));
	printf("%d\n", is_pangram(str2));
	return 0;
}

