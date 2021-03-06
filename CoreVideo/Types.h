#ifndef COREVIDEO_H_
#define COREVIDEO_H_

#import "../Types.h"

typedef struct __CVBuffer *CVBufferRef;
typedef struct __CVPixelBufferPool *CVPixelBufferPoolRef;

typedef CVBufferRef CVImageBufferRef;
typedef CVImageBufferRef CVPixelBufferRef;

typedef uint32_t CVAttachmentMode;
typedef uint64_t CVOptionFlags;

typedef int32_t CVReturn;

CF_ENUM(CVOptionFlags, CVPixelBufferLockFlags) {
    kCVPixelBufferLock_ReadOnly = 0x00000001,
};

CF_ENUM(CVOptionFlags, CVPixelBufferPoolFlushFlags) {
    kCVPixelBufferPoolFlushExcessBuffers = 1,
};

typedef void (*CVPixelBufferReleaseBytesCallback)(void *releaseRefCon, const void *baseAddress);

#endif