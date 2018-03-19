#include <stdio.h>
#include "palindrome.h"

#define FAIL 1
#define PASS 0

/* Returns FAIL (value 1) if the test passes, or PASS (value 0) if the test
 * succeeds.
 * 
 * Parameters:
 * - str: the string to test
 * - expected: whether it is actually a palindrome
 */
int check(char* str, int expected) {

  // call the function--get what it reports
  int actual = palindrome(str);
  
  // if our function did not return the expected value, report an error
  if (expected != actual) {
    printf("FAILED: %s reported as %sa palindrome\n", str,
	   actual ? "" : "not ");
    return FAIL; // return error code
  }
  else {
    return PASS; // return non-error code
  }
}

int main() {
  
  // to count the failures
  int failures = 0;
  
  // run the test; increment failure-count if failure
  failures += check("AA", IS_PALINDROME);
  
  // report whether there were any failures
  if (failures > 0) {
    printf("%d tests FAILED\n", failures);
  }
  else {
    printf("All tests PASSED\n");
  }
  
  // returnn the number of failures as our exit status
  return failures;
}
