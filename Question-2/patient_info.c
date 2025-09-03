#include <stdio.h>
#include <string.h>

#define MAX_PATIENTS 100

// Define the Patient structure


// Global array of patients and patient count
struct Patient patients[MAX_PATIENTS];
int patientCount = 0;

// Function to add a new patient
void addPatient() {
    
}

// Function to display all patients
void displayPatients() {
    
}

// Function to search for a patient by name
void searchPatientByName() {
    
}

// Function to update disease for a patient by ID
void updateDisease() {
    
}

// Function to discharge (remove) a patient by ID
void dischargePatient() {
    
}

int main() {
    int choice;
    printf("\nPatient Management System\n");
    printf("1. Add a Patient\n");
    printf("2. Display All Patients\n");
    printf("3. Search Patient by Name\n");
    printf("4. Update Disease Information\n");
    printf("5. Discharge a Patient\n");
    printf("6. Exit\n");
    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addPatient(); break;
            case 2: displayPatients(); break;
            case 3: searchPatientByName(); break;
            case 4: updateDisease(); break;
            case 5: dischargePatient(); break;
            case 6: printf("Exiting the system.\n"); return 0;
            default: printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
