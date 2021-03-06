//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FCCacheCoordinatorFlushPolicy : NSObject
{
    BOOL _alwaysFlushKeysWithZeroInterest;
    unsigned long long _highWaterMark;
    unsigned long long _lowWaterMark;
}

@property (nonatomic) BOOL alwaysFlushKeysWithZeroInterest; // @synthesize alwaysFlushKeysWithZeroInterest=_alwaysFlushKeysWithZeroInterest;
@property (nonatomic) unsigned long long highWaterMark; // @synthesize highWaterMark=_highWaterMark;
@property (nonatomic) unsigned long long lowWaterMark; // @synthesize lowWaterMark=_lowWaterMark;

- (BOOL)canFlushWithDataSize:(unsigned long long)arg1;
- (BOOL)canPreemptiveFlushWithDataSize:(unsigned long long)arg1;

@end

