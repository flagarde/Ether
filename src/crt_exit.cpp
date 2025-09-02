#include "crt_exit.hpp"

#if defined(_WIN32)
#if !defined(_WIN32_WINNT_WIN10_TH2)
   #define _WIN32_WINNT_WIN10_TH2 0
#endif
#if !defined(_WIN32_WINNT_WIN10_RS1)
   #define _WIN32_WINNT_WIN10_RS1 0
#endif
#if !defined(_WIN32_WINNT_WIN10_RS3)
   #define _WIN32_WINNT_WIN10_RS3 0
#endif
#if !defined(_WIN32_WINNT_WIN10_RS4)
   #define _WIN32_WINNT_WIN10_RS4 0
#endif
#if !defined(NTDDI_WIN11_DT)
   #define NTDDI_WIN11_DT 0
#endif
#include <Windows.h>
 void Ether::exit(int value)
 {
   ::ExitProcess(static_cast<UINT>(value));
 }
#else

#endif