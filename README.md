# 📌 Project 8: String Library (OOP)

## 🔹 Overview
This project was implemented as part of **Course 10** in the **Programming Advices Track [www.programmingadvices.com]** by **Dr. Mohamed Abouhadhood**.

The main idea is to **reuse all the string-related functions** we built earlier in **Course 7 – Algorithms & Problem Solving Level 3**, but instead of rewriting them, we collected them inside a **separate header file** (`clsString.h`) and wrapped them in a **class** to apply **Object-Oriented Programming (OOP) principles**.

---

## ✨ Features
- ✅ **Reusability:** All string functions are encapsulated in one class — no need to rewrite them again.  
- ✅ **Encapsulation:** The internal implementation of each function is hidden.  
- ✅ **Static Functions:** Many methods can be used without creating an object.  
- ✅ **Overloading:** Each function has two versions — one that takes a parameter and one that works on the object’s current value.  
- ✅ **Flexibility:** Developers can use the class as an object or call its static methods directly.

---

## 🛠️ Tech Stack
- **Language:** C++  
- **Paradigm:** Object-Oriented Programming (OOP)  
- **Compiler:** MSVC / GCC  
- **IDE Used:** Visual Studio 2022 (recommended)

---

## 🚀 How to Run

1. Clone the repository:
   ```bash
   git clone https://github.com/YourGitHubUsername/Project-8-String-Library-OOP.git
   ```
2. Open the project in your C++ IDE (Visual Studio / Code::Blocks / Dev-C++)  
3. Make sure both files `clsString.h` and `main.cpp` are in the same directory.  
4. Build and run `main.cpp`

---

## 📂 Project Structure

📁 **Project-8-String-Library-OOP**  
│  
├── 📄 `clsString.h` → Contains the `clsString` class and all related functions  
├── 📄 `main.cpp` → Demonstration of the class usage  
└── 📄 `README.md` → Project documentation  

---

## 🧾 Sample Demonstration
Here’s an example of how the class is used in `main.cpp`:

```cpp
#include <iostream>
#include "clsString.h"
using namespace std;

int main()
{
    clsString String1("Mohamed Fekry");

    cout << "String1 = " << String1.Value << endl;
    cout << "Capital Letters Count: " << String1.CountCapitalLetters() << endl;
    cout << "Small Letters Count: " << String1.CountSmallLetters() << endl;

    String1.UpperFirstLetterOfEachWord();
    cout << "After Capitalizing First Letters: " << String1.Value << endl;

    String1.ReverseWordsInString();
    cout << "After Reversing Words: " << String1.Value << endl;

    String1.ReplaceWord("Mohamed", "Fekry");
    cout << "After Replace: " << String1.Value << endl;

    return 0;
}
```

---

## 🖥️ Example Output

```
String1 = Mohamed Fekry
Capital Letters Count: 2
Small Letters Count: 9
After Capitalizing First Letters: Mohamed Fekry
After Reversing Words: Fekry Mohamed
After Replace: Fekry Fekry
```

---

## 🎯 Learning Objectives
- Understand and apply **OOP concepts** in C++  
- Practice **Encapsulation, Reusability, and Overloading**  
- Learn how to **organize code into classes and header files**  
- Build flexible, maintainable, and reusable **string utilities**

---

## 🙌 Acknowledgments
This project is part of the **Programming Advices Training Track**, led by:

- 👨‍🏫 **Dr. Mohamed Abouhadhood**  
- 🌐 **Platform:** [Programming Advices](https://www.programmingadvices.com)

---

## 🧑‍💻 Author
**M-I-Fekry 🧑‍💻**  
📧 [Add your email here]  
💻 GitHub: [https://github.com/M-I-Fekry]
