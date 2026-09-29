#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

// Structure for storing student information
struct Student {
    int id;
    char name[50];
    float feesRequired;
    float feesPaid;
};

// Function declarations
void addStudent(struct Student students[], int *count);
void displayStudents(struct Student students[], int count);
void searchStudent(struct Student students[], int count);
void payFees(struct Student students[], int count);

int main() {

    struct Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    do {
        printf("\n====================================\n");
        printf("   UNIVERSITY FEES MANAGEMENT SYSTEM\n");
        printf("====================================\n");

        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Pay Fees\n");
        printf("5. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                addStudent(students, &count);
                break;

            case 2:
                displayStudents(students, count);
                break;

            case 3:
                searchStudent(students, count);
                break;

            case 4:
                payFees(students, count);
                break;

            case 5:
                printf("\nThank you for using the system!\n");
                break;

            default:
                printf("\nInvalid choice. Try again.\n");
        }

    } while (choice != 5);

    return 0;
}


// Add a new student
void addStudent(struct Student students[], int *count) {

    if (*count >= MAX_STUDENTS) {
        printf("\nStudent limit reached!\n");
        return;
    }

    printf("\nEnter student ID: ");
    scanf("%d", &students[*count].id);

    printf("Enter student name: ");
    scanf(" %[^\n]", students[*count].name);

    printf("Enter required fees: ");
    scanf("%f", &students[*count].feesRequired);

    printf("Enter fees paid: ");
    scanf("%f", &students[*count].feesPaid);

    (*count)++;

    printf("\nStudent added successfully! ✅\n");
}


// Display all students
void displayStudents(struct Student students[], int count) {

    if (count == 0) {
        printf("\nNo students registered.\n");
        return;
    }

    printf("\n========== STUDENT RECORDS ==========\n");

    for (int i = 0; i < count; i++) {

        float balance =
            students[i].feesRequired - students[i].feesPaid;

        printf("\nStudent ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Required Fees: %.2f\n", students[i].feesRequired);
        printf("Fees Paid: %.2f\n", students[i].feesPaid);

        if (balance > 0) {
            printf("Balance: %.2f\n", balance);
        } else {
            printf("Fees Status: Fully Paid ✅\n");
        }
    }
}


// Search for a student
void searchStudent(struct Student students[], int count) {

    int id;
    int found = 0;

    printf("\nEnter student ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {

        if (students[i].id == id) {

            float balance =
                students[i].feesRequired - students[i].feesPaid;

            printf("\nStudent Found! 🔍\n");
            printf("ID: %d\n", students[i].id);
            printf("Name: %s\n", students[i].name);
            printf("Required Fees: %.2f\n", students[i].feesRequired);
            printf("Fees Paid: %.2f\n", students[i].feesPaid);

            if (balance > 0) {
                printf("Balance: %.2f\n", balance);
            } else {
                printf("Status: Fully Paid ✅\n");
            }

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nStudent not found.\n");
    }
}


// Pay fees
void payFees(struct Student students[], int count) {

    int id;
    float amount;
    int found = 0;

    printf("\nEnter student ID: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {

        if (students[i].id == id) {

            printf("Enter amount to pay: ");
            scanf("%f", &amount);

            if (amount <= 0) {
                printf("\nInvalid amount.\n");
                return;
            }

            students[i].feesPaid += amount;

            printf("\nPayment successful! 💰\n");
            printf("Student: %s\n", students[i].name);
            printf("Total paid: %.2f\n", students[i].feesPaid);

            float balance =
                students[i].feesRequired - students[i].feesPaid;

            if (balance > 0) {
                printf("Remaining balance: %.2f\n", balance);
            } else {
                printf("Fees fully paid! 🎉\n");
            }

            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nStudent not found.\n");
    }
}