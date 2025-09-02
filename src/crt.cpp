#include "crt_exit.hpp"

extern int main();

extern "C" void  _Ether_() noexcept
{
    int ret{main()};
    Ether::exit(ret);
}