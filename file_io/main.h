#ifndef main_h
#define main_h
#include <stddef.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);

#endif
