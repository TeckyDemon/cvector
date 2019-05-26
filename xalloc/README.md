# Xalloc

**Xalloc** is cross-platform C library that adds error handling to malloc, calloc, realloc and fopen functions.

## Content

- [Content](#content)
- [Prerequisites](#prerequisites)
  - [Windows](#windows)
- [Installation](#installation)
- [Documentation](#documentation)
  - [Methods](#methods)
- [Authors](#authors)
- [License](#license)

## Prerequisites

### Windows

Install **make** and **mingw**.

## Installation

```
git clone "https://github.com/DeBos99/xalloc.git"
cd xalloc
make
cd ..
```

* Move **xalloc.h** and **xalloc.a** to your project directory
* Add `#include "xalloc.h"` to your source files
* Link **xalloc.a** file during compilation e.g. `gcc main.c -L. -lxalloc`

## Documentation

### Methods

| Method                                                      | Description                                                                                                                               |
| :---                                                        | :---                                                                                                                                       |
| void* malloc(size_t size)                                   | Allocates **size** bytes in memory, checks for allocation erros and returns pointer to allocated memory.                                |
| void* \_\_wrap_malloc(size_t size)                          | Synonymous with **malloc(size)**.                                                                                                         |
| void* \_\_old_malloc(size_t size)                           | Allocates **size** bytes in memory and returns pointer to allocated memory.                                                             |
| void* calloc(size_t nitems,size_t size)                     | Allocates **size** bytes in memory and initializes them with zeroes, checks for allocation errors and returns pointer to allocated memory. |
| void* \_\_wrap_calloc(size_t nitems,size_t size)            | Synonymous with **calloc(nitems,size)**.                                                                                                   |
| void* \_\_old_calloc(size_t nitems,size_t size)             | Allocates **size** bytes in memory and initializes them with zeroes and returns pointer to allocated memory.                               |
| void* realloc(void* ptr,size_t size)                        | Resizes memory at **ptr** to **size** bytes, checks for allocation errors and returns pointer to reallocated memory.                  |
| void* \_\_wrap_realloc(void* ptr,size_t size)               | Synonymous with **realloc(ptr,size)**.                                                                                                     |
| void* \_\_old_realloc(void* ptr,size_t size)                | Resizes memory at **ptr** to **size** bytes and returns pointer to reallocated memory.                                                |
| FILE* fopen(const char* filename,const char* mode)          | Opens the **filename** file with **mode** mode and checks for errors.                                                                   |
| FILE* \_\_wrap_fopen(const char* filename,const char* mode) | Synonymous with **fopen(filename,mode)**.                                                                                                 |
| FILE* \_\_old_fopen(const char* filename,const char* mode)  | Opens the **filename** file with **mode** mode.                                                                                           |

## Authors

* **Michał Wróblewski** - Main Developer - [DeBos99](https://github.com/DeBos99)

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details.
