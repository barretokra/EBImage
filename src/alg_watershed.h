/* -------------------------------------------------------------------------

Watershed algorithm of object detection
 
Copyright (c) 2006 Oleg Sklyar

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License 
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.          

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  

See the GNU General Public License for more details.
GPL license wording: http://www.gnu.org/licenses/gpl.html

------------------------------------------------------------------------- */

#include "common.h"

extern "C" {
    SEXP ws(SEXP rimage, SEXP ref, SEXP seeds, SEXP params);
    SEXP ws_paint(SEXP x, SEXP img, SEXP cols, SEXP dofill, SEXP doborders, SEXP opacity);
    // TODO: add bg color
    SEXP ws_images(SEXP x, SEXP img); 
};
