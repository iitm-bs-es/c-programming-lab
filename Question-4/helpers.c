#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "helpers.h"

FILE* open_file(char filename[], char mode[]) {
    FILE *fp = fopen(filename, mode);
    if(fp == NULL) {
        printf("Error opening %s\n", filename);
        exit(1);
    }
    return fp;
}

void generate_output_filename(int id, char filename[]) {
    sprintf(filename, "ticket_%d.txt", id);
}

void replace_placeholders(char line[], FILE *out, int id, char name[], char movie[], char seat[], int price) {
    if(strstr(line, "{{id}}")) fprintf(out, "Booking ID : %d\n", id);
    else if(strstr(line, "{{name}}")) fprintf(out, "Name       : %s\n", name);
    else if(strstr(line, "{{movie}}")) fprintf(out, "Movie      : %s\n", movie);
    else if(strstr(line, "{{seat}}")) fprintf(out, "Seat       : %s\n", seat);
    else if(strstr(line, "{{price}}")) fprintf(out, "Price      : ₹%d\n", price);
    else fprintf(out, "%s", line);
}