## Payslip

### Problem Description

A company wants to automatically generate **Employee Payslips** using a template file. You have:

1. An input file `employees.txt` contains employee details in the following format:

   ```
    101 John Sales 50000
    102 Alice HR 60000
    103 Bob IT 55000
   ```

   Each line has:

   - Employee ID
   - Employee Name
   - Employee Department
   - Basic Salary

2. A template file `template.txt` is provided, which contains placeholders:

   ```
    ------------------------------
            PAYSLIP
    ------------------------------
    Employee ID   : {{id}}
    Name          : {{name}}
    Department    : {{dept}}
    Salary        : {{salary}}
    ------------------------------
   ```

   > `{{id}}`, `{{name}}`, `{{dept}}`, and `{{salary}}` must be replaced with actual values.

3. The program should read `employees.txt`, and for each employee, generate a payslip file named:

   ```
   payslip_<id>.txt
   ```

   Example: `payslip_101.txt` for John Doe.

4. The solution must use:

   - `helpers.c` and `helpers.h` functions
   - A **Makefile** to compile and link the program

---

## Instructions

- All the code needs to be written in `main.c`.
- You need to use functions from `helper.h`
- use command `make` to run the code.

## Sample Output

- Input `employees.txt`:

  ```
    101 John Sales 50000
    102 Alice HR 60000
    103 Bob IT 55000
  ```

- Output files:

  - `payslip_101.txt`

    ```
    ------------------------------
            PAYSLIP
    ------------------------------
    Employee ID   : 101
    Name          : John
    Department    : Sales
    Salary        : 50000
    ------------------------------
    ```

  - `payslip_102.txt`

    ```
    ------------------------------
            PAYSLIP
    ------------------------------
    Employee ID   : 102
    Name          : Alice
    Department    : HR
    Salary        : 60000
    ------------------------------
    ```

  - `payslip_102.txt`

    ```
    ------------------------------
            PAYSLIP
    ------------------------------
    Employee ID   : 103
    Name          : Bob
    Department    : IT
    Salary        : 55000
    ------------------------------
    ```

---

## Evaluation

1. Implement open_file correctly with error handling.
2. Implement generate_output_filename to create payslip_<id>.txt.
3. Read template.txt line by line.
4. Replace placeholders ({{id}}, {{name}}, {{dept}}, {{salary}}).
5. Implement process_employee to generate payslip files.
6. Implement process_all_employees to read employees.txt and call process_employee.
7. Use helpers.c/h functions appropriately.
8. Generate one payslip per employee in correct format.
9. Print final confirmation message on success.

## Help

- Navigate to question in the terminal
`cd /workspaces/c-programming-lab/Question-4/`
- compile the code using make
`make`
- run the code
`./payslip`