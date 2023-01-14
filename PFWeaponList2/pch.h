// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.

#ifndef PCH_H
#define PCH_H

#define PFWLLOAD 1

// add headers that you want to pre-compile here
#ifndef LEAN
#include "framework.h"
#endif

#include <vector>
#include <iostream>
#include <string>

//wide character libraries
#include <wchar.h>
#include <cwchar>

//limit libraries
#include <limits>
#include <limits.h>

//utility libraries
#include <stdlib.h>
#include <cstdlib>

#include <codecvt>
#include <locale>
#include <cerrno>
#include <errno.h>

#ifndef ex
#define ex __declspec(dllexport)
#endif


#endif //PCH_H
