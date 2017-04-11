/*************************************************************
 *       Copyright 2016 Accton Technology Corporation.
 *
 * Licensed under the Eclipse Public License, Version 1.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 *        http://www.eclipse.org/legal/epl-v10.html
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the
 * License.
 *
 ************************************************************/

#ifndef HEADER_CRC_UTIL
#define HEADER_CRC_UTIL


unsigned char crc_util_calculate_crc8_checksum(unsigned char crc, unsigned char data);
unsigned char crc_util_calculate_crc8_checksum_of_buffer(unsigned char *data_buffer_ptr, unsigned long data_buffer_length);
#endif

