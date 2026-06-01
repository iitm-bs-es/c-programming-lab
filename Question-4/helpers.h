#ifndef HELPERS_H
#define HELPERS_H

#include <stdio.h>

FILE* open_file(char filename[], char mode[]);
void generate_output_filename(int id, char filename[]);
void replace_placeholders(char line[], FILE *out, int id, char name[], char movie[], char seat[], int price);

#endif