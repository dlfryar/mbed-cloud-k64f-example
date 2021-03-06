//----------------------------------------------------------------------------
// The confidential and proprietary information contained in this file may
// only be used by a person authorised under and to the extent permitted
// by a subsisting licensing agreement from ARM Limited or its affiliates.
//
// (C) COPYRIGHT 2016-2017 ARM Limited or its affiliates.
// ALL RIGHTS RESERVED
//
// This entire notice must be reproduced on all copies of this file
// and copies of this file may only be made by a person if such person is
// permitted to do so under the terms of a subsisting license agreement
// from ARM Limited or its affiliates.
//----------------------------------------------------------------------------

#ifndef __MEMORY_TESTS_H__
#define __MEMORY_TESTS_H__

#include "mbed-client/m2minterface.h"
#include "mbed.h"

// A function for creating a batch of resources for memory consumption purposes.
void create_m2mobject_test_set(M2MObjectList& object_list);

// Print into serial the m2m object sizes and heap allocation sizes.
void print_m2mobject_stats();

#endif // !__MEMORY_TESTS_H__
