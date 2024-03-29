#include <serial_integrate.hpp>
#include <functional>

double serial::integrate(const std::function<double(double)> &func, double start, double end, int num)
{
  const double delta = (end - start) / num;
  double sum = 0.5 * (func(start) + func(end));     // NOLINT(cppcoreguidelines-avoid-magic-numbers,readability-magic-numbers)
  for (int i = 1; i < num; ++i) { sum += func(start + i * delta); }
  return sum * delta;
}