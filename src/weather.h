/* Conky, a system monitor, based on torsmo
 *
 * Any original torsmo code is licensed under the BSD license
 *
 * All code written since the fork of torsmo is licensed under the GPL
 *
 * Please see COPYING for details
 *
 * Copyright (c) 2004, Hannu Saransaari and Lauri Hakkarainen
 * Copyright (c) 2005-2009 Brenden Matthews, Philip Kovacs, et. al.
 *	(see AUTHORS)
 * All rights reserved.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef WEATHER_H_
#define WEATHER_H_

/* WEATHER data */
typedef struct PWEATHER_ {
  char lastupd[17];
  int temp;
  int dew;
  int cc;
  int bar;
  int wind_s;
  int wind_d;
  int hmid;
  int wc;
} PWEATHER;

/* Prototypes */
void init_weather_info(void);
void free_weather_info(void);
void process_weather_info(char *p, int p_max_size, char *uri, char *data_type, int interval);

#endif /*WEATHER_H_*/
