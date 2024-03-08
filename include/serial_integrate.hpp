#ifndef SERIAL_INTEGRATE_HPP
#define SERIAL_INTEGRATE_HPP
#include <serial_integrate_export.hpp>
#include <functional>

namespace serial {
/**
 * @brief Integrate a R->R function using the trapezoidal rule
 *
 * @param f The function to integrate
 * @param a The lower limit of integration
 * @param b The upper limit of integration
 * @param n The number of trapezoids to use
 * @return double
 */
double integrate(std::function<double(double)> f, double a, double b, int n);
}// namespace serial

#endif// SERIAL_INTEGRATE_HPP