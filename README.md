# 🎟️ OOP Ticket Booking System

> A C++ Object-Oriented Ticket Booking System for Movies, Buses, and Cinema shows, built with clean architecture and file-based persistence.

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![OOP](https://img.shields.io/badge/OOP-Principles-blue?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)

---

## 📖 Overview

A fully functional **Ticket Booking System** developed in **C++** that simulates a real-world booking platform. The system handles three core entities, **Customers**, **Sellers**, and **Tickets**, following Object-Oriented Programming principles and persistent file storage.

Whether booking a movie, reserving a bus seat, or grabbing cinema tickets, this system provides a complete workflow from listing to confirmation.

---

## ✨ Key Features

- 🎬 **Multi-Category Booking** — Supports Movie, Bus, and Cinema ticket types
- 👤 **Customer Management** — Register, view, and manage customer profiles
- 🧑‍💼 **Seller Management** — Sellers can list tickets, update inventory, and manage their offerings
- 🎫 **Ticket Inventory** — Real-time tracking of available tickets and seats
- 📅 **Booking Workflow** — End-to-end booking with validation and confirmation
- 💾 **File Persistence** — All data saved to local `.txt` files for session-to-session continuity

---

## 🧠 Object-Oriented Design

This project showcases a clean, modular implementation of OOP principles:

| Principle | Implementation |
|-----------|----------------|
| 🔒 **Encapsulation** | Each class (`Customer`, `Seller`, `Ticket`) hides its internal data behind public methods |
| 🧩 **Modularity** | Every class has its own `.h` and `.cpp` file for maintainability |
| 🔄 **Reusability** | Shared logic isolated in dedicated functions and classes |
| 📦 **Abstraction** | Complex operations are wrapped inside clean, readable class methods |
| 🚀 **Extensibility** | New categories and roles can be added with minimal changes |

---

## 🛠️ Tech Stack

- **Language:** C++ (C++11 or higher)
- **Concepts:** OOP, File I/O, STL, Class Design
- **Compiler:** g++ (MinGW recommended for Windows)
- **Editor:** Visual Studio Code

---

## 📂 Project Structure

```text
OOP-Ticket-Booking-System/
│
├── 📄 README.md
├── 🚀 main.cpp                    # Entry point and main menu logic
│
├── 👤 customer.cpp                # Customer class implementation
├── 👤 customer.h                  # Customer class definition
├── 👤 customers.txt               # Persistent storage for customers
│
├── 🧑‍💼 seller.cpp                  # Seller class implementation
├── 🧑‍💼 seller.h                    # Seller class definition
├── 🧑‍💼 sellers.txt                 # Persistent storage for sellers
│
├── 🎫 ticket.cpp                  # Ticket class implementation
├── 🎫 ticket.h                    # Ticket class definition
├── 🎫 tickets.txt                 # Persistent storage for tickets
│
└── 💾 backup.txt                  # Backup data storage
