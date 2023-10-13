# Tower of Hanoi Algorithm

This repository contains a C++ program to solve the Tower of Hanoi puzzle. The Tower of Hanoi is a classic problem in computer science and mathematics that involves moving a stack of disks from one peg to another, subject to specific rules.

## Table of Contents
- [Introduction](#introduction)
- [Requirements](#requirements)
- [Usage](#usage)
- [Algorithm](#algorithm)
- [License](#license)

## Introduction

The Tower of Hanoi puzzle consists of three pegs (A, B, and C) and a number of disks of different sizes. The goal is to move all the disks from the source peg (A) to the target peg (C), using the intermediate peg (B) as a temporary storage, following these rules:

1. Only one disk can be moved at a time.
2. A disk can only be placed on top of a larger disk or an empty peg.

This program is a simple console application written in C++ that uses a recursive algorithm to solve the Tower of Hanoi puzzle and displays each move.

## Requirements

To compile and run this program, you need:
- A C++ compiler (e.g., g++) installed on your system.
- A C++ development environment, such as Code::Blocks or Visual Studio, to create and run the program.
- An understanding of C++ programming.

## Usage

1. Clone the repository to your local machine or download the source code.
2. Open the C++ source file, `tower_of_hanoi.cpp`, in your C++ development environment.
3. Compile the program using your C++ compiler.
4. Run the compiled executable.
5. Enter the number of disks you want to use in the Tower of Hanoi puzzle when prompted.
6. The program will display the step-by-step moves required to solve the puzzle.

Make sure to have a working C++ development environment set up before running the program.

## Algorithm

The program uses a recursive algorithm to solve the Tower of Hanoi puzzle. The `move` function takes as input the number of disks, the source peg (`from`), the target peg (`to`), and an intermediate peg (`inter`). It recursively moves the disks from the source peg to the target peg while obeying the rules of the puzzle.

The steps performed by the algorithm are as follows:
1. If there is only one disk left to move, it directly moves it from the source to the target peg.
2. If there are more than one disk, it moves the top `n-1` disks from the source peg to the intermediate peg using the target peg as an intermediary.
3. Then, it moves the remaining largest disk from the source peg to the target peg.
4. Finally, it moves the `n-1` disks from the intermediate peg to the target peg using the source peg as an intermediary.

The program continues this process until all the disks are moved to the target peg.

## License

This program is provided under the MIT License. Feel free to use and modify it as needed for your projects.

---

Please note that this README assumes the use of a C++ development environment, and it's important to ensure that you have the required tools and knowledge to compile and run C++ programs.