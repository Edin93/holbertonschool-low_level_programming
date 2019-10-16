# Memory allocation
* The malloc() function allocates size bytes and returns a pointer to the allocated memory.  The memory is not initialized.  If size is  0,  then malloc()returns either NULL, or a unique pointer value that can later be successfully passed to free().
* The free function frees the memory space which have been allocated by a previous call to malloc (or calloc, or realloc).
# Synopsis
#include <stdlib.h>
void *malloc(size_t size);
void free(void *ptr);