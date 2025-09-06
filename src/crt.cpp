#include "crt_exit.hpp"

extern int main() noexcept;

extern "C" void __gxx_personality_v0(int, void*) noexcept {}

extern "C" [[noreturn]] void _Ether_() noexcept
{
  int ret{main()};
  Ether::CRT::exit(ret);
}
