You are tasked with developing a small **patient management system** for a hospital. The hospital needs to store, manage, and update the records of its patients efficiently. To accomplish this, you need to create a system that stores and displays information about the patients admitted to the hospital.

Each patient has the following details:

- `Patient ID`: A unique identifier for each patient (integer).

- `Name`: The full name of the patient (string).

- `Age`: The age of the patient (integer).

- `Disease`: The disease or condition the patient is being treated for (string).

Your system should allow the following operations:

`Add New Patients`:
You should be able to add new patients to the hospital system by providing details such as the Patient ID, Name, Age, and Disease.

`Display All Patients`:
You should be able to display a list of all currently admitted patients, showing their ID, name, age, and disease.

`Search a Patient by Name`:
You should be able to search for a patient using their name and display their details (if found).

`Update Disease Information`:
The system should allow you to update the disease or condition for a specific patient by providing their Patient ID.

`Discharge a Patient`:
When a patient is discharged from the hospital, they should be removed from the list of current patients.

## Requirements

Define a structure `Patient` with the following fields:

-   patientID (integer)

-   name (string)

-   age (integer)

-   disease (string)

Implement the following functionalities:

-   Input and display patient details.

-   Implement functions to add, update, and remove patients.

-   Implement a function to search for a patient by name.

-   Ensure that patients can be uniquely identified by their ID for update and discharge operations.

**Input Format**

First line consists of an integer n denoting the number of patients to add initially.

Next n lines contains Patient ID, Name, Age, and Disease.

**Output Format**

Display appropriate outputs for each operation such as:

-   Successful addition confirmation

-   List of patients

-   Search results

-   Update confirmations

-   Discharge confirmations

**Sample Input**
```
1
101
John
35
Flu
5

```

**Sample Ouptut**
```
1. Add a Patient
2. Display All Patients
3. Search Patient by Name
4. Update Disease Information
5. Discharge a Patient
6. Exit

Enter your choice: 1
Enter Patient ID: 101
Enter Patient Name: John Doe
Enter Patient Age: 35
Enter Patient Disease: Flu
Patient added successfully.

Enter your choice: 6
Exiting the system.
```

## Evaluation:

1. Complete the patient struct complete
2. Add patient functionality
3. Display patient functionality
4. Search patient functionality
5. Update disease functionality
6. Discharge patient functionality