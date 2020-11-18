//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CPMemoryPoolFile : NSObject
{
    struct _opaque_pthread_mutex_t _mutex;
    int _fd;
    char *_slots;
    unsigned long long _slotCount;
    unsigned long long _slotLength;
    struct __CFBitVector *_usedSlots;
    struct __CFAllocator *_deallocator;
}

- (void)dealloc;
- (id)initWithLabel:(const char *)arg1 slotCount:(unsigned long long)arg2 slotLength:(unsigned long long)arg3;
- (id)nextSlotWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)returnSlot:(void *)arg1;

@end
