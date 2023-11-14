# Car Class Project

The Car Class Project is a C++ program that demonstrates various object-oriented programming (OOP) principles. It includes classes for Cars, SportsCars, and Trucks, showcasing OOP concepts such as class inheritance, constructor overloading, and encapsulation.

## Table of Contents

- [Features](#features)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Data](#data)
- [Contributing](#contributing)

## Features

- **Car Class**: The base class representing basic information about a car, including make, model, and year built.

- **SportsCar Class**: A derived class inheriting from Car, with additional attributes such as top speed and zero to 60 time.

- **Truck Class**: Another derived class from Car, with attributes for cargo size and maximum cargo weight.

## Getting Started

To get started with this project, you will need:

- A C++ development environment (e.g., g++, Visual Studio, Xcode).
- Clone or download this repository to your local machine.

## Usage

1. Open the project in your C++ development environment.
2. Compile and run the `main.cpp` file.
3. The program will create instances of Car, SportsCar, and Truck classes, set their attributes, and display their information.

```bash
g++ -o .\bin\build .\src\Main.cpp .\src\Car.cpp .\src\SportsCar.cpp .\src\Truck.cpp
```

```bash
.\bin\build.exe
```

## Data

Below is a summary of the data used for creating and displaying objects of the SportsCar and Truck classes in the C++ program.

| Attribute            | Charger (SportsCar) | Mack (Truck) | Corvette (SportsCar) | Kenworth (Truck) |
| -------------------- | ------------------- | ------------ | -------------------- | ---------------- |
| Make                 | Dodge               | Mack         | Chevy                | Kenworth         |
| Model                | Charger             | Mack         | Corvette             | Kenworth         |
| Year                 | 1979                | -            | 1969                 | -                |
| Top Speed            | 190 mph             | -            | 205 mph              | -                |
| Zero to Sixty        | 3.2 s               | -            | 3.1 s                | -                |
| Cargo Size (Cu. Ft.) | -                   | 4557 Cu. Ft. | -                    | 3448 Cu. Ft.     |
| Max Cargo Weight     | -                   | 40,000 lbs   | -                    | 25,000 lbs       |

## Contributing

We welcome contributions to the Car Class Project! If you'd like to contribute, please follow these steps:

1. Fork the repository on GitHub.
2. Create a new branch with a descriptive name for your feature or bug fix.
3. Make your changes and commit them with clear and concise messages.
4. Push your changes to your fork.
5. Submit a pull request to the main repository, explaining the purpose of your changes.

I appreciate your contributions and feedback!
