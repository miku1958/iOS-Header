//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SleepDaemon/NSObject-Protocol.h>

@protocol HDSPSleepEventProvider;

@protocol HDSPSleepEventDelegate <NSObject>
- (void)eventProviderCancelledEvents:(id<HDSPSleepEventProvider>)arg1;
- (void)eventProviderHasUpcomingEvents:(id<HDSPSleepEventProvider>)arg1;
@end

