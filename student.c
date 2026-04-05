#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct student s[100];
    int n = 0, choice, i, searchId;

    while (1) {
        printf("\n--- Student Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter ID: ");
                scanf("%d", &s[n].id);
                printf("Enter Name: ");
                scanf("%s", s[n].name);
                printf("Enter Marks: ");
                scanf("%f", &s[n].marks);
                n++;
                break;

            case 2:
                for (i = 0; i < n; i++) {
                    printf("\nID: %d\nName: %s\nMarks: %.2f\n", s[i].id, s[i].name, s[i].marks);
                }
                break;

            case 3:
                printf("Enter ID to search: ");
                scanf("%d", &searchId);
                for (i = 0; i < n; i++) {
                    if (s[i].id == searchId) {
                        printf("\nFound!\nID: %d\nName: %s\nMarks: %.2f\n", s[i].id, s[i].name, s[i].marks);
                        break;
                    }
                }
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
}