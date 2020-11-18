//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSSerializerStream-Protocol.h>

@interface NSAKSerializerStream : NSObject <NSSerializerStream>
{
    void *memory;
    unsigned long long current;
    unsigned long long max;
    struct __CFDictionary *roomForIntLocations;
}

- (void)copySerializationInto:(void *)arg1;
- (void)dealloc;
- (void)finalize;
- (unsigned long long)writeAlignedDataSize:(unsigned long long)arg1;
- (unsigned long long)writeData:(const void *)arg1 length:(unsigned long long)arg2;
- (void)writeDelayedInt:(unsigned long long)arg1 for:(int)arg2;
- (unsigned long long)writeInt:(unsigned long long)arg1;
- (unsigned long long)writeRoomForInt:(int *)arg1;
- (BOOL)writeToPath:(id)arg1 safely:(BOOL)arg2;

@end

