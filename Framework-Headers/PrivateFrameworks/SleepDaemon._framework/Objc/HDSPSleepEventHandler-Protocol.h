//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SleepDaemon/NSObject-Protocol.h>

@class HKSPSleepEvent, NSSet;

@protocol HDSPSleepEventHandler <NSObject>
- (void)sleepEventIsDue:(HKSPSleepEvent *)arg1;

@optional
- (NSSet *)eventIdentifiers;
@end

