﻿#include "stdafx.h"
#include <iostream>

using namespace std;

auto autoFunction(double x)
{
  return x * 2;
}

int main()
{
  auto result = autoFunction(2.2);
  cout << "result: " << result << "; result type: " << typeid(result).name() << "\n";

  system("PAUSE");
  return 0;
}

