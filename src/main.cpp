/* ------------------------------------
 * File:      main.cpp
 * Path:      src/
 * Purpose:   Entry point for program
 *
 * Author:    Raphael G. Grubbauer
 * Created:   2025-08-14
 * Licence:   ?
 * Copyright: (c) 2025 Raphael G. Grubbauer
 */

#include <iostream>

#include <getpasswd.hpp>

int main() {

  std::cout << get::getpasswd(10) << "\n"; 

  return 0;
}
