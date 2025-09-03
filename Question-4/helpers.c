#include <stdio.h>
#include <string.h>
#include "helpers.h"

void replace_placeholder(const char *template_line, char *output_line,
                         const char *id, const char *name,
                         const char *dept, const char *salary)
{
    strcpy(output_line, template_line);

    // Replace placeholders
    char buffer[1024];
    while (strstr(output_line, "{{id}}"))
    {
        snprintf(buffer, sizeof(buffer), "%.*s%s%s",
                 (int)(strstr(output_line, "{{id}}") - output_line),
                 output_line, id,
                 strstr(output_line, "{{id}}") + 6);
        strcpy(output_line, buffer);
    }
    while (strstr(output_line, "{{name}}"))
    {
        snprintf(buffer, sizeof(buffer), "%.*s%s%s",
                 (int)(strstr(output_line, "{{name}}") - output_line),
                 output_line, name,
                 strstr(output_line, "{{name}}") + 8);
        strcpy(output_line, buffer);
    }
    while (strstr(output_line, "{{dept}}"))
    {
        snprintf(buffer, sizeof(buffer), "%.*s%s%s",
                 (int)(strstr(output_line, "{{dept}}") - output_line),
                 output_line, dept,
                 strstr(output_line, "{{dept}}") + 8);
        strcpy(output_line, buffer);
    }
    while (strstr(output_line, "{{salary}}"))
    {
        snprintf(buffer, sizeof(buffer), "%.*s%s%s",
                 (int)(strstr(output_line, "{{salary}}") - output_line),
                 output_line, salary,
                 strstr(output_line, "{{salary}}") + 10);
        strcpy(output_line, buffer);
    }
}

void trim_newline(char *str)
{
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }
}
