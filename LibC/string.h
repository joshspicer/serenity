#pragma once

#include <sys/cdefs.h>
#include <sys/types.h>

__BEGIN_DECLS

size_t strlen(const char*);
int strcmp(const char*, const char*);
int strncmp(const char*, const char*, size_t);
int memcmp(const void*, const void*, size_t);
void* memcpy(void*, const void*, size_t);
void* memmove(void*, const void*, size_t);
void bzero(void*, size_t);
void bcopy(const void*, void*, size_t);
void* memset(void*, int, size_t);
char* strcpy(char* dest, const char* src);
char* strncpy(char* dest, const char* src, size_t);
char* strchr(const char*, int c);
char* strstr(const char* haystack, const char* needle);
char* strrchr(const char*, int c);
char* strcat(char *dest, const char *src);
char* strncat(char *dest, const char *src, size_t);
size_t strspn(const char*, const char* accept);
size_t strcspn(const char*, const char* reject);
char* strerror(int errnum);
char* strsignal(int signum);

__END_DECLS

