#include <stdio.h>
#include <stdlib.h>
#include "helpers.h"

int main()
{
    FILE *empFile = fopen("employees.txt", "r");
    FILE *templateFile;
    char id[20], name[50], dept[50], salary[20];
    char template_line[1024], output_line[1024];

    if (!empFile)
    {
        printf("Error: employees.txt not found!\n");
        return 1;
    }

    while (fscanf(empFile, "%s %s %s %s", id, name, dept, salary) != EOF)
    {
        // Create output file for employee
        char filename[100];
        sprintf(filename, "payslip_%s.txt", id);
        FILE *outFile = fopen(filename, "w");

        templateFile = fopen("template.txt", "r");
        if (!templateFile)
        {
            printf("Error: template.txt not found!\n");
            return 1;
        }

        while (fgets(template_line, sizeof(template_line), templateFile))
        {
            trim_newline(template_line);
            replace_placeholder(template_line, output_line, id, name, dept, salary);
            fprintf(outFile, "%s\n", output_line);
        }

        fclose(templateFile);
        fclose(outFile);
    }

    fclose(empFile);
    return 0;
}
