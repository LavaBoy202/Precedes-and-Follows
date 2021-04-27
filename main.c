#include <stdio.h>
#include <string.h>

//int main(void) outputs the string that precedes all the string inputs and
//and the string that follows all the string inputs. Additionally, if there are
//no strings inputted that the message NO STRINGS will appear.
// time: O(n), where n is the number of string inputs

int main (void) {
  char lexiorder_first[100] = {0};
  char lexiorder_last[100] = {0};
  char word[100] = {0};
  int count = 0;
  int comparison;
  int comparison2;

  while (scanf("%s", word) == 1) {
    count++;
    comparison = strcmp (lexiorder_first, word);
    comparison2 = strcmp (lexiorder_last, word);
    if ((comparison >= 1) || count == 1) {
      strcpy (lexiorder_first, word);
    }
    if ((comparison2 <= -1) || count == 1) {
      strcpy (lexiorder_last, word);
    }
  }
  if (count == 0) {
    printf ("NO STRINGS\n");
  }
  else {
  printf("%s\n", lexiorder_first);
  printf("%s\n", lexiorder_last);
  }
}
