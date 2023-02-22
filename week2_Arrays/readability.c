#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

/* this program calculates the approximate reading grade level for a text.
counting number of letters, words and sentences, the program uses the readability test of Coleman-Liau index formula.

--->>> pseudocode:
prompt for text.
for length of text:
  if index is space || \n 
    add to words_count
  if index is dot || ! || ?
    add to sentence_count
  if index is alphanumeric
    add to letter_count
  else continue to next iteration

calculate the average of total letters per total words per 100 words
calculate the average of total sentences per total words per 100 words
calculate the formula (index) based on the above calculation.

if index <= 1
  print Before Grade 1
if index > 1 && index < 16
  print Grade index
if index >= 16
  print Grade 16+  
*/

int main()
{
  char text[400] = {0};
  int letters_count = 0, words_count = 0, sentences_count = 0;
  float L, S;
  int index, temp;

  printf("Text: ");
  fgets(text, 400, stdin);

  for (int i = 0; i < strlen(text); i++)
  {
    if (text[i] == ' ' || text[i] == '\n')
    {
      words_count++;
    }
    else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
    {
      sentences_count++;
    }
    else if (isalnum(text[i])) // if char is alphanumeric
    {
      letters_count++;
    }
    else
    {
      continue;
    }
  }

  L = (float) letters_count / words_count * 100; // compute average for L
  S = (float) sentences_count / words_count * 100; // compute average for S

  index = (float) round((0.0588 * L) - (0.296 * S) - 15.8);

  if (index <= 1) printf("Before Grade 1\n");
  if (index > 1 && index < 16) printf("Grade %i\n", index);
  if (index >= 16) printf("Grade 16+\n");
}