//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableData.h>

#import <Foundation/NSDiscardableContent-Protocol.h>

@interface NSPurgeableData : NSMutableData <NSDiscardableContent>
{
    unsigned long long _length;
    int _accessCount;
    unsigned char _private[32];
    void *_reserved;
}

- (void)_destroyMemory;
- (BOOL)beginContentAccess;
- (const void *)bytes;
- (void)dealloc;
- (id)description;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (id)init;
- (id)initWithBytes:(void *)arg1 length:(unsigned long long)arg2 copy:(BOOL)arg3 deallocator:(CDUnknownBlockType)arg4;
- (id)initWithCapacity:(unsigned long long)arg1;
- (BOOL)isContentDiscarded;
- (unsigned long long)length;
- (void *)mutableBytes;
- (void)setLength:(unsigned long long)arg1;

@end

