// Copyright 2022 Trukhanov Artem
#ifndef MODULES_TRUKHANOV_ARTEM_EULER_FUNCTION_INCLUDE_EULER_FUNCTION_APP_H_
#define MODULES_TRUKHANOV_ARTEM_EULER_FUNCTION_INCLUDE_EULER_FUNCTION_APP_H_

#include <string>

class Application {
 public:
  std::string operator()(int argc, const char* argv[]);
 private:
  static inline std::string help(const char* appname);
};

#endif  // MODULES_TRUKHANOV_ARTEM_EULER_FUNCTION_INCLUDE_EULER_FUNCTION_APP_H_
