#ifndef _MAIN_H_
#define _MAIN_H_

/* All Standard Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>

/* Mandatory Tasks Prototypes */
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* Advanced Tasks Prototypes */
int _strncmp(const char *s1, const char *s2, size_t n);
void _close(int fd);
void _read(int fd, char *buf, size_t count);
void elf_magic(const unsigned char *buffer);
size_t elf_class(const unsigned char *buffer);
int elf_data(const unsigned char *buffer);
void elf_version(const unsigned char *buffer);
void elf_osabi(const unsigned char *buffer);
void elf_abivers(const unsigned char *buffer);
void elf_type(const unsigned char *buffer, int big_endian);
void elf_entry(const unsigned char *buffer, size_t bit_mode, int big_endian);


#endif
