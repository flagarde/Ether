#if defined(_WIN32)
  #ifdef EXPORT
    #define API __declspec(dllexport)
  #else
    #define API __declspec(dllimport)
  #endif
#else
  #define API __attribute__((visibility("default")))
#endif