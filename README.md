# Caesar Cipher

## About the Project

This project implements the Caesar cipher encryption algorithm in C. It encrypts plaintext by shifting each alphabetical character by a user-specified numeric key while preserving letter casing and leaving non-alphabetical characters unchanged.

## How It Works

The program uses modular arithmetic to shift letters through the 26-letter English alphabet, wrapping around when necessary.

For example, with a key of `3`:

* `A` becomes `D`
* `X` becomes `A`
* `Hello, World!` becomes `Khoor, Zruog!`

Spaces, numbers and punctuation remain unchanged.

## Technologies Used

* C
* CS50 Library
* ASCII character manipulation
* Modular arithmetic
* Makefile
* GitHub Codespaces

## How to Run

### Using GitHub Codespaces

I simplified the development process using two configuration files:

* **`.devcontainer/devcontainer.json`** — Automates installation of the CS50 C library when the Codespace is created.
* **`Makefile`** — Defines compiler flags and links the required libraries, simplifying compilation to a single command.

**Steps:**

1. Open this repository on GitHub.

2. Click **Code → Codespaces → Create codespace on main**.

3. Wait for the environment setup to finish.

4. Compile the program:

   ```bash
   make caesar
   ```

5. Run the program with an encryption key:

   ```bash
   ./caesar 3
   ```

6. Enter your plaintext when prompted.

### Manual Compilation

If GCC and the CS50 library are installed, compile and run the program using:

```bash
gcc caesar.c -o caesar -lcs50
./caesar 3
```

## Example

**Input:**

```text
$ ./caesar 3
plaintext: Hello, World!
```

**Output:**

```text
ciphertext: Khoor, Zruog!
```

## Learning Objectives

This project strengthened my understanding of:

* Command-line arguments and input validation.
* String manipulation and ASCII characters.
* Modular arithmetic and alphabet wrapping.
* C compilation and library linking.
* Development environment automation.

