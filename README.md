# CPP08

## Overview
This repository contains solutions for C++ Module 08 exercises, focusing on advanced STL usage, template programming, and custom container manipulation. Each subdirectory (`ex00`, `ex01`, `ex02`) is a standalone exercise with its own main file and Makefile.

## Structure

- **ex00**: `easyfind` template function for searching values in STL containers.
- **ex01**: `Span` class for storing numbers and calculating shortest/longest spans.
- **ex02**: `MutantStack` class, a stack with iterator support for traversal.

---

## ex00: easyfind

**Files:**
- `easyfind.hpp`: Template function to find a value in any STL container. Throws if not found.
- `main.cpp`: Demonstrates usage with `std::vector`, `std::list`, `std::deque`.
- `Makefile`: Builds the `easyfind` executable.

**Build & Run:**
```sh
cd ex00
make
./easyfind
```

---

## ex01: Span

**Files:**
- `Span.hpp`/`Span.cpp`: Class to store up to N numbers, add numbers (individually or in bulk), and compute shortest/longest span (difference) between numbers. Throws on errors (full, not enough numbers).
- `main.cpp`: Usage examples, including large random data.
- `Makefile`: Builds the `span` executable.

**Build & Run:**
```sh
cd ex01
make
./span
```

---

## ex02: MutantStack

**Files:**
- `MutantStack.hpp`/`MutantStack.tpp`: Template stack class inheriting from `std::stack`, adding iterator support (begin/end, rbegin/rend).
- `main.cpp`: Demonstrates stack operations and iteration (forward/reverse).
- `Makefile`: Builds the `mutable_span` executable.

**Build & Run:**
```sh
cd ex02
make
./mutable_span
```

---

## Notes
- All code is written in C++98 standard.
- Each exercise is self-contained and can be built/run independently.
- Colored output is used for clarity in terminal.