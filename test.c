#include <cs50.h>
#include <stdio.h>

int main(void)
{
   int x = getint("what's x ? ");
   int y = getint("whats y ?");
   if (x < y)
   {
    printf("x is less then y\n");
   }
}