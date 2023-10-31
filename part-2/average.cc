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
  bool flag = true;
  int size = static_cast<int>(arguments.size());
  for (std::string arg : arguments) {
    if (flag) {
      flag = false;
    } else {
      sum += std::stod(arg);
    }
  }
  double average = sum / (size - 1);
  std::cout << "average = " << average << "\n";
  return 0;
}
