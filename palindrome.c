#include <stdio.h>
#include <string.h>
#include "palindrome.h"

/*
 * Determines whether the word is a palindrome.
 *
 * For now, the code is "dummied up".
 */
int palindrome(char* word) {
  // for now, return true iff the word is "AA"
  if (strcmp(word, "AA") == 0) {
      return IS_PALINDROME;
  }
  else {
    return NOT_PALINDROME;
  }
}
