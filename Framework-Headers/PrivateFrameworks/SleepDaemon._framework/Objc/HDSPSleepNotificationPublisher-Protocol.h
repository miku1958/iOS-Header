//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SleepDaemon/NSObject-Protocol.h>

@class HKSPSleepEvent, NSDictionary, NSString;

@protocol HDSPSleepNotificationPublisher <NSObject>
- (void)publishNotificationForEvent:(HKSPSleepEvent *)arg1 userInfo:(NSDictionary *)arg2;
- (void)tearDownNotificationForEventIdentifier:(NSString *)arg1;
- (void)tearDownNotifications;
@end

