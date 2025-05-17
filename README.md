# clsDate - A Comprehensive C++ Date Handling Class

## Overview

`clsDate` is a powerful and flexible C++ class designed to manage and manipulate dates with ease. It includes a wide range of features for date validation, formatting, arithmetic operations, and calendar utilities.

This project aims to provide developers with a ready-to-use and extensible date handling solution in C++, covering most common date-related operations out of the box.

---

## Features

- ✅ Multiple constructors: from day/month/year, string date, or day-order in year  
- 📅 Date formatting and parsing  
- 📆 Calendar utilities: print month/year calendar  
- 🧮 Date arithmetic: add/subtract days, weeks, months, years, decades, centuries, and millennia  
- 🧪 Date comparison: before, after, equal  
- 🔍 Date information:
  - Leap year detection  
  - Day of week, short names, and month names  
  - Number of days/hours/minutes/seconds in month/year  
- 📈 Business logic support:
  - Business day/weekend check  
  - Days until end of week/month/year  
- 🔄 System date utilities and difference calculations  
- 🔁 Swap dates and age calculator

---

## Usage

To use `clsDate`, simply include the `clsDate.h` and `clsString.h` headers in your project.

Example:
```cpp
#include "clsString.h"
#include "clsDate.h"

int main() {
    clsDate today;
    today.Print(); // Prints current system date

    clsDate birthDate("01/01/2000");
    int ageInDays = clsDate::CalculateMyAgeInDays(birthDate);
    std::cout << "Age in days: " << ageInDays << std::endl;

    return 0;
}
```

## Dependencies
- Requires clsString class for Split(string, char) function see [String Libray repo here](https://github.com/Ali-Al-Razaj/String-Library.git)

- Standard C++ library (iostream, string, vector, ctime).