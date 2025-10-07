# Experiment 19: Stacks in C++

---

## Aim
To study and implement the concept of **Stacks** in C++ using:  
1. Stack implementation with a **class**.  
2. Performing **stack operations** through functions.

---

## Tools
- **Programming Language**: C++  
- **Compiler**: g++ / MinGW / Turbo C++  
- **IDE/Editor**: Code::Blocks, Dev C++, or Visual Studio Code  
- **Operating System**: Windows / Linux / macOS  

---

## Theory
A **Stack** is a linear data structure that follows the **LIFO (Last In, First Out)** principle.  
The element inserted last is the first to be removed.

Common stack operations include:
1. **Push** – Insert an element onto the stack.  
2. **Pop** – Remove the top element from the stack.  
3. **Peek / Top** – View the top element without removing it.  
4. **isEmpty** – Check whether the stack is empty.  
5. **isFull** – (in case of array implementation) Check whether the stack is full.  

Stacks are widely used in:  
- Expression evaluation (postfix, prefix)  
- Function calls (recursion)  
- Undo/Redo operations in editors  
- Memory management and backtracking algorithms  

---

## Algorithm

### A. Stack Implementation Using Class
1. Define a class `Stack` with:
   - A private array to store elements.
   - An integer variable `top` to track the stack’s top index.
   - A constant `MAX` to define maximum stack size.  

2. Create public member functions:
   - `push(int value)` → Adds an element to the stack.  
   - `pop()` → Removes and returns the top element.  
   - `peek()` → Returns the top element without removing it.  
   - `isEmpty()` → Checks if stack is empty.  
   - `isFull()` → Checks if stack is full.  

3. Initialize `top = -1` in the constructor.  
4. Implement all member functions to perform stack operations.  
5. In `main()`, create an object of the `Stack` class and call its functions to test push and pop operations.  

---

### B. Stack Operations Using Functions
1. Define global variables:
   - An array to store stack elements.  
   - An integer `top` to track the current position.  

2. Create functions:
   - `void push(int x)` → Adds element if the stack is not full.  
   - `void pop()` → Removes element if the stack is not empty.  
   - `void display()` → Displays all stack elements.  

3. Use conditional statements to check stack overflow and underflow.  
4. Display the result after each operation.  

---

## Functions Used

### For Class Implementation:
- **`push()`** – Adds an element to the stack.  
- **`pop()`** – Removes the top element.  
- **`peek()`** – Shows the current top element.  
- **`isEmpty()`** – Returns true if no elements are in the stack.  
- **`isFull()`** – Returns true if maximum capacity is reached.  

### For Function-Based Implementation:
- **`push()`** – Adds an element globally.  
- **`pop()`** – Deletes the topmost element.  
- **`display()`** – Prints current elements of the stack.  

---

## Conclusion
Through this experiment, we successfully:  
1. Implemented a **stack** data structure using both **classes** and **functions** in C++.  
2. Understood the **LIFO** principle and its operations — push, pop, and peek.  
3. Demonstrated how stack operations prevent overflow and underflow using conditions.  
4. Learned how stacks can be implemented using **arrays** and manipulated via **class methods** or **independent functions**.  

This experiment provided a foundational understanding of **stack operations**, which are essential for problem-solving, recursion, expression evaluation, and memory management in programming.
