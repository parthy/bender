/* -*- Mode: C -*- */
/*
 * Multiboot definitions.
 *
 * Copyright (C) 2009-2012, Julian Stecklina <jsteckli@os.inf.tu-dresden.de>
 * Economic rights: Technische Universitaet Dresden (Germany)
 *
 * This file is part of Bender.
 *
 * Bender is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * Bender is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License version 2 for more details.
 */

#pragma once

#include <stdint.h>
#include <mbi.h>

void mbi_relocate_modules(struct mbi *mbi, uint64_t phys_max);
uint64_t mbi_pop_module(struct mbi *mbi);


/* EOF */
