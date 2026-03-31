# Employee Hierarchy Management System (C Language)

## 📌 Project Overview
The **Employee Hierarchy Management System** is a menu-driven C program that manages an organization’s employee structure using a **Tree Data Structure**.  
It represents real-world hierarchical relationships such as **CEO → Managers → Employees**.

This project demonstrates the practical use of **trees, recursion, dynamic memory allocation, and CRUD operations** in C.

---

## ❓ Problem Statement
In organizations, employees follow a hierarchical reporting structure.  
Managing this structure efficiently requires a system that can:
- Add employees under managers
- Search employees
- Update employee details
- Display hierarchy
- Delete employees along with subordinates

This project solves the problem using a **Child–Sibling Tree representation**.

---

## 🌳 Data Structure Used
**General Tree (Child–Sibling Representation)**

Each employee node contains:
- Employee ID
- Employee Name
- Designation
- Pointer to first child (subordinate)
- Pointer to next sibling (same level employee)

---

## ⚙️ Features (CRUD Operations)

### ➕ Create
- Add root employee (CEO)
- Add employees under a manager

### 📖 Read
- Display employee hierarchy
- Search employee by ID

### ✏️ Update
- Update employee name
- Update employee designation

### ❌ Delete
- Delete an employee
- Automatically deletes all subordinates

---

## 📋 Menu Options
1. Add Employee  
2. Display Hierarchy  
3. Search Employee  
4. Update Employee  
5. Delete Employee  
6. Exit  

---

## 🧪 Sample Input / Output

### Add Root Employee




---

## 🧠 Algorithm Explanation
1. Display menu options repeatedly.
2. For adding employee:
   - Create a new node.
   - If root is NULL, assign as CEO.
   - Otherwise, search manager and attach employee as child.
3. Searching uses **Depth First Search (DFS)**.
4. Updating modifies employee details.
5. Deleting removes the employee and its subtree.
6. Free memory before program termination.

---

## ⏱ Time Complexity
| Operation | Complexity |
|---------|------------|
| Search | O(n) |
| Insert | O(n) |
| Delete | O(n) |
| Display | O(n) |

Where **n = number of employees**.

---

## ▶️ Compilation & Execution

### Compile
``` bash
gcc employee_hierarchy.c -o employee_hierarchy
```

### Run
```bash
./employee_hierarchy
```
---

## 🛠 Technologies Used
- **Language:** C
- **Concepts:**
  - Tree Data Structure
  - Recursion
  - Pointers
  - Dynamic Memory Allocation
  - Modular Programming

---

## 🏢 Applications
- Corporate Organization Charts
- Company Management Systems
- University Faculty Hierarchy
- Team Structure Visualization

---

## 👥 Project Team Members
- Mahesh    
- Goutham  

---

## 📌 Conclusion
This project successfully demonstrates how **tree data structures** can be used to model real-world hierarchical systems.  
It improves understanding of **recursion, memory management, and structured programming in C**.

---

## 🎥 Demo Video
Demo video link: *(Add your Google Drive / YouTube link here)*

---

## 📄 License
This project is developed **for academic purposes only**.
