#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <stdio.h>

char* likes(size_t n, const char *const names[n]) {
  
  char *text;
    
  if (n == 0)
    sprintf(text = malloc(snprintf(NULL, 0, "%s", "no one likes this") + 1), "%s", "no one likes this");
  
  if (n == 1)
    sprintf(text = malloc(snprintf(NULL, 0, "%s likes this", names[0]) + 1), "%s likes this", names[0]);
  
  if (n == 2)
    sprintf(text = malloc(snprintf(NULL, 0, "%s and %s like this", names[0], names[1]) + 1), "%s and %s like this", names[0], names[1]);
  
  if (n == 3)
    sprintf(text = malloc(snprintf(NULL, 0, "%s, %s and %s like this", names[0], names[1], names[2]) + 1), "%s, %s and %s like this", names[0], names[1], names[2]);
  
  if (n >= 4)
    sprintf(text = malloc(snprintf(NULL, 0, "%s, %s and %zu others like this", names[0], names[1], n - 2) + 1), "%s, %s and %zu others like this", names[0], names[1], n - 2);
  
  return text;
}

int main(void)
{
	const char *const names[0] = {};
	const char *const names1[1] = {"Peter"};
	const char *const names2[2] = {"Jacob", "Alex"};
	const char *const names3[3] = {"Max","John","Mark"};
	const char *const names4[4] = {"Alex", "Jacob", "Mark", "Max"};
	const char *const names5[3] = {"MrZizoScream", "CrazyMerlyn", "laoris"};

	printf("%s\n", likes(0, names));  //"no one likes this"
	printf("%s\n", likes(1, names1)); //"Peter likes this"
	printf("%s\n", likes(2, names2)); //"Jacob and Alex like this"
	printf("%s\n", likes(3, names3)); //"Max, John and Mark like this"
	printf("%s\n", likes(4, names4)); //"Alex, Jacob and 2 others like this"
	printf("%s\n", likes(3, names5));
	return 0;
}
