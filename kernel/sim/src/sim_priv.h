/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef H_SIM_PRIV_
#define H_SIM_PRIV_

#include <os/os.h>

#ifdef __cplusplus
extern "C" {
#endif

#define OS_USEC_PER_TICK    (1000000 / OS_TICKS_PER_SEC)

void sim_switch_tasks(void);
void sim_tick(void);
void sim_signals_init(void);
void sim_signals_cleanup(void);

extern pid_t sim_pid;

#ifdef __cplusplus
}
#endif

#endif