// This file is part of Notepad++ project
// Copyright (C)2003 Don HO <don.h@free.fr>
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// Note that the GPL places important restrictions on "derived works", yet
// it does not provide a detailed definition of that term.  To avoid      
// misunderstandings, we consider an application to constitute a          
// "derivative work" for the purpose of this license if it does any of the
// following:                                                             
// 1. Integrates source code from Notepad++.
// 2. Integrates/includes/aggregates Notepad++ into a proprietary executable
//    installer, such as those produced by InstallShield.
// 3. Links to a library or executes a program that does any of the above.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

#include <windows.h>
#include <shlwapi.h>
#include <tchar.h>

const int CMD_LEN = 512;
const int PARAM_LEN = 1024;
const TCHAR *NPP = _TEXT("\\notepad++.exe");
const TCHAR *FLAG_LEXER_HTML = _TEXT("-lhtml ");

//int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE,  LPSTR  lpszCmdLine, int nCmdShow)
int WINAPI wWinMain (HINSTANCE hInstance, HINSTANCE , LPWSTR lpszCmdLine,   int nShowCmd)
{
	TCHAR cmd[CMD_LEN];
	::GetModuleFileName(nullptr, cmd, CMD_LEN);
	PathRemoveFileSpec(cmd);
	_tcscat(cmd, NPP);

	TCHAR param[PARAM_LEN] = {};
	_tcscat(_tcscat(param, FLAG_LEXER_HTML), lpszCmdLine);
	::MessageBox(nullptr, param, _TEXT(""), MB_OK);
	HINSTANCE hInst = ::ShellExecute(nullptr, _TEXT("open"), cmd, param, _TEXT("."), SW_SHOW);
	return (UINT)0;
}

