#include <stdio.h>
int main()
{
  printf("1 << 0 = %x\n", 1 << 0);
  printf("1 << 2 = %x\n", 1 << 2);
  printf("0 << 4 = %x\n", 0 << 4);
  printf("1 << 31 = %x\n", 1 << 31);
  printf("1 << 32 = %x\n", 1 << 32);
  printf("4 << -1 = %x\n", 4 << -1);
  printf("-1 << 1 = %x\n", -1 << 1);
  printf("-1 << 0 = %x\n", -1 << 0);

  printf("4 >> 1 = %x\n", 4 >> 1);
  printf("4 >> 5 = %x\n", 4 >> 5);
  printf("0x80000000 >> 31 = %x\n", (int)0x80000000 >> 31);
  printf("-1 >> 2 = %x\n", -1 >> 2);
}
