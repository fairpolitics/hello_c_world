#include <stdio.h>
#include <time.h>

void main()
{
  printf("Hello World\n");
  time_t t;
  struct tm* localtime(const time_t *timer);
  time(&t);
  jstTm = localtime(&t);
  printf("%04d/%02d/%02d %02d:%02d:%02d \n",
    jstTm->tm_year + 1900,
    jstTm->tm_mon + 1,
    jstTm->tm_mday,
    jstTm->tm_hour,
    jstTm->tm_min,
    jstTm->tm_sec);
}