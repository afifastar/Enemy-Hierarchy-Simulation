# Enemy Hierarchy Simulation (C++)

## Overview

This project is an Object-Oriented Programming (OOP) assignment completed for SEP200. It demonstrates the use of inheritance, abstract classes, virtual functions, and dynamic memory in C++. The program models a simple enemy hierarchy with multiple enemy types and shared base functionality.

## Features

* Implementation of a base `Enemy` class with shared attributes and behaviors
* Support for tracking enemy lives and applying damage
* Safe handling of invalid input for lives and damage values
* Runtime polymorphism using virtual functions
* Derived enemy classes with specialized behavior
* Extended enemy type (`Bowser`) with overridden functionality
* Proper use of constructors and destructors in an inheritance hierarchy

## Object-Oriented Concepts Used

* Classes and Objects
* Inheritance
* Polymorphism (virtual functions)
* Encapsulation
* Constructor and Destructor behavior
* Input validation and defensive programming

## Enemy Types

* **Enemy (Base Class)**: Manages name and lives, provides shared functionality
* **Koopa**: Derived enemy with custom attack and talk behavior
* **Goomba**: Derived enemy with unique attack and talk behavior
* **Bowser**: Advanced enemy type with overridden destructor, talk, and attack methods

## Key Functionalities

* Each enemy has a name and a number of lives
* Enemies can take damage through the `takeDamage()` method
* Enemies become "dead" when their lives reach 0
* Dead enemies will not perform actions and will instead output a death message
* Bowser includes custom behavior when alive and a unique destructor message

## How to Compile and Run

Use a C++ compiler such as g++:

```bash
g++ -Wall -std=c++11 main.cpp Enemy.cpp Koopa.cpp Goomba.cpp Bowser.cpp -o program
./program
```

## Notes

* This project was built as part of a coursework assignment for learning OOP principles in C++
* The program runs through `main.cpp` which tests the functionality of all enemy classes

## Author

Afifa Khalid
