#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "helpers.h"

// Function to open a file safely
FILE *open_file(const char *filename, const char *mode)
{
    FILE *fp = fopen(filename, mode);
    if (!fp)
    {
        printf("Error: Could not open %s\n", filename);
        exit(1);
    }
    return fp;
}

// Function to generate output filename for employee
void generate_output_filename(char *filename, const char *id)
{
    sprintf(filename, "payslip_%s.txt", id);
}

// Function to process one employee and generate payslip
void process_employee(const char *id, const char *name, const char *dept, const char *salary)
{
    char filename[100];
    char template_line[1024], output_line[1024];

    // Create output file name like payslip_101.txt
    generate_output_filename(filename, id);

    // Open output file
    FILE *outFile = open_file(filename, "w");

    // Open template file
    FILE *templateFile = open_file("template.txt", "r");

    // Read template line by line
    while (fgets(template_line, sizeof(template_line), templateFile))
    {
        trim_newline(template_line); // remove extra newline
        replace_placeholder(template_line, output_line, id, name, dept, salary);
        fprintf(outFile, "%s\n", output_line);
    }

    fclose(templateFile);
    fclose(outFile);
}

// Function to read employees.txt and process each record
void process_all_employees()
{
    FILE *empFile = open_file("employees.txt", "r");
    char id[20], name[50], dept[50], salary[20];

    while (fscanf(empFile, "%s %s %s %s", id, name, dept, salary) != EOF)
    {
        process_employee(id, name, dept, salary);
    }

    fclose(empFile);
}

int main()
{
    process_all_employees();
    printf("Payslips generated successfully!\n");
    return 0;
}
