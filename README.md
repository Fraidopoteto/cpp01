# CPP Module 01

A project from the 42 curriculum. The goal of this module is to introduce memory allocation, pointers, references, and the switch statement in C++. It builds upon the object-oriented basics learned in the previous module.

## About the implementation

This project is written in strict adherence to the C++98 standard. Based on the exercises provided, it features:

* **Memory Allocation:** Explores dynamic memory allocation using `new` and `delete`. The `Zombie` exercises demonstrate how to allocate arrays of objects dynamically (`zombieHorde`) and how to properly deallocate them (`delete[]`) to avoid memory leaks, calling destructors appropriately.
* **Input Validation:** Includes robust input handling (e.g., using `std::strtol`) to ensure the user provides valid integers when creating a horde of objects.
* **Pointers vs. References:** The `Weapon`, `HumanA`, and `HumanB` classes highlight the key differences between pointers and references in C++:
  * `HumanA` takes a reference to a `Weapon` in its constructor because it will always be armed from creation and the weapon cannot be null.
  * `HumanB` uses a pointer to a `Weapon` because it might be unarmed at creation, its weapon can be changed later via a setter, and it requires null-checks before attacking.

## Compilation and Usage

### 1. Compilation

Since this module typically consists of several isolated exercises, you must navigate to the specific exercise directory and run the `make` command to compile it. This will compile the source files using `c++` with the required flags (`-Wall -Wextra -Werror -std=c++98`).

```bash
make
```

### 2. Usage

Run the compiled executable. For example, to run the Zombie horde exercise:

```bash
./zombie
```

Follow the interactive prompts to create a horde of zombies, observing the constructor and destructor messages in the standard output.

## Structure

* **Exercise 01 (Zombie Horde):** Focuses on allocating an array of objects in a single allocation. Contains `Zombie.hpp`, `Zombie.cpp`, `zombieHorde.cpp`, and the `main.cpp` for testing.
* **Exercise 03 (Unnecessary Violence):** Focuses on the architectural differences between pointers and references. Contains `Weapon`, `HumanA`, and `HumanB` class files, alongside a `main.cpp` testing suite.

## Author

* **joschmun** - *42 Student*