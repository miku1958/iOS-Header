//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSUObjectSnapshot : NSObject
{
    unsigned long long mEntryCount;
    void **mSnapshot;
    NSArray *mCompared;
}

- (void)calibrate:(id)arg1;
- (void)compare;
- (void)dealloc;
- (id)init;
- (void)p_clear;

@end

