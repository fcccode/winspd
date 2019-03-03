/**
 * @file shared/log.h
 *
 * @copyright 2018-2019 Bill Zissimopoulos
 */
/*
 * This file is part of WinSpd.
 *
 * You can redistribute it and/or modify it under the terms of the GNU
 * General Public License version 3 as published by the Free Software
 * Foundation.
 *
 * Licensees holding a valid commercial license may use this software
 * in accordance with the commercial license agreement provided in
 * conjunction with the software.  The terms and conditions of any such
 * commercial license agreement shall govern, supersede, and render
 * ineffective any application of the GPLv3 license to this software,
 * notwithstanding of any reference thereto in the software or
 * associated repository.
 */

#ifndef WINSPD_SHARED_LOG_H_INCLUDED
#define WINSPD_SHARED_LOG_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

VOID SpdPrintLog(HANDLE Handle, PWSTR Format, ...);
VOID SpdPrintLogV(HANDLE Handle, PWSTR Format, va_list ap);
VOID SpdEventLog(ULONG Type, PWSTR Format, ...);
VOID SpdEventLogV(ULONG Type, PWSTR Format, va_list ap);
VOID SpdServiceLog(ULONG Type, PWSTR Format, ...);
VOID SpdServiceLogV(ULONG Type, PWSTR Format, va_list ap);

PWSTR SpdDiagIdent(VOID);

#ifdef __cplusplus
}
#endif

#endif