/* ------------------------------------
 * File:      getpasswd.hpp
 * Path:      include
 * Purpose:   Getting password header file
 *
 * Author:    Raphael G. Grubbauer
 * Created:   2025-08-15
 * Licence:   ?
 * Copyright: (c) 2025 Raphael G. Grubbauer
 */

#include <string>

namespace get {
const std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
const std::string ALPHABET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const std::string numbers = "1234567890";
const std::string symbols = "!$%*&@#";

std::string getpasswd(int length);
}
