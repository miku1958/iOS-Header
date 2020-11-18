//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SRMemoryMapping : NSObject
{
    int _protection;
    int _advice;
    void *_start;
    void *_currentPosition;
    long long _offset;
    void *_mappedAddress;
    unsigned long long _size;
    unsigned long long _pageAlignedSize;
}

@property void *currentPosition; // @synthesize currentPosition=_currentPosition;
@property (readonly) unsigned long long freeSpace;
@property void *mappedAddress; // @synthesize mappedAddress=_mappedAddress;
@property long long offset; // @synthesize offset=_offset;
@property unsigned long long pageAlignedSize; // @synthesize pageAlignedSize=_pageAlignedSize;
@property unsigned long long size; // @synthesize size=_size;
@property void *start; // @synthesize start=_start;
@property (readonly) unsigned long long used;
@property (readonly, getter=isWritable) BOOL writable;

+ (void)initialize;
- (void)appendBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (BOOL)containsAddress:(const void *)arg1;
- (void)dealloc;
- (id)initWithSize:(unsigned long long)arg1 protection:(int)arg2 advice:(int)arg3 offset:(long long)arg4;
- (BOOL)isValidWriteToDestinationAddress:(void *)arg1 withLength:(unsigned long long)arg2 bytes:(const void *)arg3;
- (BOOL)mapWithFileHandle:(id)arg1;
- (void)sync;
- (void)unmap;
- (void)writeBytes:(const void *)arg1 toOffset:(unsigned long long)arg2 length:(unsigned long long)arg3;

@end
