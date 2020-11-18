//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SleepDaemon/NSObject-Protocol.h>

@class NSArray, NSDate, NSString;
@protocol HDSPSleepEventDelegate;

@protocol HDSPSleepEventProvider <NSObject>

@property (readonly, copy, nonatomic) NSString *providerIdentifier;
@property (weak, nonatomic) id<HDSPSleepEventDelegate> sleepEventDelegate;

- (NSArray *)upcomingEventsDueAfterDate:(NSDate *)arg1;
@end
