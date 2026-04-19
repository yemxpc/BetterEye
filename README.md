# 👁️ BetterEye v1.0
**The Network is Under Watch.**

BetterEye is a lightweight, high-performance network reconnaissance tool developed in C++ specifically for Linux environments (optimized for Arch Linux). It provides fast TCP port scanning with customizable timeouts and a modular architecture designed for future network analysis enhancements.

---

## 🚀 Features
- **Fast TCP Scanning:** Efficiently identifies open ports using native Linux sockets.
- **Custom Timeouts:** Implements `setsockopt` for microsecond-level connection tuning, preventing hangs on filtered ports.
- **Modular OOP Design:** Built with a clean separation between core logic, network modules, and utilities.
- **Visual Interface:** Features a unique ASCII "Eye" banner and color-coded terminal output for better readability.
- **Arch Linux Ready:** Developed and tested on Arch, utilizing GCC and standard Linux headers.

---

## 🛠️ Installation & Compilation

### Prerequisites
Ensure you have `g++` and `make` installed on your system.
```bash
sudo pacman -S gcc