/* =========================================================================
    Unity - A Test Framework for C
    ThrowTheSwitch.org
    Copyright (c) 2007-24 Mike Karlesky, Mark VanderVoord, & Greg Williams
    SPDX-License-Identifier: MIT
========================================================================= */

#ifndef CEXCEPTION_H
#define CEXCEPTION_H

#define CEXCEPTION_BEING_USED 1

#define CEXCEPTION_NONE 0
#define CEXCEPTION_T int e = 1; (void)
#define Try          if (e)
#define Catch(a)     if (!a)

#endif
