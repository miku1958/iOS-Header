//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAPresentationModifierGroup : NSObject
{
    void *_shmem;
    unsigned long long _capacity;
    unsigned long long _count;
}

@property (readonly) unsigned long long capacity;
@property (readonly) unsigned long long count;

+ (id)groupWithCapacity:(unsigned long long)arg1;
- (void)dealloc;
- (void)flush;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)markWritten:(unsigned long long)arg1;
- (unsigned long long)nextSlot;
- (void)resetBitMask;
- (struct Shmem *)shmem;

@end

