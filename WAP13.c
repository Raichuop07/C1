// This Program Is Developed By Satyam
#include <stdio.h>
int main()
{
  int second, seconds, minutes, hours;
  printf("enter seconds\n");
  scanf("%d", &seconds);
  hours = seconds / 3600;
  minutes = (seconds % 3600) / 60;
  second = ((seconds % 3600) % 60);
  printf("hours:%d\n", hours);
  printf("minutes:%d\n", minutes);
  printf("seconds:%d", second);
  return 0;
}

