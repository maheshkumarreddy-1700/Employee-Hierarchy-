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
