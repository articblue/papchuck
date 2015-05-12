/*
 * Copyright (C) Jake
 *
 * This file is part of paparazzi
 *
 * paparazzi is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * paparazzi is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with paparazzi; see the file COPYING.  If not, see
 * <http://www.gnu.org/licenses/>.
 */
/**
 * @file "modules/chuck/chuck.h"
 * @author Jake
 * demo for chuck
 */

#ifndef CHUCK_H
#define CHUCK_H

extern void initchuck(void);
extern void flyafter10secs(void);
extern void flyafter5secs(void);
extern void datalinkcallback(void);
extern void periodic_1Hz_demo(void);
#endif

