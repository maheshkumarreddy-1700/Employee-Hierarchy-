#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Employee structure */
struct Employee {
    int id;
    char name[50];
    char designation[50];
    struct Employee *child;
    struct Employee *sibling;
};

struct Employee *root = NULL;

/* Function Prototypes */

struct Employee* creatEmployee(int, char[],char[]);
struct Employee *searchEmploye(struct Employee *,int);
void addEmployee();
void displayHierachy(struct Employee *,int);
void updateEmployee();
void deleteEmployee();
struct Employee* deleteNode(struct Employee*,int);
void freeTree(struct Employee*);
void memu();

/* Create new employee */

struct Employee* createEmployee(int id, char name[], char designation[]) {
    struct Employee *emp = (struct Employee*)malloc(sizeof(struct Employee));
    if (emp == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    emp->id = id;
    strcpy(emp->name, name);
    strcpy(emp->designation, designation);
    emp->child = NULL;
    emp->sibling = NULL;
    return emp;
}

/* Search employee by ID (DFS) */

struct Employee* searchEmployee(struct Employee *root, int id) {
    if (root == NULL)
        return NULL;

    if (root->id == id)
        return root;

    struct Employee *found = searchEmployee(root->child, id);
    if (found != NULL)
        return found;

    return searchEmployee(root->sibling, id);
}

/* Add employee */

void addEmployee() {
    int id, managerId;
    char name[50], designation[50];

    printf("\nEnter Employee ID: ");
    scanf("%d", &id);

    if (searchEmployee(root, id) != NULL) {
        printf("Employee ID already exists!\n");
        return;
    }

    printf("Enter Name: ");
    scanf(" %[^\n]", name);
    printf("Enter Designation: ");
    scanf(" %[^\n]", designation);

    struct Employee *newEmp = createEmployee(id, name, designation);

    if (root == NULL) {
        root = newEmp;
        printf("Root employee (CEO) added successfully.\n");
        return;
    }
    printf("Enter Manager ID: ");
    scanf("%d", &managerId);

    struct Employee *manager = searchEmployee(root, managerId);
    if (manager == NULL) {
        printf("Manager not found!\n");
        free(newEmp);
        return;
    }

    if (manager->child == NULL) {
        manager->child = newEmp;
    } else {
        struct Employee *temp = manager->child;
        while (temp->sibling != NULL)
            temp = temp->sibling;
        temp->sibling = newEmp;
    }

    printf("Employee added successfully.\n");
}

/* Display hierarchy */

void displayHierarchy(struct Employee *root, int level) {
    if (root == NULL)
        return;

    for (int i = 0; i < level; i++)
        printf("  ");

    printf("ID:%d | %s | %s\n", root->id, root->name, root->designation);

    displayHierarchy(root->child, level + 1);
    displayHierarchy(root->sibling, level);
}   

/* Update employee */
void updateEmployee() {
    int id;
    printf("\nEnter Employee ID to update: ");
    scanf("%d", &id);

    struct Employee *emp = searchEmployee(root, id);
    if (emp == NULL) {
        printf("Employee not found!\n");
        return;
    }

    printf("Enter new Name: ");
    scanf(" %[^\n]", emp->name);
    printf("Enter new Designation: ");
    scanf(" %[^\n]", emp->designation);

    printf("Employee updated successfully.\n");
}

/* Delete employee wrapper */

void deleteEmployee() {
    int id;
    printf("\nEnter Employee ID to delete: ");
    scanf("%d", &id);

    if (root == NULL) {
        printf("Hierarchy is empty.\n");
        return;
    }

    root = deleteNode(root, id);
}

/* Delete employee node and its subtree */

struct Employee* deleteNode(struct Employee *root, int id) {
    if (root == NULL)
        return NULL;

    if (root->id == id) {
        freeTree(root);
        printf("Employee and subordinates deleted.\n");
        return NULL;
    }

    root->child = deleteNode(root->child, id);
    root->sibling = deleteNode(root->sibling, id);

    return root;
}


/* Free entire subtree */

void freeTree(struct Employee *root) {
    if (root == NULL)
        return;

    freeTree(root->child);
    freeTree(root->sibling);
    free(root);
}

/* Menu */

void menu() {
    printf("\n--- Employee Hierarchy Menu ---\n");
    printf("1. Add Employee\n");
    printf("2. Display Hierarchy\n");
    printf("3. Search Employee\n");
    printf("4. Update Employee\n");
    printf("5. Delete Employee\n");
    printf("6. Exit\n");
    printf("Enter your choice: ");
}

/* Main */
int main() {
    int choice, id;
    struct Employee *emp;

    while (1) {
        menu();
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                if (root == NULL)
                    printf("Hierarchy is empty.\n");
                else
                    displayHierarchy(root, 0);
                break;
            case 3:
                printf("\nEnter Employee ID to search: ");
                scanf("%d", &id);
                emp = searchEmployee(root, id);
                if (emp)
                    printf("Found: %s (%s)\n", emp->name, emp->designation);
                else
                    printf("Employee not found.\n");
                break;
            case 4:
                updateEmployee();
                break;
            case 5:
                deleteEmployee();
                break;
            case 6:
                freeTree(root);
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}