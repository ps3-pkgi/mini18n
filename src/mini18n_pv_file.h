/*  Copyright 2009 Guillaume Duhamel
  
    This file is part of mini18n.
  
    mini18n is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.
  
    mini18n is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
  
    You should have received a copy of the GNU General Public License
    along with mini18n; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
*/

#ifndef MINI18N_PV_FILE_H
#define MINI18N_PV_FILE_H

#include "mini18n_pv_hash.h"
#include <stdio.h>

typedef struct _mini18n_file_t mini18n_file_t;

struct _mini18n_file_t {
	int (*load)(mini18n_hash_t *, FILE *);
	const char * type;
};

#endif
