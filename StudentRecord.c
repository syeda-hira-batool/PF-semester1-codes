#include <stdio.h>
#include <string.h>


struct Student {
    char name[50];
    char rollNumber[20];   
    char department[30];
    float gpa;
};


void displayStudents(struct Student students[], int n) {
    printf("============================================================\n");
    printf("                    Student Records                         \n");
    printf("============================================================\n");
    int i;
    for ( i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name       : %s\n", students[i].name);
        printf("Roll No.   : %s\n", students[i].rollNumber);
        printf("Department : %s\n", students[i].department);
        printf("GPA        : %.2f\n", students[i].gpa);
        printf("------------------------------------------------------------\n");
    }
}

int main() {
    int n,i;

    printf("Enter number of students to add: ");
    scanf("%d", &n);
    getchar(); 

    struct Student students[n];

    
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0; 

        printf("Roll Number: ");
        fgets(students[i].rollNumber, sizeof(students[i].rollNumber), stdin);
        students[i].rollNumber[strcspn(students[i].rollNumber, "\n")] = 0; 

        printf("Department: ");
        fgets(students[i].department, sizeof(students[i].department), stdin);
        students[i].department[strcspn(students[i].department, "\n")] = 0;

        printf("GPA: ");
        scanf("%f", &students[i].gpa);
        getchar(); 
    }

    
    printf("\n");
    displayStudents(students, n);

    return 0;
}
