#include "types.h"
#include "stat.h"
#include "user.h"

int main(void) {
  printf(1, "sys_getreadcount() has been called %d times.\n", getreadcount());
  exit();
}

