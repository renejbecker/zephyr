/*
 * Copyright (c) 2025 Renesas Electronics Corporation
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_DRIVERS_ETHERNET_ETH_RENESAS_RA_ESWM_H_
#define ZEPHYR_DRIVERS_ETHERNET_ETH_RENESAS_RA_ESWM_H_

#if defined(CONFIG_ETH_RENESAS_RA_HW_BRIDGE)
#include <zephyr/net/net_if.h>
int renesas_ra_eswm_bridge_addif(const struct device *eswm_dev, uint8_t ch, struct net_if *br);
int renesas_ra_eswm_bridge_delif(const struct device *eswm_dev, uint8_t ch, struct net_if *br);
int renesas_ra_eswm_bridge_start(const struct device *eswm_dev, uint8_t ch, struct net_if *br);
int renesas_ra_eswm_bridge_stop(const struct device *eswm_dev, uint8_t ch, struct net_if *br);
int renesas_ra_eswm_bridge_fdb_dump(const struct device *eswm_dev,
				    void (*cb)(const uint8_t *mac, uint32_t port_mask,
					      bool dynamic, void *user_data),
				    void *user_data);
#endif

#endif /* ZEPHYR_DRIVERS_ETHERNET_ETH_RENESAS_RA_ESWM_H_ */
