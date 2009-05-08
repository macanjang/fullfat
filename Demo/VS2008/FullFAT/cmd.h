/*****************************************************************************
 *  FullFAT - High Performance, Thread-Safe Embedded FAT File-System         *
 *  Copyright (C) 2009  James Walmsley (james@worm.me.uk)                    *
 *                                                                           *
 *  This program is free software: you can redistribute it and/or modify     *
 *  it under the terms of the GNU General Public License as published by     *
 *  the Free Software Foundation, either version 3 of the License, or        *
 *  (at your option) any later version.                                      *
 *                                                                           *
 *  This program is distributed in the hope that it will be useful,          *
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of           *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the            *
 *  GNU General Public License for more details.                             *
 *                                                                           *
 *  You should have received a copy of the GNU General Public License        *
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.    *
 *                                                                           *
 *  IMPORTANT NOTICE:                                                        *
 *  =================                                                        *
 *  Alternative Licensing is available directly from the Copyright holder,   *
 *  (James Walmsley). For more information consult LICENSING.TXT to obtain   *
 *  a Commercial license.                                                    *
 *                                                                           *
 *  See RESTRICTIONS.TXT for extra restrictions on the use of FullFAT.       *
 *                                                                           *
 *  Removing the above notice is illegal and will invalidate this license.   *
 *****************************************************************************
 *  See http://worm.me.uk/fullfat for more information.                      *
 *  Or  http://fullfat.googlecode.com/ for latest releases and the wiki.     *
 *****************************************************************************/

#ifndef _CMD_H_
#define _CMD_H_

#include "../../../src/fullfat.h"
#include "../../../FFTerm/src/FFTerm.h"

typedef struct {	// Pass an environment for the FullFAT commands.
	FF_IOMAN	*pIoman;
	FF_T_INT8	WorkingDir[2600];
} FF_ENVIRONMENT;

extern const FFT_ERR_TABLE pwdInfo[];
extern const FFT_ERR_TABLE lsInfo[];
extern const FFT_ERR_TABLE cdInfo[];
extern const FFT_ERR_TABLE md5Info[];

int pwd_cmd	(int argc, char **argv, FF_ENVIRONMENT *pEnv);
int ls_cmd	(int argc, char **argv, FF_ENVIRONMENT *pEnv);
int cd_cmd	(int argc, char **argv, FF_ENVIRONMENT *pEnv);
int md5_cmd	(int argc, char **argv, FF_ENVIRONMENT *pEnv);

#endif
