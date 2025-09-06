#include "crt_exit.hpp"

#if defined(_WIN32)
extern "C" __declspec(dllimport) __declspec(noreturn) void __stdcall ExitProcess(unsigned int uExitCode) noexcept;

 [[noreturn]] void Ether::CRT::exit(int value) noexcept
 {
   ::ExitProcess(static_cast<unsigned int>(value));
 }
#else
 [[noreturn]] void Ether::CRT::exit(int value) noexcept
 {

 }
#endif