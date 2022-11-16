#include "sum.h"

#include <stdio.h>
#include <assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);

/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total)
{
  /* pre-condition */
  assert(n > 0);

  /* post-condition */
  if(n > 1) {
    return sumtail(n - 1, total + n);
  } else {
    return ++total;
  }
}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  int r = 0;
  while(n > 0) {
    r += n;
    n--;
  }
  return r;
}

