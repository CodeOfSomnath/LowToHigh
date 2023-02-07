#ifndef IO_H
#define IO_H
// header to be used
#include <stdio.h>
#include <stdlib.h>
//used data types
typedef char * string;
typedef FILE * File;

//Here some pre-defined separators
#define NONE  ""
#define NEW_LINE  "\n"
#define TAB  "\t"

// pre - defined modes
#define WRITE "w"
#define READ "r"
#define APPEND "a"
#define READ_WRITE "r+"
#define WRITE_READ "w+"
#define DEFAULT APPEND

//here the functions 
//this is only for printing one string
void print(string st, string sep){
  printf("%s%s", st, sep);
}

string input(string prompt){
  char inp[1000];
  print(prompt, NONE);
  scanf("%s", inp);
  return inp;
}

File open(string path, string mode){
   File fp;
   fp = fopen(path, mode);
   return fp;
}

void close(File file){
  fclose(file);
}

void write(File file, string text){
  fprintf(file, text);
}

#endif
