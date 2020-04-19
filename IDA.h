// #define SWIFT
#include "Types.h"
#include <Kernel/Kernel.h>
#include <dyld/dyld.h>
#include <pthread/pthread.h>
#include <Darwin/Darwin.h>
#include <icu/icu.h>
#include <AudioToolbox/AudioToolbox.h>
#include <AVFoundation/AVFoundation.h>
#include <CommonCrypto/CommonCrypto.h>
#include <CoreAnimation/CoreAnimation.h>
#include <CoreAudio/CoreAudio.h>
#include <CoreFoundation/CoreFoundation.h>
#include <CoreGraphics/CoreGraphics.h>
#include <CoreMedia/CoreMedia.h>
#include <CoreText/CoreText.h>
#include <CoreServices/CoreServices.h>
#include <CoreVideo/CoreVideo.h>
#include <CydiaSubstrate/CydiaSubstrate.h>
#include <Foundation/Foundation.h>
#include <IOKit/IOKit.h>
#include <IOSurface/IOSurface.h>
#include <MobileGestalt/MobileGestalt.h>
#include <UIKit/UIKit.h>
#include <objc/objc.h>
#include <os/os.h>
#include <sandbox/sandbox.h>
#include <Security/Security.h>
#include <xpc/xpc.h>
#include <sqlite/sqlite.h>
#ifdef SWIFT
#include <Swift/Swift.h>
#endif
#include <System/System.h>

/*
*  Copyright (C) Apple Inc. All rights reserved.
* 
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions
*  are met:
*  1. Redistributions of source code must retain the above copyright
*     notice, this list of conditions and the following disclaimer.
*  2. Redistributions in binary form must reproduce the above copyright
*     notice, this list of conditions and the following disclaimer in the
*     documentation and/or other materials provided with the distribution.
* 
*  THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
*  EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
*  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
*  PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
*  CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
*  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
*  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
*  PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
*  OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
*  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
*  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
* /