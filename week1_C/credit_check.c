#include <stdio.h>
#include <stdbool.h>

/* 
visa - 4263982640269299 , 4917484589897107, 4222222222222
MASTERCARD -  5425233430109903 , 5105105105105100 , 5555555555554444
AMEX - 378282246310005, 371449635398431
*/

bool vendor_check(long long int card);
int card_formula(long long int input);
bool validate_card(int card_sum);

void main() 
{
  long long int card_input;
  printf("Number: ");
  scanf("%lli", &card_input);

  bool find_vendor = vendor_check(card_input);
  if (find_vendor)
  {
    int formula_result = card_formula(card_input);
    validate_card(formula_result);
  }
  else
  {
    printf("INVALID\n");
  }
}

bool vendor_check(long long int card)
{
  int length;
  long long int prefix = card;
  long long int card_length = card;
  
  do // calculates card length
  {
    length++;
    card_length /= 10;
  } while (card_length > 0);
  
  do // calculates vendor prefix
  {
    prefix = prefix / 10000;
  } while (prefix >= 10000);

  int prefix_thousand = prefix / 1000;
  int prefix_hundred = prefix / 100;
  int prefix_tens = prefix / 10;

  if (length == 13 && prefix == 4 || length == 16 && prefix_thousand == 4)
  {
    printf("VISA\n");
    return true;
  }
  else if (length == 16 && prefix_hundred == 51 || prefix_hundred == 52 || prefix_hundred == 53 || prefix_hundred == 54 || prefix_hundred == 55)
  {
    printf("MASTERCARD\n");
    return true;
  }
  else if (length == 15 && prefix_tens == 34 || prefix_tens == 37)
  {
    printf("AMEX\n");
    return true;
  }
  return false;
}

int card_formula(long long int input)
{  
  long long int card_cp = input; // card copy
  int second_set_num; // numbers of the first set
  int first_set_num; // numbers of the second set
  int sum = 0; // final result

  do // starting from the right
  {
    first_set_num = card_cp % 10; // get first number, than each time the next next number
    sum += first_set_num; // add first number to sum

    second_set_num = (card_cp / 10) % 10; // get second number, than each time the next next number
    second_set_num *= 2; // multiply that number by 2
    if (second_set_num > 9) second_set_num = (second_set_num % 10) + (second_set_num / 10); // save the sum of two digit number in place
    sum += second_set_num; // add second number to sum

    card_cp = card_cp / 100; // move to next next number after using first than second for each.
  } while (card_cp > 0);

  return sum;
}

bool validate_card(int card_sum)
{
  if (card_sum % 10 == 0) // final check if last digit is 0
  {
    printf("Pass");
    return true;
  }
  printf("Rejected: numbers not recognized!");
  return false;
}