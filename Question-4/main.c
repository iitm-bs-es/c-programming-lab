#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "helpers.h"

// Function to process one booking and generate ticket
void process_booking(int id, char name[], char movie[], char seat[], int price)
{
    char filename[100];
    char template_line[1024];

    FILE *templateFile;
    FILE *outputFile;

    // TODO:
    // Use generate_output_filename() to create:
    // ticket_<id>.txt

    // TODO:
    // Open output file in write mode using open_file()

    // TODO:
    // Open template.txt in read mode using open_file()

    // TODO:
    // Read template line by line using fgets()
    // For each line call replace_placeholders()
    while (fgets(template_line, sizeof(template_line), templateFile))
    {

    }

    // TODO:
    // Close both files
}

// Function to read bookings.txt and process each booking
void process_all_bookings()
{
    int id, price;
    char name[50], movie[50], seat[20];

    FILE *fp;

    // TODO:
    // Open bookings.txt using open_file()

    // TODO:
    // Read one booking at a time using fscanf()
    // Format: id name movie seat price
    // Call process_booking()

    // TODO:
    // Close file
}

int main()
{
    process_all_bookings();
    printf("Tickets generated successfully.");
    return 0;
}