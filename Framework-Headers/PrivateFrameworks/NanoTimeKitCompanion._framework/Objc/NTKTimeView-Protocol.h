//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class NSDate;

@protocol NTKTimeView <NSObject>

@property (nonatomic, getter=isFrozen) BOOL frozen;

- (void)setOverrideDate:(NSDate *)arg1 duration:(double)arg2;
- (void)setTimeOffset:(double)arg1;
@end
