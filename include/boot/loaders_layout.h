/*
 * zipl stage2/stage3 layout definitions
 *
 * Copyright IBM Corp. 2020
 *
 * s390-tools is free software; you can redistribute it and/or modify
 * it under the terms of the MIT license. See LICENSE for details.
 *
 */

#ifndef LOADERS_LAYOUT_H
#define LOADERS_LAYOUT_H

#include "lib/zt_common.h"
#include "linux_layout.h"

#define STAGE3_ENTRY			_AC(0xa000, UL)

#define STAGE2_LOAD_ADDRESS		_AC(0x2000, UL)
#define STAGE3_LOAD_ADDRESS		STAGE3_ENTRY
#define IMAGE_LOAD_ADDRESS		IMAGE_ENTRY

#define STAGE3_HEAP_SIZE		_AC(0x4000, UL)
#define STAGE3_HEAP_ADDRESS		_AC(0x2000, UL)
#define STAGE3_STACK_SIZE		_AC(0x1000, UL)
#define STAGE3_STACK_ADDRESS		_AC(0xF000, UL)
#define STAGE3_PARAMS_ADDRESS		_AC(0x9000, UL)


#ifndef __ASSEMBLER__
#endif /* __ASSEMBLER__ */
#endif /* LOADERS_LAYOUT_H */
