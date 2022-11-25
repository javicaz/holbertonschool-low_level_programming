#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/*Task 0*/
ssize_t read_textfile(const char *filename, size_t letters);
/*Task 1*/
int create_file(const char *filename, char *text_content);
/*Task 2*/
int append_text_to_file(const char *filename, char *text_content);
/*Task 3*/
int main(int argc, char *argv[]);
#endif
