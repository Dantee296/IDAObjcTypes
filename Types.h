#ifndef IDATYPES_H_
#define IDATYPES_H_

// ^(.+) (.+)\((.*)\);$
// $1 $2($3);\n$1 _imp__$2($3);

// Revert
// ^(.+) (.+)\((.*)\);$\n^(.+) _imp__(.+)\((.*)\);
// $1 $2($3);

#ifndef HOPPER

typedef signed char int8;
typedef unsigned char uint8;
typedef signed short int16;
typedef unsigned short uint16;
typedef signed long int32;
typedef unsigned long uint32;
typedef signed long long int64;
typedef unsigned long long uint64;

#endif

#ifdef GHIDRA

// Ghidra doesn't know these
typedef uint8 UInt8;
typedef uint16 UInt16;
typedef uint32 UInt32;
typedef uint64 UInt64;
typedef int8 SInt8;
typedef int16 SInt16;
typedef int32 SInt32;
typedef int64 SInt64;
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef signed short int16_t;
typedef unsigned short uint16_t;
typedef unsigned int size_t;
typedef signed long int32_t;
typedef unsigned long uint32_t;
typedef signed long long int64_t;
typedef unsigned long long uint64_t;
typedef unsigned __int64 uintptr_t;
// TODO: should move to Kernel/Types.h
typedef char gid_t;
typedef short uid_t;
typedef int pid_t;
// END
typedef long intptr_t;

typedef struct {
   unsigned int gp_offset;
   unsigned int fp_offset;
   void *overflow_arg_area;
   void *reg_save_area;
} va_list[1];

typedef int Boolean;
typedef int kern_return_t;
typedef unsigned int __darwin_natural_t;
typedef unsigned long long u_int64_t;
typedef uintptr_t vm_offset_t;
typedef vm_offset_t vm_address_t;
typedef uint64_t mach_vm_address_t;
typedef UInt64 AbsoluteTime;

typedef struct ipc_port *ipc_port_t;

typedef ipc_port_t mach_port_t;

// Just C
typedef struct _OSObject *OSObject;

#ifdef __ARM__
typedef bool BOOL;
#else
typedef signed char BOOL;
#endif

#endif

typedef float Float32;
typedef double Float64;
typedef UInt32 UTF32Char;
typedef UInt16 UniChar;
typedef UInt16 UTF16Char;
typedef UInt8 UTF8Char;

typedef int errno_t;
typedef int32_t integer_t;
typedef size_t rsize_t;

extern uintptr_t __stack_chk_guard;
__attribute__((noreturn)) void __stack_chk_fail(void);

#include <Kernel/Types.h>
#include <dyld/Types.h>
#include <pthread/Types.h>
#include <Darwin/Types.h>
#include <sandbox/Types.h>
#include <icu/Types.h>
#include <CoreAnimation/Types.h>
#include <CoreAudio/Types.h>
#include <AudioToolbox/Types.h>
#include <CommonCrypto/Types.h>
#include <CoreFoundation/Types.h>
#include <CoreGraphics/Types.h>
#include <CoreMedia/Types.h>
#include <CoreText/Types.h>
#include <CoreVideo/Types.h>
#include <Foundation/Types.h>
#include <IOKit/Types.h>
#include <IOKit/NXTypes.h>
#include <IOSurface/Types.h>
#include <objc/Types.h>
#include <os/Types.h>
#include <Security/Types.h>
#include <UIKit/Types.h>
#include <xpc/Types.h>
#ifdef SWIFT
#include <Swift/Types.h>
#endif
#include <System/Types.h>

#endif