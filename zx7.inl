#pragma once

/*********************************************************************************************************
 To include the zx7 code in your project include this .inl file at exactly once instead of zx7.h
 *********************************************************************************************************/

#include "zx7.h"

#include "zx7.c"
#include "dzx7.c"

// compression routines are offline only
#if !TARGET_PRIZM
#include "compress.c"
#include "optimize.c"
#endif