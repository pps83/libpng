#ifdef _MSC_VER
#pragma warning(disable: 4996)
#endif

#if defined(__x86_64__) || defined(_M_X64) || defined(__i386__) || defined(_M_IX86)
#define PNG_INTEL_SSE
#endif

#if defined(__aarch64__) || defined(_M_ARM64) || defined(__arm__) || defined(_M_ARM)
#define PNG_ARM_NEON_OPT 2
#endif

#include "png.c"
#include "pngerror.c"
#include "pngget.c"
#include "pngmem.c"
#include "pngpread.c"
#include "pngread.c"
#include "pngrio.c"
#include "pngrtran.c"
#include "pngrutil.c"
#include "pngset.c"
#include "pngtrans.c"
#include "pngwio.c"
#include "pngwrite.c"
#include "pngwtran.c"
#include "pngwutil.c"

#if defined(__x86_64__) || defined(_M_X64) || defined(__i386__) || defined(_M_IX86)
#include "intel/intel_init.c"
#include "intel/filter_sse2_intrinsics.c"
#endif

#if defined(__aarch64__) || defined(_M_ARM64) || defined(__arm__) || defined(_M_ARM)
#include "arm/arm_init.c"
#include "arm/filter_neon_intrinsics.c"
#endif

#ifdef _WINDLL
#include "zlib.cpp"
#endif
