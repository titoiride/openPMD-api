/* Copyright 2020 Axel Huebl
 *
 * This file is part of openPMD-api.
 *
 * openPMD-api is free software: you can redistribute it and/or modify
 * it under the terms of of either the GNU General Public License or
 * the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * openPMD-api is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License and the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License
 * and the GNU Lesser General Public License along with openPMD-api.
 * If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once


#if __cplusplus >= 201402L
#   define OPENPMDAPI_DEPRECATED(msg) [[deprecated(msg)]]
#else
#   ifdef __clang__
#       define OPENPMDAPI_DEPRECATED(msg) __attribute__((deprecated(msg)))
#   elif defined(__GNUC__) && defined(__GNUC_PATCHLEVEL__)
#       define OPENPMDAPI_DEPRECATED(msg) __attribute__((deprecated))
#   elif defined(_MSC_VER)
#       define OPENPMDAPI_DEPRECATED(msg) __declspec(deprecated)
#   else
#       define OPENPMDAPI_DEPRECATED(msg)
#   endif
#endif
