/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#include "quantum.h"

#define LAYOUT( \
	K00, K01, K02, \
	K10, K11, K12  \
) { \
	{ K00,   K01, K02}, \
	{ K10,   K11, K12}  \
}
