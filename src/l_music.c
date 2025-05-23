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
   l_music.c
*********************************************/

#include <stdio.h>
#include <string.h>
//
#include "l_music.h"

char *tracksFilePath[TRACKS_NUM] =
    {
         "data/bgm/intro.track"
        ,"data/bgm/2min.track"
        ,"data/bgm/5min.track"
    };

char *tracksName[TRACKS_NUM] =
    {
        "Interstellar"
       ,"Fire Darer"
       ,"Field Force"
    };

/********************************************
    getTrackFilePath
*********************************************/

char *getTrackFilePath(int trackNum)
{
    if( trackNum >= TRACKS_NUM)
        return NULL;    
    return tracksFilePath[trackNum];
}

/********************************************
    getTrackFilePath
*********************************************/

char *getTrackName(int trackNum)
{
    if( trackNum >= TRACKS_NUM)
        return NULL;    
    return tracksName[trackNum];
}





