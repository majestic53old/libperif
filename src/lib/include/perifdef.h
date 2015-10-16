/**
 * libperif
 * Copyright (C) 2015 David Jolly
 * ----------------------
 *
 * libperif is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * libperif is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PERIFDEF_H_
#define PERIFDEF_H_

#include <stddef.h>
#include <stdint.h>
#include <avr/io.h>

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

#define DEFINE_DDR(_BNK_) DDR ## _BNK_
#define DEFINE_PORT(_BNK_) PORT ## _BNK_
#define DEFINE_PIN(_BNK_, _PIN_) P ## _BNK_ ## _PIN_

// TODO

typedef enum {
	PERIF_ERR_NONE = 0,
	PERIF_ERR_INVARG,
} periferr_t;

#define PERIF_ERR(_ERR_) ((_ERR_) != PERIF_ERR_NONE)

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // PERIFDEF_H_