# CVector

![Made with C](https://img.shields.io/badge/made%20with-c-0.svg?color=cc2020&labelColor=ff3030&logo=data%3Aimage%2Fsvg%2Bxml%3Bbase64%2CPHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAxMjggMTI4Ij48cGF0aCBmaWxsPSIjNjU5QUQzIiBkPSJNMTE1IDMxTDY3IDNsLTMtMS0zIDEtNDggMjhjLTIgMS0zIDMtMyA1djU2bDEgMyAxMDctNjItMy0yeiIvPjxwYXRoIGZpbGw9IiMwMzU5OUMiIGQ9Ik0xMSA5NWwyIDIgNDggMjggMyAxIDMtMSA0OC0yOGMyLTEgMy0zIDMtNVYzNmwtMS0zTDExIDk1eiIvPjxwYXRoIGZpbGw9IiNmZmYiIGQ9Ik04NSA3NmEyNSAyNSAwIDEgMSAwLTI0bDEzLTdhNDAgNDAgMCAxIDAgMCAzOWwtMTMtOHoiLz48L3N2Zz4%3D&style=for-the-badge)

![GitHub](https://img.shields.io/github/license/DeBos99/cvector.svg?color=2020cc&labelColor=5050ff&style=for-the-badge)
![GitHub followers](https://img.shields.io/github/followers/DeBos99.svg?color=2020cc&labelColor=5050ff&style=for-the-badge)
![GitHub forks](https://img.shields.io/github/forks/DeBos99/cvector.svg?color=2020cc&labelColor=5050ff&style=for-the-badge)
![GitHub stars](https://img.shields.io/github/stars/DeBos99/cvector.svg?color=2020cc&labelColor=5050ff&style=for-the-badge)
![GitHub watchers](https://img.shields.io/github/watchers/DeBos99/cvector.svg?color=2020cc&labelColor=5050ff&style=for-the-badge)
![GitHub contributors](https://img.shields.io/github/contributors/DeBos99/cvector.svg?color=2020cc&labelColor=5050ff&style=for-the-badge)

![GitHub commit activity](https://img.shields.io/github/commit-activity/w/DeBos99/cvector.svg?color=ffaa00&labelColor=ffaa30&style=for-the-badge)
![GitHub commit activity](https://img.shields.io/github/commit-activity/m/DeBos99/cvector.svg?color=ffaa00&labelColor=ffaa30&style=for-the-badge)
![GitHub commit activity](https://img.shields.io/github/commit-activity/y/DeBos99/cvector.svg?color=ffaa00&labelColor=ffaa30&style=for-the-badge)
![GitHub last commit](https://img.shields.io/github/last-commit/DeBos99/cvector.svg?color=ffaa00&labelColor=ffaa30&style=for-the-badge)

![GitHub issues](https://img.shields.io/github/issues-raw/DeBos99/cvector.svg?color=cc2020&labelColor=ff3030&style=for-the-badge)
![GitHub closed issues](https://img.shields.io/github/issues-closed-raw/DeBos99/cvector.svg?color=10aa10&labelColor=30ff30&style=for-the-badge)

[![Donate](https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif)](https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=NH8JV53DSVDMY)

**CVector** is cross-platform vector library for C.

## Content

- [Content](#content)
- [Installation](#installation)
  - [Windows](#windows)
  - [Unix](#unix)
    - [Debian/Ubuntu](#apt)
    - [Arch Linux/Manjaro](#pacman)
    - [CentOS](#yum)
    - [MacOS](#homebrew)
- [Usage](#usage)
- [Documentation](#documentation)
  - [Vector](#vector)
    - [Variables](#vector-variables)
    - [Methods](#vector-methods)
  - [VectorItem](#vectoritem)
    - [Variables](#vectoritem-variables)
    - [Methods](#vectoritem-methods)
- [Authors](#authors)
- [Contact](#contact)
- [License](#license)

## Installation

### Windows

* Install [Make](http://gnuwin32.sourceforge.net/packages/make.htm).
* Install [MinGW](https://sourceforge.net/projects/mingw-w64/files/latest/download).
* Run following command in the terminal:
```
git clone "https://github.com/DeBos99/cvector.git"
make -C cvector
```

### Unix

#### <a name="APT">Debian/Ubuntu based

* Run following commands in the terminal:
```
sudo apt install git gcc -y
git clone "https://github.com/DeBos99/cvector.git"
make -C cvector
```

#### <a name="Pacman">Arch Linux/Manjaro

* Run following commands in the terminal:
```
sudo pacman -S git gcc --noconfirm
git clone "https://github.com/DeBos99/cvector.git"
make -C cvector
```

#### <a name="YUM">CentOS

* Run following commands in the terminal:
```
sudo yum install git gcc -y
git clone "https://github.com/DeBos99/cvector.git"
make -C cvector
```

#### <a name="Homebrew">MacOS

* Run following commands in the terminal:
```
brew install git gcc
git clone "https://github.com/DeBos99/cvector.git"
make -C cvector
```

## Usage

* Move **cvector** to your project directory
* Add `#include "cvector/vector.h"` and `#include "cvector/vector_item.h"` to your source files
* Link **vector.a** file during compilation e.g. `gcc main.c -Lcvector -lvector`

## Documentation

### Vector

#### <a name="vector-variables">Variables

| Variable           | Description                         |
| :----------------- | :---------------------------------- |
| VectorItem** items | Items in the vector.                |
| size_t size        | Number of items in the vector.      |
| size_t capacity    | Number of items the vector can fit. |

#### <a name="vector-methods">Methods

| Method                                                    | Description                                                                               |
| :-------------------------------------------------------- | :---------------------------------------------------------------------------------------- |
| Vector* Vector_new(VectorItem** items,size_t items_count) | Returns vector with **items_count** **items**.                                            |
| Vector* Vector_dump(Vector* self)                         | Returns deep copy of **self**.                                                            |
| void Vector_copy(Vector* destination,Vector* source)      | Deep copies **source** to **destination**.                                                |
| bool Vector_equal(Vector* a,Vector* b)                    | Returns **true** if **a** and **b** are identical or **false** if not.                    |
| void Vector_free(Vector* self)                            | Frees memory used by **self**.                                                            |
| void Vector_contract(Vector* self)                        | Contracts **self**.                                                                       |
| void Vector_expand(Vector* self)                          | Expands **self**.                                                                         |
| VectorItem* Vector_get(Vector* self,unsigned int index)   | Returns **index**-item from **self**.                                                     |
| void Vector_push(Vector* self,VectorItem* item)           | Pushes **item** to **self**.                                                              |
| VectorItem* Vector_pop(Vector* self)                      | Returns and removes item from **self**.                                                   |
| unsigned int Vector_find(Vector* self,VectorItem* item)   | Returns index of **item** in **self** or **size** of **self** if **item** is not present. |

### VectorItem

#### <a name="vectoritem-variables">Variables

| Variable    | Description        |
| :---------- | :----------------- |
| void* value | Value of the item. |
| size_t size | Size of the item.  |

#### <a name="vectoritem-methods">Methods

| Method                                                           | Description                                                            |
| :--------------------------------------------------------------- | :--------------------------------------------------------------------- |
| VectorItem* VectorItem_new(void* value,size_t size)              | Returns vector item with **value** of size **size**.                   |
| VectorItem* VectorItem_dump(VectorItem* self)                    | Returns deep copy of **self**.                                         |
| void VectorItem_copy(VectorItem* destination,VectorItem* source) | Deep copies **source** to **destination**.                             |
| bool VectorItem_equal(VectorItem* a,VectorItem* b)               | Returns **true** if **a** and **b** are identical or **false** if not. |
| void VectorItem_free(VectorItem* self)                           | Frees memory used by **self**.                                         |

## Authors

* **Michał Wróblewski** - Main Developer - [DeBos99](https://github.com/DeBos99)

## Contact

Discord: DeBos#3292

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
