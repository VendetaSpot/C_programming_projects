#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{    
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters 25 cents to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes 10 cents to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels 5 cents to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies 1 cent to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
  int cents;
  do
  {
    printf("Enter cents: ");
    scanf("%i", &cents);
  } while (cents < 0);

  return cents;
}

int calculate_quarters(int cents) // 25
{
  if (cents < 25) return 0;
  if (cents == 25) return 1;
  if (cents >= 26 && cents <= 49 ) return 1;
  if (cents >= 50 && cents <= 74 ) return 2;
  if (cents >= 75 && cents <= 99 ) return 3;
  return 0;
}

int calculate_dimes(int cents) // 10
{
  int counter = 0;
  if (cents < 10)
  {
    return 0;
  } else if (cents == 10)
  {
    return 1;
  } 
  else
  {
    while (cents > 10)
    {
      cents -= 10;
      counter++;
    }
  }
  return counter;
}

int calculate_nickels(int cents) // 5
{
  int counter = 0;
  if (cents < 5) return 0;
  if (cents == 5) return 1;
  while (cents > 5)
  {
    cents -= 5;
    counter++;
  }
  return counter;
}

int calculate_pennies(int cents) // 1
{
  int counter = 0;
  while (cents > 0)
  {
    cents -= 1;
    counter++;
  }
  return counter;
}
