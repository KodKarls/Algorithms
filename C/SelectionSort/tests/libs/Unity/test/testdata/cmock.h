/* =========================================================================
    Unity - A Test Framework for C
    ThrowTheSwitch.org
    Copyright (c) 2007-24 Mike Karlesky, Mark VanderVoord, & Greg Williams
    SPDX-License-Identifier: MIT
========================================================================= */

#ifndef CMOCK_H
#define CMOCK_H

int CMockMemFreeFinalCounter = 0;
int mockMock_Init_Counter = 0;
int mockMock_Verify_Counter = 0;
int mockMock_Destroy_Counter = 0;

void CMock_Guts_MemFreeFinal(void) { CMockMemFreeFinalCounter++; }
void mockMock_Init(void)           { mockMock_Init_Counter++;    }
void mockMock_Verify(void)         { mockMock_Verify_Counter++;  }
void mockMock_Destroy(void)        { mockMock_Destroy_Counter++; }

#endif
