# bits-stdc-on-windows-vscode

Use **MSYS2 MinGW g++** in VS Code (not MSVC) so `#include <bits/stdc++.h>` works on Windows.

## Setup

1. Install MSYS2 and the UCRT64 toolchain (`mingw-w64-ucrt-x86_64-toolchain`).
2. Keep these files in your project:
   - `.vscode/c_cpp_properties.json`
   - `.vscode/tasks.json`
3. Build with **Terminal → Run Build Task**.

> If your MSYS2 path is different, update `C:/msys64/ucrt64/bin/g++.exe` in both VS Code files.
