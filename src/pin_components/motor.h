#pragma once
#include "common.h"
#include "pinComponent.h"

class Motor : public PinComponent {
  string name;
  string interpolation;
  int64_t start_time;
  vector<pair<double, double>> thrust_curve; // <time, force>

public:
  double getForce(int64_t current);
  Motor(string motor_file, string motor_name);
  void activate(int64_t time);
};
