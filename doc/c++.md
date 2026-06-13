## [download]
#### search msys2 
#### download msys2-x86_64-20260611.exe

## [install]
#### msys2 ucrt64 :
```
pacman -Syu
pacman -S mingw-w64-ucrt-x86_64-gcc
```
#### cmd : 
```
g++ --version
```

## [path]
#### C:\Windows\System32
#### C:\Windows
#### C:\Windows\System32\WindowsPowerShell\v1.0\
#### C:\msys64\ucrt64\bin

## [build]
#### ctrl + shift + b
###### or
#### g++ -std=c++14 main.cpp -o main.exe

## [run]
#### ./main.exe
###### or
#### .\main.exe