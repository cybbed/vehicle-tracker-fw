/**
******************************************************************************
* File:         common.h
* Description:  Common defines
*
* Created on:   January 27, 2016
* Author:       Denys Haryachyy
******************************************************************************

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation, either
  version 3 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, see <http://www.gnu.org/licenses/>.
******************************************************************************
 */

#ifndef COMMON_HEADER
#define COMMON_HEADER

#include "ch.h"
#include "hal.h"

typedef enum
{
  RV_SUCCESS,
  RV_FAILURE,
  RV_ERROR,
  RV_NO_STR_START,
  RV_NO_STR_END,
  RV_NOT_COMPLETED,
  RV_NOT_READY,
  RV_NOT_EMPTY,
  RV_TIMEOUT
} RV_t;

typedef enum
{
  RV_TRUE,
  RV_FALSE
} BOOL;

#define MAX_BUF_LEN             128
#define BUF_LEN_64              64

uint32_t logTimeStampGet(void);

void profileInit(void);

#endif
