#include <boost/mpi/communicator.hpp>
#include <boost/mpi/environment.hpp>
#include <functional>
#include <iostream>
#include <iomanip>

#include <parallel_integrate.hpp>
namespace mpi = boost::mpi;

int main()    // NOLINT(bugprone-exception-escape)
{
  const mpi::environment env;
  const mpi::communicator world;
  auto func = [](double x) { return 1 / (x * x + 1); };
  const double result = parallel::integrate(world, func, 0.0, 1.0, 2e9) * 4;
  // NOLINTNEXTLINE(cppcoreguidelines-avoid-magic-numbers,readability-magic-numbers)
  if (world.rank() == 0) { std::cout << std::setprecision(15) << "The result is: " << result << '\n'; }
  return 0;
}