/* mac_port.h: Header file which prototypes the missing Mac shit. */

/* Author: Brian J. Fox (bfox@ai.mit.edu) Sun Dec 17 13:39:11 1995. */

/* This file is part of <Meta-HTML>(tm), a system for the rapid
   deployment of Internet and Intranet applications via the use
   of the Meta-HTML language.

   Copyright (c) 1995, 2000, Brian J. Fox (bfox@ai.mit.edu).

   Meta-HTML is free software; you can redistribute it and/or modify
   it under the terms of the General Public License as published
   by the Free Software Foundation; either version 1, or (at your
   option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   FSF GPL for more details.

   You should have received a copy of the FSF General Public License
   along with this program; if you have not, you may obtain one
   electronically at the following URL:

	http://www.metahtml.com/COPYING
*/

#if !defined (_MAC_PORT_H_)
#define _MAC_PORT_H_ 1
extern char *strdup (char *string);
extern int strcasecmp (char *, char *);
extern int strncasecmp (char *, char *, int);
#include "GUSI.h"

#define os_open(file, mode, flags) open (file, mode)

#endif /* !_MAC_PORT_H_ */
