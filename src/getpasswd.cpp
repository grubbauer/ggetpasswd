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

#include "random.hpp"
#include "getpasswd.hpp"

#include <string>

namespace get {

std::string getpasswd(int length) {

  int counter;
  std::string passwd;
  /* On the first run it shall use a lowercase letter */
 
  passwd = alphabet[grandom::number(0,25)];
  counter++;

  while (counter < length) {
    counter++;
  }
  return passwd;
}
}
