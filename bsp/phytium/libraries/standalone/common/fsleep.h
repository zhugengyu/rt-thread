/*
 * Copyright : (C) 2022 Phytium Information Technology, Inc. 
 * All Rights Reserved.
 *  
 * This program is OPEN SOURCE software: you can redistribute it and/or modify it  
 * under the terms of the Phytium Public License as published by the Phytium Technology Co.,Ltd,  
 * either version 1.0 of the License, or (at your option) any later version. 
 *  
 * This program is distributed in the hope that it will be useful,but WITHOUT ANY WARRANTY;  
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the Phytium Public License for more details. 
 *  
 * 
 * FilePath: fsleep.h
 * Date: 2021-05-28 08:48:40
 * LastEditTime: 2022-02-17 18:02:51
 * Description:  This files is for 
 * 
 * Modify History: 
 *  Ver   Who        Date         Changes
 * ----- ------     --------    --------------------------------------
 */


#ifndef _BSP_ARCH_ARMV8_FSLEEP_H
#define _BSP_ARCH_ARMV8_FSLEEP_H

#include "ftypes.h"

u32 fsleep_seconds(u32 seconds); /* 按秒延迟 */
u32 fsleep_millisec(u32 mseconds); /* 按毫秒延迟 */
u32 fsleep_microsec(u32 useconds); /* 按微秒延迟 */

#endif // !