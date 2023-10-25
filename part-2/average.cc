// Sachit Sougu
// ssougu@csu.fullerton.edu
// @ssougu
// Partners: @mattcatt0930, @vibhorbh

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number\n";
    return 1;
  }
  double sum = 0.0;
  for (int array_value = 1; array_value < arguments.size(); array_value++) {
    sum += std::stod(arguments.at(array_value));
  }
  double average = sum / (arguments.size() - 1);
  std::cout << "average = " << average << "\n";
  return 0;
}
