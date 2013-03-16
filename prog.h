/*
 * Copyright (C) 2009-2012 Chris McClelland
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef PROG_H
#define PROG_H

typedef enum {
	PROG_NOP,
	PROG_JTAG_ISSENDING_ISRECEIVING,
	PROG_JTAG_ISSENDING_NOTRECEIVING,
	PROG_JTAG_NOTSENDING_ISRECEIVING,
	PROG_JTAG_NOTSENDING_NOTRECEIVING
} ProgOp;

#define bmISLAST       (1<<0)
#define bmSENDONES     (1<<1)

#endif
