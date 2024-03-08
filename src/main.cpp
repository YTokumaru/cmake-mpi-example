#include <boost/mpi/environment.hpp>
#include <boost/mpi/communicator.hpp>
#include <iostream>
namespace mpi = boost::mpi;

int main()      // NOLINT(bugprone-exception-escape)
{
  const mpi::environment env;
  const mpi::communicator world;
  std::cout << "I am process " << world.rank() << " of " << world.size()
            << "." << '\n';
  return 0;
}