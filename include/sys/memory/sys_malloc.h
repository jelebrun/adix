#ifndef _SYS_MALLOC_H
#define _SYS_MALLOC_H

#include <defs.h>

/**
 * System call malloc
 * @param size number of bytes
 * @return     virtual address, NULL on error
 */
void* sys_malloc(uint64_t size);

/**
 * System call free
 * @param ptr pointer to memory that should be freed
 */
void sys_free(void *ptr);

#define MALLOC_START_ADDR 0x100000UL

#endif

