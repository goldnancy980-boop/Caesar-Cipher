# Caesar Cipher

## Project Overview

Caesar is a C program I implemented as part of the Week 2 Caesar problem set. It encrypts messages by shifting alphabetical characters by a specified number of positions using the Caesar cipher.

The program accepts an encryption key through the command line, prompts the user to enter plaintext and prints the resulting ciphertext.

## How It Works

1. Checks that exactly one command-line argument is provided.
2. Checks that the key is not empty and contains only digits.
3. Converts the key from a string to an integer.
4. Prompts the user to enter plaintext.
5. Encrypts alphabetical characters using the Caesar cipher formula.
6. Preserves uppercase and lowercase letters while leaving non-alphabetical characters unchanged.
7. Prints the encrypted message.

## Requirements

* A C compiler
* The CS50 C Library

## How to Get the CS50 Library

This program uses `get_string()` from the CS50 C Library.

**Option 1: CS50 Codespace**

Visit [CS50 Codespace](https://cs50.dev/). The library is available in this environment.

**Option 2: Ubuntu or Debian**

Run these commands in your terminal:

```bash
curl -s https://packagecloud.io/install/repositories/cs50/repo/script.deb.sh | sudo bash
sudo apt install libcs50
```

## How to Compile and Run

Save the program as `caesar.c`.

In CS50 Codespace, compile the program:

```bash
make caesar
```

Run it with an encryption key, such as `3`:

```bash
./caesar 3
```

## Example

**Input:**

```text
./caesar 3
Plaintext: Hello, World!
```

**Output:**

```text
Ciphertext: Khoor, Zruog!
```

## Technologies Used

* C
* CS50 C Library
* `ctype.h`
* `stdio.h`
* `stdlib.h`
* `string.h`

## What I Learned

* Working with command-line arguments.
* Validating user input.
* Converting strings to integers.
* Using character functions to identify alphabetical characters and letter cases.
* Applying the Caesar cipher encryption formula.
* Manipulating strings in C.
