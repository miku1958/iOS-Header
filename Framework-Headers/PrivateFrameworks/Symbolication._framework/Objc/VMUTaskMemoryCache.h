//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface VMUTaskMemoryCache : NSObject
{
    struct mapped_memory_t *_memoryRegions;
    unsigned int _task;
    BOOL _taskIs64Bit;
    BOOL _stopped;
    BOOL _shouldTouchPages;
}

+ (BOOL)taskIs64Bit:(unsigned int)arg1;
+ (id)taskMemoryCacheForTask:(unsigned int)arg1;
- (BOOL)copyRange:(struct _VMURange)arg1 to:(void *)arg2;
- (void)dealloc;
- (void)finalize;
- (void)flushMemoryCache;
- (id)initWithTask:(unsigned int)arg1;
- (int)peekAtAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 returnsBuf:(void **)arg3;
- (int)readPointerAt:(unsigned long long)arg1 value:(unsigned long long *)arg2;
- (int)startPeeking;
- (int)stopPeeking;

@end
