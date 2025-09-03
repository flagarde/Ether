if("${CMAKE_GENERATOR_PLATFORM}" STREQUAL "Win32")
  set(KERNEL32_LIB_ARCH "x86")
elseif("${CMAKE_GENERATOR_PLATFORM}" STREQUAL "x64")
  set(KERNEL32_LIB_ARCH "x64")
elseif()
  set(KERNEL32_LIB_ARCH "arm64")
endif()
find_library(KERNEL32_LIB
             NAMES kernel32
             HINTS "$ENV{ProgramFiles}/Windows Kits/10/Lib/${CMAKE_VS_WINDOWS_TARGET_PLATFORM_VERSION}/um/${KERNEL32_LIB_ARCH}")
mark_as_advanced(KERNEL32_LIB)
include(FindPackageHandleStandardArgs)
find_package_handle_standard_args(Kernel32 REQUIRED_VARS KERNEL32_LIB)

if(KERNEL32_LIB)
  add_library(Kernel32 SHARED IMPORTED GLOBAL)
  set_target_properties(Kernel32 PROPERTIES IMPORTED_IMPLIB "${KERNEL32_LIB}")
endif()

unset(KERNEL32_LIB_ARCH)
unset(KERNEL32_LIB)

