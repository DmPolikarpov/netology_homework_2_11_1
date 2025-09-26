#include <iostream>

#include "GreeterStaticLibrary.h"

std::string GreeterStaticLibrary::Greeter::greet(std::string name) { return "Здравствуйте, " + name + "!"; };