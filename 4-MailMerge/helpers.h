#ifndef HELPERS_H
#define HELPERS_H

// Function to replace placeholders in template
void replace_placeholder(const char *template_line, char *output_line,
                         const char *id, const char *name,
                         const char *dept, const char *salary);

// Function to trim newline from strings
void trim_newline(char *str);

#endif
