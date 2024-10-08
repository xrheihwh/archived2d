/*
Copyright (C) 2024, Matthew Polk.
This file is free software licensed under the GPLv3. See COPYING for details.

There are two parts to the toonz sdk.
1. The low level COM like interface.
2. A wrapper, should you make one.

This header file concerns the wrapper.
toonz_utility.hpp is the wrapper and toonz_hostif.h, toonz_params.h, and toonz_plugin.h
is the low level SDK. What the wrapper does is the following:
1. Write out the proper steps to create and register a plugin easily.
2. Any additional functionality the plugins should be using.





*/