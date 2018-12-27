/*
This file is part of Bettergram.

For license and copyright information please follow this link:
https://github.com/bettergram/bettergram/blob/master/LEGAL
*/
#pragma once

#include <QtCore/QString>
#include <QtCore/QStringList>

namespace codegen {
namespace lang {

struct Options {
	QString outputPath = ".";
	QString inputPath;
};

// Parsing failed if inputPath is empty in the result.
Options parseOptions();

} // namespace lang
} // namespace codegen
