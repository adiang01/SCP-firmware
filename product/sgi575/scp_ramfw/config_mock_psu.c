/*
 * Arm SCP/MCP Software
 * Copyright (c) 2018-2020, Arm Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <mod_mock_psu.h>

#include <fwk_element.h>
#include <fwk_id.h>
#include <fwk_module.h>

#include <stdbool.h>

static const struct fwk_element element_table[] = {
    {
        .name = "DVFS_GROUP0",
        .data =
            &(const struct mod_mock_psu_element_cfg){
                .async_alarm_id = FWK_ID_NONE_INIT,
                .async_alarm_api_id = FWK_ID_NONE_INIT,

                .async_response_id = FWK_ID_NONE_INIT,
                .async_response_api_id = FWK_ID_NONE_INIT,

                .default_enabled = true,
                .default_voltage = 100,
            },
    },
    {
        .name = "DVFS_GROUP1",
        .data =
            &(const struct mod_mock_psu_element_cfg){
                .async_alarm_id = FWK_ID_NONE_INIT,
                .async_alarm_api_id = FWK_ID_NONE_INIT,

                .async_response_id = FWK_ID_NONE_INIT,
                .async_response_api_id = FWK_ID_NONE_INIT,

                .default_enabled = true,
                .default_voltage = 100,
            },
    },
    { 0 }
};

static const struct fwk_element *get_element_table(fwk_id_t module_id)
{
    return element_table;
}

const struct fwk_module_config config_mock_psu = {
    .get_element_table = get_element_table,
};
