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
#include "pwd_cmd.h"

/**
 *	@brief	Prints the current working directory.
 *
 *	@param	argc	The number of argument strings provided on the command line.
 *	@param	argc	An array of pointers, pointing to strings representing the command line arguments.
 *	@param	pEnv	Pointer to an FF_ENVIRONMENT object.
 *
 **/
int pwd_cmd(int argc, char **argv, FF_ENVIRONMENT *pEnv) {
	if(argc == 1) {
		//printf("Current directory:\n");							// Simply print WorkingDir from pEnv object.
		printf("%s\n", pEnv->WorkingDir);
	} else {
		printf("Usage: %s\n", argv[0]);							// argv[0] is always the name of the command.
	}
	return 0;	
}
const FFT_ERR_TABLE pwdInfo[] =
{
	{"Unknown or Generic Error",		-1},					// Generic Error (always the first entry).
	{"Types the current working directory to the screen.",		FFT_COMMAND_DESCRIPTION},
	{ NULL }
};