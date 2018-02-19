#ifdef _MSC_VER
#pragma warning(disable: 4996)
#endif

#define PNG_INTEL_SSE

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

#include "intel/intel_init.c"
#include "intel/filter_sse2_intrinsics.c"

#ifdef _WINDLL
#include "zlib.cpp"
#endif
