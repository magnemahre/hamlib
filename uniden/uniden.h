/*
 *  Hamlib Uniden backend - main header
 *  Copyright (c) 2001-2004 by Stephane Fillod
 *
 *	$Id: uniden.h,v 1.6 2005-04-03 20:23:18 fillods Exp $
 *
 *   This library is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU Library General Public License as
 *   published by the Free Software Foundation; either version 2 of
 *   the License, or (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU Library General Public License for more details.
 *
 *   You should have received a copy of the GNU Library General Public
 *   License along with this library; if not, write to the Free Software
 *   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#ifndef _UNIDEN_H
#define _UNIDEN_H 1

#include <hamlib/rig.h>
#include <cal.h>

#define BACKEND_VER	"0.2"

int uniden_set_freq(RIG *rig, vfo_t vfo, freq_t freq);
int uniden_set_mem(RIG *rig, vfo_t vfo, int ch);

extern const struct rig_caps bc895_caps;
extern const struct rig_caps bc245_caps;


#endif /* _UNIDEN_H */
