#include <stdio.h>

int main(void)
{
      // Exercise 11
      // Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes.

      int totalMoney;

      int hundredBanknote;
      int fiftyBanknote;
      int twentyBanknote;
      int tenBanknote;
      int fiveBanknote;
      int twoBanknote;
      int oneBanknote;

      printf("Total Money --> ");
      scanf("%d", &totalMoney);

      printf("\n");

      hundredBanknote = totalMoney / 100;
      totalMoney = totalMoney - (hundredBanknote * 100);

      fiftyBanknote = totalMoney / 50;
      totalMoney = totalMoney - (fiftyBanknote * 50);

      twentyBanknote = totalMoney / 20;
      totalMoney = totalMoney - (twentyBanknote * 20);

      tenBanknote = totalMoney / 10;
      totalMoney = totalMoney - (tenBanknote * 10);

      fiveBanknote = totalMoney / 5;
      totalMoney = totalMoney - (fiveBanknote * 5);

      twoBanknote = totalMoney / 2;
      totalMoney = totalMoney - (twoBanknote * 2);

      oneBanknote = totalMoney / 1;
      totalMoney = totalMoney - (oneBanknote * 1);

      printf("Hundered Banknote --> %d\nFifty Banknote --> %d\nTwenty Banknote --> %d\nTen Banknote --> %d\nFive Banknote --> %d\nTwo Banknote --> %d\nOne Banknote --> %d\n", hundredBanknote, fiftyBanknote, twentyBanknote, tenBanknote, fiveBanknote, twoBanknote, oneBanknote);
}