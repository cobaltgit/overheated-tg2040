/*
    OverHeated alpha 0.2
    Copyright (C) 2015-2017 BrokenTestType

    This program is free software; you can redistribute it and/or
    modify it under the terms of the GNU General Public License
    as published by the Free Software Foundation; either version 2
    of the License, or (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/


/********************************************
   d_gameConfig.h
*********************************************/

#ifndef D_GAME_CONFIG_H
#define D_GAME_CONFIG_H

/*Game configuration structure*/

extern char config_gamepath[128];
extern char dataPath[128];
extern char scorePath[128];
extern char replayPath[128];
extern char configPath[128];

#define CFG_MAX_VOLUME 128

struct gameCfgStruct
{
    int MUS_Volume;                 //Music volume
    int SFX_Volume;                 //Sound effects volume
    unsigned resMode;               //Video Resolution mode
    int fullscreen;                 //Fullscreen flag
                                    // 0 = NO  , 1 = YES
    unsigned scanlines;             // 0 = Disabled , 1 = Enabled
    unsigned slValue;               //Scanlines intensity
};

typedef struct gameCfgStruct gameCfgStruct;

#endif
