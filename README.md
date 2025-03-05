# Gurkpad - A Minimalist Text Editor

Gurkpad is a lightweight, terminal-based text editor inspired by the **kilo** editor. It features syntax highlighting and is otherwise a simple, distraction-free editing experience. The project is written in **C** and designed to be easily extensible.

## Features
✅ **Syntax highlighting** for multiple languages (extendable)
✅ **Smooth navigation** with arrow keys
✅ **Minimalist interface**
✅ **Find/Search functionality**
✅ **Cross-platform** (Linux & macOS, Windows with WSL)

## Installation
### **Requirements**
- A C compiler (e.g., `gcc`)
- `make` (optional, but recommended)

### **Arch Linux Users**
Gurkpad is available in the AUR:
```sh
yay -S gurkpad
```

### **Build Instructions**
```sh
# Clone the repository
git clone https://github.com/stefexec/gurkpad.git
cd gurkpad

# Compile the editor
make

# Run the editor
./gurkpad filename.txt
```
## Usage
- Open a file: `./gurkpad filename.txt`
- Save: `Ctrl + S`
- Quit: `Ctrl + Q`
- Find: `Ctrl + F`
- Navigate: Arrow keys

## Syntax Highlighting
Gurkpad currently supports:
- **C** (`.c`, `.h`, `.cpp`)
- **Python** (`.py`)

Want to add more languages? Edit `syntax.c` and define new syntax rules!

## Contributing
1. Fork the repository
2. Create a new branch (`git checkout -b feature-branch`)
3. Make your changes and commit (`git commit -m "Added new feature"`)
4. Push to your fork and submit a pull request

## License
This project is licensed under the **GPL License**.
---
🚀 Happy coding with Gurkpad!

