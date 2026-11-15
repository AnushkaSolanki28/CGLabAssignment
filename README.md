# Computer Graphics and Multimedia (CGM) Lab Assignments

**Student Name:** Anushka Solanki  
**Roll No:** IC-2K24-20  

---

## Assignments

### [Lab 1: Basic Shapes](Lab1/readme.md)
Implementation of basic computer graphics primitives using `graphics.h`:
- Straight Line
- Circle
- Rectangle
- Triangle

### [Lab 2: DDA Line Drawing Algorithm](Lab2/README.md)
Implementation of the Digital Differential Analyzer (DDA) algorithm to draw a straight line between two user-specified endpoints `(x1, y1)` and `(x2, y2)`.

---

## Environment & Build Setup

- **IDE:** Visual Studio Code
- **Compiler:** MSYS2 UCRT64 GCC/G++ (`x86_64-w64-mingw32`)
- **Graphics Library:** WinBGIm (`graphics.h`, `libbgi.a`)
- **Compilation Command:**
  ```bash
  g++ -g filename.cpp -o filename.exe -lbgi -lgdiplus -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32
  ```
