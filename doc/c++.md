---------------------------------------------------
[download]
1. search msys2
2. link https://www.msys2.org/
3. click msys2-x86_64-20260611.exe
---------------------------------------------------
[install]
msys2 ucrt64 : pacman -Syu
msys2 ucrt64 : pacman -S mingw-w64-ucrt-x86_64-gcc
cmd : g++ --version
---------------------------------------------------
[path]
C:\Windows\System32
C:\Windows
C:\Windows\System32\WindowsPowerShell\v1.0\
C:\msys64\ucrt64\bin
---------------------------------------------------
[build]
1. g++ -std=c++14 main.cpp -o main
2. ctrl + shift + b
---------------------------------------------------
[run]
./main.exe
.\main.exe
---------------------------------------------------