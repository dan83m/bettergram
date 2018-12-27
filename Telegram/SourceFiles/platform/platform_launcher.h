/*
This file is part of Bettergram.

For license and copyright information please follow this link:
https://github.com/bettergram/bettergram/blob/master/LEGAL
*/
#pragma once

namespace Platform {

//class Launcher : public Core::Launcher {
//public:
//	Launcher(int argc, char *argv[]);
//
//	...
//
//};

} // namespace Platform

// Platform dependent implementations.

#ifdef Q_OS_MAC
#include "platform/mac/launcher_mac.h"
#elif defined Q_OS_LINUX // Q_OS_MAC
#include "platform/linux/launcher_linux.h"
#elif defined Q_OS_WINRT || defined Q_OS_WIN // Q_OS_MAC || Q_OS_LINUX
#include "platform/win/launcher_win.h"
#endif // Q_OS_MAC || Q_OS_LINUX || Q_OS_WINRT || Q_OS_WIN
