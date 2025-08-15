/* ------------------------------------
 * File:      main.cpp
 * Path:      src/
 * Purpose:   Entry point for program
 *
 * Author:    Raphael G. Grubbauer
 * Created:   2025-08-14
 * Licence:   Apache Licence 2.0
 * Copyright: (c) 2025 Raphael G. Grubbauer
 */

#define VERSION "1.0.0"

#include <iostream>

#include <cxxopts.hpp>

#include "getpasswd.hpp"

void versionInfo();
void licenceInfo();

int main(int argc, char* argv[]) {

  cxxopts::Options options("ggetpasswd", "Lightweight program to generate passwords");
  options.add_options()
    ("h,help", "Displays help text.")
    ("l,length", "Set the length for the string.", cxxopts::value<int>()->default_value("0"))
    ("p,prefix", "Sets a prefix for the string.", cxxopts::value<std::string>()->default_value(""))
    ("s,suffix", "Sets a suffix for the string.", cxxopts::value<std::string>()->default_value(""))
    ("a,amount", "Sets the amount of passwords that shall be generated.", cxxopts::value<int>()->default_value("1"))
    ("v,version", "Display version information.")
    ("L,licence", "Displays licence information.")
    ;
   
  auto result = options.parse(argc, argv);

  if (result.count("help")) {
    std:: cout << options.help() << "\n";
    return 0;
  } else if (result.count("version")) {
    versionInfo();
    return 0;
  } else if (result.count("licence")) {
    licenceInfo();
    return 0;
  }

  int length = result["length"].as<int>();
  int amount = result["amount"].as<int>();
  std::string prefix = result["prefix"].as<std::string>();
  std::string suffix = result["suffix"].as<std::string>();

  if (length == 0) {
    std::cout << "ERROR: Length cannot be empty!\n";
    return 1;
  } 

  int counter = 0;

  while (counter < amount) {
    counter++;
    std::string password = prefix + get::getpasswd(length) + suffix;
    std::cout << password << "\n";
  }

  return 0;
}

void licenceInfo() {
  std::cout << "ggetpasswd is licenced under the Apache Licence 2.0.\n";
  std::cout << "More information at https://www.apache.org/licenses/LICENSE-2.0.html\n\n";

  std::cout << "This project uses cxxopts by jarro2783, licensed under the MIT licence.\n";
  std::cout << "More information at https://github.com/jarro2783/cxxopts?tab=MIT-1-ov-file.\n";
}

void versionInfo() {
  std::cout << "ggetpasswd v" << VERSION << ".\n";
  std::cout << "Compiled for "; 

  #ifdef __linux__
  std::cout << "Linux ";

  #elif _WIN32
  std::cout << "Windows 32-bit ";

  #elif _WIN64
  std::cout << "Windows 64-bit ";

  #elif __APPLE__
  std::cout << "Apple devices ";

  #elif __FreeBSD__
  std::cout << "FreeBSD ";
  #elif __NetBSD__
  std::cout << "NetBSD ";
  #elif __OpenBSD__
  std::cout << "OpenBSD ";
  #elif BSD
  std::cout << "Berkley Software Distribution.\n";

  #else
  std::cout << "Other OS ";
  #endif

  #ifdef __alpha__
  std::cout << "Alpha.\n";
  #elif __amd64__
  std::cout << "AMD64.\n";
  #elif __arm__
  std::cout << "ARM.\n";
  #elif __arm64__
  std::cout << "ARM64.\n";
  #elif defined(__i386__) || defined(_X86_)
  std::cout << "i386.\n";
  #elif __MIPS__
  std::cout << "MIPS.\n";
  #elif __powerpc__
  std::cout << "PowerPC.\n";
  #elif __sparc__
  std::cout << "Sparc.\n";
  #else
  std::cout << "Unknown architecture.";
  #endif
}
