#ifndef XFSDEF_H
#define XFSDEF_H

#include <stdbool.h>
#include <stddef.h>

#define container_of(ptr, type, member)                                        \
  ({                                                                           \
    const typeof(((type *)0)->member) *__mptr = (ptr);                         \
    (type *)((char *)__mptr - offsetof(type, member));                         \
  })

#endif
