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
 * FilePath: fsdmmc_g.c
 * Date: 2022-02-10 14:53:42
 * LastEditTime: 2022-02-18 08:53:31
 * Description:  This files is for
 *
 * Modify History:
 *  Ver   Who        Date         Changes
 * ----- ------     --------    --------------------------------------
 * 1.0   zhugengyu  2021/12/2    init
 */

/*  - This file contains a configuration table that specifies the configuration
- 驱动全局变量定义，包括静态配置参数 */

/***************************** Include Files *********************************/

#include "ftypes.h"
#include "fparameters.h"

#include "fsdmmc.h"
#include "fsdmmc_hw.h"

/************************** Constant Definitions *****************************/

/**************************** Type Definitions *******************************/

/***************** Macros (Inline Functions) Definitions *********************/

/************************** Function Prototypes ******************************/

/************************** Variable Definitions *****************************/

const FSdmmcConfig FSDMMC_CONFIG_TBL[FSDMMC_HOST_INSTANCE_NUM] =
{
    [FSDMMC_HOST_INSTANCE_0] =
    {
        .instance_id = FSDMMC_HOST_INSTANCE_0, /* Id of device*/
        .base_addr   = FSDMMC_HOST_0_BASEADDR,
        .irq_num =
        {
            [FSDMMC_CMD_INTR] = FSDMMC_HOST_0_CMD_INTR_IRQ,
            [FSDMMC_DMA_BD_INTR] = FSDMMC_HOST_0_DMA_INTR_IRQ,
            [FSDMMC_ERROR_INTR] = FSDMMC_HOST_0_ERR_INTR_IRQ
        }
    }
};


/*****************************************************************************/
