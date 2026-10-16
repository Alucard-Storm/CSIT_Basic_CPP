# Setting up your C++ environment

You need two things: a **C++ compiler** and a **text editor**. Pick the section for your system. Whatever you choose, the check at the end is the same.

> No admin rights or a locked-down lab PC? Skip to [Online compiler](#online-compiler-no-installation).

## Linux (Ubuntu / Debian)

```bash
sudo apt update
sudo apt install g++ make
g++ --version
```

Fedora: `sudo dnf install gcc-c++ make`.

## Windows (MSYS2 / MinGW-w64)

1. Download and run the installer from <https://www.msys2.org>.
2. Open the **MSYS2 UCRT64** terminal and run:
   ```bash
   pacman -S mingw-w64-ucrt-x86_64-gcc make
   ```
3. Add `C:\msys64\ucrt64\bin` to your Windows **PATH** (Settings → search "environment variables" → Path → New).
4. Open a new Command Prompt or PowerShell and run `g++ --version`.

Alternative: install **WSL** (`wsl --install` in an administrator PowerShell) and follow the Linux instructions.

## macOS

```bash
xcode-select --install
clang++ --version
```

On macOS `g++` is an alias for Apple's `clang++`; the commands in this course work unchanged.

## Editor: VS Code

1. Install [VS Code](https://code.visualstudio.com).
2. Install the **C/C++** extension (Microsoft).
3. Open this repository folder with *File → Open Folder*.
4. Open the built-in terminal (<kbd>Ctrl</kbd>+<kbd>`</kbd>) and compile from there as shown below.

## Compile and run

```bash
g++ -std=c++17 -Wall -Wextra -o prog hello.cpp
./prog            # on Windows: prog.exe
```

- `-std=c++17` uses a modern, standard version of the language.
- `-Wall -Wextra` turn on warnings. **Read them**; they usually point to real bugs.
- `-o prog` names the output program.

## Check your setup

```bash
g++ -std=c++17 -Wall -Wextra -o prog units/01-introduction/examples/hello.cpp
./prog
```

You should see `Hello, World!`. If you do, you are ready for [Unit 01](../units/01-introduction/README.md).

## Online compiler (no installation)

Paste your code into any browser compiler, for example <https://www.onlinegdb.com/online_c++_compiler> or <https://godbolt.org>. Choose C++17. Good for the first weeks; a local setup is better once you use files (Unit 12).

## Troubleshooting

| Message | Likely cause |
|---------|--------------|
| `g++: command not found` | compiler not installed or not on PATH; reopen the terminal |
| `No such file or directory` | you are in the wrong folder; check with `pwd` / `ls` (`cd` / `dir` on Windows) |
| `expected ';' before ...` | a missing semicolon, usually on the line *above* the one reported |
| `undefined reference to 'main'` | the file has no `main()` function |
| Program window closes immediately (IDE) | run it from a terminal instead |
