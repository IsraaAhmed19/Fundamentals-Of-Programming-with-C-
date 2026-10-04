# Fundamentals Of Programming With C++

## 1. What / Why C++?

* C++ is a cross-platform / portable language.
* Used to create high-performance applications.

### C and C++

Both C and C++ are:

* Considered mid-level languages that are close to hardware.
* Have full control on computer resources such as memory, with no automatic memory management.

C++ is a superset of the C language. It has all the features of C, with additional features such as:

* Object-Oriented Programming
* Classes
* etc.

---

## 2. Install C++

You can use:

* Code::Blocks
* Visual Studio
* VS Code

---

## 3. Types of Brackets

* Round brackets `( )`
* Curly brackets `{ }`
* Square brackets `[ ]`

---

## 4. Basic C++ Syntax

* `cout` : Character Output
* `cin` : Character Input
* `<<` : Insertion Operator
* `;` : Semicolon
* `:` : Colon
* `::` : Double Colon

---

## 5. Comments

* Single-line comments: `//` (double forward slash)
* Multi-line comments: `/* */` (forward slash followed by asterisk)

---

## 6. Variables

**Variable:** A data container with a unique name called an **identifier**.

### Syntax

```cpp
data_type variable_name = value;
```

### Naming Rules

* Must start with a letter or underscore.
* Can contain letters, digits, and underscores.
* Are case-sensitive.
* Cannot be reserved keywords (C++ keywords).

**Best Practice:** Use meaningful variable names and follow a consistent writing style.

---

## 7. Variable Types

### Local Variables

Declared inside a function or block.

### Global Variables

Declared outside of all functions.

---

## 8. Constant Variables

* `const` : Constant variable. Its value cannot be changed after initialization.

```cpp
const double PI = 3.14;
```

---

## 9. Escape Sequences

* `\n` : New line
* `\t` : Tab (4 spaces)
* `\\` : Backslash
* `\"` : Double quote
* `\'` : Single quote
* `\r` : Carriage return
* `\a` : Alert (bell)

---

## 10. Data Types in C++

* `int`
* `float`
* `double`
* `char`
* `string`
* `boolean`
* `array`
* `sizeof`

**Array:** Collection of similar data types.

**sizeof:** Returns the size of a data type or variable in bytes.

### Data Type Size

| Data Type | Size    |
| --------- | ------- |
| `int`     | 4 bytes |
| `float`   | 4 bytes |
| `double`  | 8 bytes |
| `char`    | 1 byte  |
| `boolean` | 1 byte  |

---
# For Practice: Calculate Your Age

Create a C++ application that takes the user's age and calculates:
* Their age in days.
* Their age in hours.
---

## 11. Increment and Decrement

* `++`
* `--`

### Types

* Pre-increment / Pre-decrement
* Post-increment / Post-decrement

---

## 12. Comparison Operators

* `==` : Equal
* `!=` : Not equal
* `>=` : Greater than or equal to
* `<=` : Less than or equal to
* `<` : Less than
* `>` : Greater than

---

## 13. Logical Operators

* `!` : NOT
* `&&` : AND
* `||` : OR

---
