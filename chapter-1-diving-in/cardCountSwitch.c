#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  char card_name[3];
  puts("Enter the card_name: ");
  scanf("%2s", card_name);
  int val = 0;

  switch (card_name[0])
  {
  case /* constant-expression */:
  /* code */
  case:
    'K' : case : 'Q' : case : 'J' : val = 10;
    break;
  case:
    'A' val = 11;
    break;

  default:
    val = atoi(card_name[0]);
    break;
  }
  return 0;
}
