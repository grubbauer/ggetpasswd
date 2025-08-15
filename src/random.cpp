/* ------------------------------------
 * File:      random.cpp
 * Path:      src/
 * Purpose:   Random number generation
 *
 * Author:    Raphael G. Grubbauer
 * Created:   2025-08-14
 * Licence:   Apache Licence 2.0
 * Copyright: (c) 2025 Raphael G. Grubbauer
 */

#include "random.hpp"

#include <random>

namespace grandom {
int number(int min, int max) {
  std::random_device dev;
  std::mt19937 rng(dev());
  std::uniform_int_distribution<std::mt19937::result_type> dist(min, max);

  return dist(rng);
}
}
