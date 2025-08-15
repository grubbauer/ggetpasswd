/* ------------------------------------
 * File:      getpasswd.cpp
 * Path:      src/
 * Purpose:   Getting password logic
 *
 * Author:    Raphael G. Grubbauer
 * Created:   2025-08-14
 * Licence:   ?
 * Copyright: (c) 2025 Raphael G. Grubbauer
 */

#include "getpasswd.hpp"
#include "random.hpp"

#include <string>

namespace get {
std::string getpasswd(int length) {
  int counter = 0;
  int frowner; /* Variable that is used to determine what array to choose from */
  std::string passwd;

  passwd = alphabet[grandom::number(0, 25)];
  counter++;

  while (counter < length) {
    counter++;

    frowner = grandom::number(0, 3);

    switch (frowner) {
      case 0 :{
        passwd += alphabet[grandom::number(0, 25)];
      } break;
      case 1: {
        passwd += ALPHABET[grandom::number(0, 25)];
      } break;
      case 2: {
        passwd += numbers[grandom::number(0, 9)];
      } break;
      case 3: {
        passwd += symbols[grandom::number(0, 6)];
      } break;
    }
  }
  return passwd;
}
}
