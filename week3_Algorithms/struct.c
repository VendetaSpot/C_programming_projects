#include <stdio.h>
#include <string.h>

typedef struct
{
  char *name;
  char *number;
}
person;

int main(void)
{
  char input[8] = {0};
  person people[2];

  people[0].name = "Holly";
  people[0].number = "0546553296";

  people[1].name = "David";
  people[1].number = "0523988545";

  printf("Name: ");
  scanf("%s", input);

  for (int i = 0; i < 5; i++)
  {
    if(strcmp(people[i].name, input) == 0)
    {
      printf("Found: %s\n", people[i].number);
      return 0;
    }
  }
  printf("Not found");
  return 1;  
}