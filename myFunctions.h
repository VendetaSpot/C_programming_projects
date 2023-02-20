#include <stdio.h>

// Get integer input from user
int get_int(char *prompt) {
  int n;
  printf("%s", prompt); // Print the custom prompt message
  fflush(stdout);  // Ensure the prompt is displayed before waiting for input
  scanf("%d", &n); // & returns a pointer to the memory location where the variable is stored.
  return n;
}

