# 💳 Credit Card Transaction Manager (DSA Project)

A simple menu-driven C program that demonstrates the use of fundamental Data Structures and Algorithms (DSA) concepts like Arrays, Hashing, Searching, and Sorting.

---

## 📌 📖 Project Overview

This project simulates a basic credit card transaction management system where users can:

- Add transactions  
- Search transactions  
- Sort transaction data  
- Display all records  

The goal is to showcase how DSA concepts improve efficiency in managing transaction data.

---

## 🧠 ⚙️ Concepts Used

- **Arrays** → Store transaction IDs and amounts  
- **Hashing** → Fast lookup using `id % SIZE`  
- **Searching**
  - Linear Search (by amount)
  - Hash-based Search (by ID)  
- **Sorting**
  - Bubble Sort (by amount)

---

## 🚀 ✨ Features

- ➕ Add transaction (ID + amount)  
- 🔍 Search transaction by ID  
- 🔎 Search transaction by amount  
- 📊 Sort transactions by amount  
- 📋 Display all transactions  

---

## 🛠️ 🧾 How It Works

1. User inputs transaction details  
2. Data is stored in arrays  
3. Hash table stores index for fast lookup  
4. Operations like search and sort are performed  

---

## 📊 📈 Time Complexity

| Operation | Technique | Complexity |
|----------|----------|-----------|
| Insert | Array | O(1) |
| Search by ID | Hashing | O(1) |
| Search by Amount | Linear Search | O(n) |
| Sorting | Bubble Sort | O(n²) |

---

## ⚠️ Note

- Hashing is implemented using a simple modulo function  
- Collision handling is not included (basic implementation for learning purposes)

---

## ▶️ 🧪 How to Run

### 🔧 Compile:
```bash
gcc dsa.c -o dsa
