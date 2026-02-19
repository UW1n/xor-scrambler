# XOR CLI Scrambler (c++)

This is a simple command-line XOR encryption and decrypition tool.

## Purpose

The purpose for the creation of this project is to learn:
-C++ programming
-Header file structure
-Basic cryptography concepts

## Features

-Encrypt text using XOR cipher
-Decrypt text using XOR cipher

## How to compile and run 
To compile:
g++ main.cpp encrypt.cpp -o main.exe

To execute:
./main.exe

## Usage Example

Input:
- Mode: Scramble (1)
- Text: `helloworld`
- Key: `K` 
Output:
- Result: `#.''$<$9'/`

Verification:
Running the tool in Unscramble (2) mode with the same key `K` and the scrambled result will return the original text `helloworld`.

## Usage notes

Case Sensitivity: The key is case-sensitive (e.g., 'K' ≠ 'k') because they have different bit patterns.

Non-Printable Characters: XOR operations may produce non-printable ASCII control characters. If the output appears truncated, it likely contains control characters. To ensure accurate results, copy the entire output string, including any whitespace.
