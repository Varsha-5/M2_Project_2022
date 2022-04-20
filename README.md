# AUTOMATIC CAR SEAT WARMER
![image](https://github.com/Varsha-5/M1_Project-name/blob/main/seat%20heater.PNG)

# Badges:

Code Quality 
--------------------- 
 [![Cppcheck](https://github.com/Varsha-5/M2_Project_2022/actions/workflows/CodeQuality.yml/badge.svg)](https://github.com/Varsha-5/M2_Project_2022/actions/workflows/CodeQuality.yml)  [![Valgrind](https://github.com/Varsha-5/M2_Project_2022/actions/workflows/Valgrind.yml/badge.svg)](https://github.com/Varsha-5/M2_Project_2022/actions/workflows/Valgrind.yml)
## Folder structure:

| Folder                |    Description                       |
| :----------------:    | :----------------: |
| `1_Requirements`      | Documents detailing requirements and research |
| `2_Design`            | Documents specifying the flow of the project details |
| `3_Implement`         | Code with Documentation |
| `4_TestOutputs_Plan`  | Documents with Tested output and results |
| `5_Report`            | Documents specifying the project goal and detailing Implementation |
| `6_Images&Videos`     | Relevant images and videos of project implementation |


## Integrated Tools to GitHub

*  [Codacy](https://www.codacy.com/)
*  [Codiga](https://app.codiga.io/home)

## Contributors List and Summary

|S.No. |  Name   |    Features    |No Test Cases|Test Case Pass|
|:---:|:---:|:---:|:---:|:---:|
|1. | Varsha R B  | Complete project   | 6   | 6     |
    

## Challenges Faced and How Was It Overcome

1. **Generation of makefile:** To overcome this problem research on makefiles was done.
2. **Unity testing:** Initially a few testcases did not pass, to overcome this issue debugging of program was performed.


# GitHub Actions
* Build using Make for CI
* Unit tests with Cunit
* Static code analysis using cppcheck
* Dynamic Code analysis using Valgrind
* A Static Analysis using Git-Inspector

## Learning Resources
1. [A Research on Currencies](https://www.nationsonline.org/oneworld/currencies.htm)
2. [Visual Studio Code](https://flaviocopes.com/vscode/)
3. [gcc makefile](https://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html#zz-2.1)
4. [Unity](http://www.throwtheswitch.org/unity)
5. [Makefile](https://makefiletutorial.com)
6. [github workflow](https://docs.github.com/en/actions/learn-github-action)
 

## Project Description

This project implements the idea of a Car seat-heater temperature monitoring system. When a passenger is enters and seats inside a car and switches on the seat heater, the temperature sensor gets activated and starts sending the analog temperature values to ATMEGA328 microcontroller. These values are then displayed on a serial monitor using UART data transmission protocol. 

This project is basically broken into 4 separate modules. The functionality of each module is defined:

*  Activity 1: Activating the temperature sensor when both conditions; passenger is seated inside the car and seat-heater is turned ON; are true.
*  Activity 2: Implementation of Analog-to-Digital converter to did=gitize analog values received from the temperature sensor.  
*  Activity 3: Representation of Temperature values using Pulse Width Modulation in an oscilloscope.
*  Activity 4: Display of temperature data on a serial monitor with the help of UART data transmission protocol.

## Simulation

### Activity 1
<img src = "Simulation/Activity1.gif" width= "600" >

### Activity 2
<img src = "Simulation/Activity2.gif" width= "700" >

### Activity 3
<img src = "Simulation/Activity3.gif" width= "900" >

### Activity 4
<img src = "Simulation/Activity4.gif" width= "900" >

## Integration of all Activies

### Car seat-heater System - ON
<img src = "Simulation/ON.gif" width= "900" >

### Car seat-heater System - OFF
<img src = "Simulation/Off.gif" width= "900" >

## Code Quality and Continuous integration 

| Build | Codacy | CppCheck |
|:-------:|:-------:|:------:|
| [![Linux-Compile](https://github.com/Pallavi-2500/Emb-C-Activity-1/actions/workflows/CodeCompile.yml/badge.svg)](https://github.com/Pallavi-2500/Emb-C-Activity-1/actions/workflows/CodeCompile.yml) | [![Codacy Badge](https://app.codacy.com/project/badge/Grade/6ba094bda54e4ce19e67160b1e349322)](https://www.codacy.com/gh/Pallavi-2500/Emb-C-Activity-1/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Pallavi-2500/Emb-C-Activity-1&amp;utm_campaign=Badge_Grade) | [![Cppcheck](https://github.com/Pallavi-2500/Emb-C-Activity-1/actions/workflows/CodeQuality.yml/badge.svg)](https://github.com/Pallavi-2500/Emb-C-Activity-1/actions/workflows/CodeQuality.yml) | 
