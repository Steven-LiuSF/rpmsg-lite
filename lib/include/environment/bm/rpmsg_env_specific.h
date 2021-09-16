/*
 * Copyright 2021 NXP
 * All rights reserved.
 *
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/**************************************************************************
 * FILE NAME
 *
 *       rpmsg_env_specific.h
 *
 * DESCRIPTION
 *
 *       This file contains baremetal specific constructions.
 *
 **************************************************************************/
#ifndef RPMSG_ENV_SPECIFIC_H_
#define RPMSG_ENV_SPECIFIC_H_

#if defined(RL_USE_STATIC_API) && (RL_USE_STATIC_API == 1)
typedef uint8_t LOCK_STATIC_CONTEXT;
typedef uint8_t rpmsg_static_queue_ctxt;
#endif

#endif /* RPMSG_ENV_SPECIFIC_H_ */
