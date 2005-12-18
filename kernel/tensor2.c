/*
 * Copyright (c) 2003 Matteo Frigo
 * Copyright (c) 2003 Massachusetts Institute of Technology
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

/* $Id: tensor2.c,v 1.4 2005-12-18 01:28:50 athena Exp $ */

#include "ifftw.h"

tensor *X(mktensor_2d)(INT n0, INT is0, INT os0,
		       INT n1, INT is1, INT os1)
{
     tensor *x = X(mktensor)(2);
     x->dims[0].n = n0;
     x->dims[0].is = is0;
     x->dims[0].os = os0;
     x->dims[1].n = n1;
     x->dims[1].is = is1;
     x->dims[1].os = os1;
     return x;
}


tensor *X(mktensor_3d)(INT n0, INT is0, INT os0,
		       INT n1, INT is1, INT os1,
		       INT n2, INT is2, INT os2)
{
     tensor *x = X(mktensor)(3);
     x->dims[0].n = n0;
     x->dims[0].is = is0;
     x->dims[0].os = os0;
     x->dims[1].n = n1;
     x->dims[1].is = is1;
     x->dims[1].os = os1;
     x->dims[2].n = n2;
     x->dims[2].is = is2;
     x->dims[2].os = os2;
     return x;
}

