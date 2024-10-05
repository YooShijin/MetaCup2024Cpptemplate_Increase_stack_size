# MetaCup 2024 C++ Template

This repository contains a comprehensive C++ template designed for competitive programming, with a focus on the MetaCup 2024 competition. It features dynamic stack allocation, efficient I/O handling, and includes commonly used libraries to kickstart your coding challenges.

## Features

- Dynamic stack size allocation (up to 1 GiB)
- File-based I/O for easy testing
- Preloaded with essential C++ libraries
- Optimized I/O operations
- Support for multiple test cases

## Getting Started

### Prerequisites

- C++ compiler (GCC recommended)
- Basic knowledge of C++ and competitive programming

### Installation

1. Clone this repository:
   ```
   git clone https://github.com/yourusername/metacup-2024-cpp-template.git
   ```
2. Navigate to the cloned directory:
   ```
   cd metacup-2024-cpp-template
   ```

### Usage

1. Open `template.cpp` in your preferred code editor.
2. Implement your solution in the `solve()` function.
3. Create an `input.txt` file in the same directory and add your test input.
4. Compile the program:
   ```
   g++ -O2 template.cpp -o solution
   ```
5. Run the program:
   ```
    ./solution
   ```
6. Check the output in `output.txt`.

## Template Structure

- `#include` statements: All necessary libraries are pre-included.
- `solve()` function: Implement your solution here.
- `run_with_stack_size()`: Handles dynamic stack allocation.
- `main_()`: Manages file I/O and test case iteration.
- `main()`: Entry point, calls `run_with_stack_size()`.

## Customization

- Adjust stack size in `main()` by modifying the argument to `run_with_stack_size()`.
- Modify I/O file names in `main_()` if needed.

## Acknowledgments

- Inspired by competitive programming best practices
- Optimized for MetaCup 2024 and similar coding competitions

Happy Coding and Good Luck in MetaCup 2024!
