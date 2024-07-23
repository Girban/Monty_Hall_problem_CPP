# Simulation of Monty Hall Problem with C++

## Overview

This project is a C++ program that simulates the Monty Hall problem, a famous probability puzzle based on a game show scenario. The simulation demonstrates the counter-intuitive probability that switching your choice of doors increases your chances of winning.

## Table of Contents

- [Introduction](#introduction)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Usage](#usage)
- [Program Structure](#program-structure)
- [Examples](#examples)
- [Contributing](#contributing)

## Introduction

The Monty Hall problem is a probability puzzle named after the host of the television game show "Let's Make a Deal." The problem is as follows:

1. You are presented with three doors. Behind one door is a car (the prize), and behind the other two doors are goats.
2. You pick one door.
3. The host, Monty Hall, who knows what is behind each door, opens one of the other two doors, revealing a goat.
4. You are given a choice to either stick with your original pick or switch to the other remaining door.
5. The question is: Should you stick or switch to maximize your chances of winning the car?

The correct strategy is to always switch, as this gives you a 2/3 chance of winning, compared to a 1/3 chance if you stick with your original choice.

## Prerequisites

- C++ compiler (e.g., g++, clang++)

## Installation

1. Clone the repository:
    ```sh
    git clone https://github.com/your-username/MontyHallSimulation.git
    cd MontyHallSimulation
    ```

2. Compile the program:
    ```sh
    g++ -o monty_hall monty_hall.cpp
    ```

## Usage

Run the executable with the number of simulations as an argument:
```sh
./monty_hall 10000
```
This will run the simulation 10,000 times and display the results.

## Program Structure

- `monty_hall.cpp`: The main program file that contains the logic for simulating the Monty Hall problem.

```
#define DISPLAY_ALL_GAMES 0     // 1 -> display info for all games . 0-> only display final results.
```

Change this to '1' in the code to display all results of the game.
## Examples

```sh
g++ -o monty_hall monty_hall.cpp
./monty_hall 1000
```

Output:
```
After 1000 simulations:
Wins by switching:        646    |       Win rate:    64.6 %
Wins by sticking:         354    |       Win rate:    35.4 %
```

### Explaes with DISPLAY_ALL_GAMES 1

```sh
g++ -o monty_hall monty_hall.cpp
./monty_hall 10
```

Output:
```
Game:          1 | Car: 3 , 1st Choice: 3 , Host Reveal: 2 | Win:  Sticking | Win Rate: Stay-     100%   Swtich-       0%
Game:          2 | Car: 3 , 1st Choice: 1 , Host Reveal: 2 | Win: Swtiching | Win Rate: Stay-      50%   Swtich-      50%
Game:          3 | Car: 3 , 1st Choice: 1 , Host Reveal: 2 | Win: Swtiching | Win Rate: Stay- 33.3333%   Swtich- 66.6667%
Game:          4 | Car: 2 , 1st Choice: 1 , Host Reveal: 3 | Win: Swtiching | Win Rate: Stay-      25%   Swtich-      75%
Game:          5 | Car: 3 , 1st Choice: 3 , Host Reveal: 1 | Win:  Sticking | Win Rate: Stay-      40%   Swtich-      60%
Game:          6 | Car: 3 , 1st Choice: 1 , Host Reveal: 2 | Win: Swtiching | Win Rate: Stay- 33.3333%   Swtich- 66.6667%
Game:          7 | Car: 2 , 1st Choice: 1 , Host Reveal: 3 | Win: Swtiching | Win Rate: Stay- 28.5714%   Swtich- 71.4286%
Game:          8 | Car: 3 , 1st Choice: 1 , Host Reveal: 2 | Win: Swtiching | Win Rate: Stay-      25%   Swtich-      75%
Game:          9 | Car: 1 , 1st Choice: 3 , Host Reveal: 2 | Win: Swtiching | Win Rate: Stay- 22.2222%   Swtich- 77.7778%
Game:         10 | Car: 2 , 1st Choice: 1 , Host Reveal: 3 | Win: Swtiching | Win Rate: Stay-      20%   Swtich-      80%


After 10 simulations:
Wins by switching:          8    |       Win rate:      80 %
Wins by sticking:           2    |       Win rate:      20 %
```
### Results

Outputs shows the results of simulations, indicating that switching doors leads to winning the car approximately 2/3 of the time.

## Contributing

Contributions are welcome! Please fork the repository and submit a pull request with your changes.

<!-- 1. Fork the repository.
2. Create a new branch (`git checkout -b feature-branch`).
3. Make your changes.
4. Commit your changes (`git commit -am 'Add new feature'`).
5. Push to the branch (`git push origin feature-branch`).
6. Create a new pull request. -->

