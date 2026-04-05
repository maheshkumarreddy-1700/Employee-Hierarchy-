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

*<img width="492" height="311" alt="Screenshot 2026-03-31 205747" src="https://github.com/user-attachments/assets/ba3a7dbe-a0e2-4b25-98c2-431a13111736" />

### Display Employee

*<img width="503" height="325" alt="Screenshot 2026-03-31 205814" src="https://github.com/user-attachments/assets/011cd722-bcbb-4bc1-ae28-f226c3882fe4" />

### Search Employee

*<img width="460" height="274" alt="Screenshot 2026-03-31 205836" src="https://github.com/user-attachments/assets/4012de40-b54b-4adb-9e8f-8b46940a69a9" />

### Update Employee

*<img width="470" height="324" alt="Screenshot 2026-03-31 205947" src="https://github.com/user-attachments/assets/80695ff5-651a-479b-8691-d311d5eb4aba" />

### Delete Employee

*<img width="453" height="272" alt="Screenshot 2026-03-31 210010" src="https://github.com/user-attachments/assets/8f3508e6-7121-4ec6-86ba-91ff8866cddd" />


*<img width="428" height="304" alt="Screenshot 2026-03-31 215529" src="https://github.com/user-attachments/assets/ccefe26b-a490-460f-a03e-816f56a93d6f" />



### Exist

*<img width="315" height="195" alt="Screenshot 2026-03-31 210400" src="https://github.com/user-attachments/assets/01bf6603-4e64-45dc-b2ae-8e81d4f0f5e3" />


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

## IEEE Project Report

*https://docs.google.com/document/d/1LdUFo0Pj1gjmSIVKNZvBgbBO6rYzy-_bRX7XA6GoCII/edit?usp=sharing

---

## 📄 License
This project is developed **for academic purposes only**.
