//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TipsCore/TPSAnalyticsEvent.h>

@interface TPSAnalyticsEventAppDeleted : TPSAnalyticsEvent
{
}

+ (id)event;
+ (BOOL)supportsSecureCoding;
- (id)appLaunches;
- (id)desiredOutcomeTotal;
- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
- (id)notificationsPosted;
- (double)timeSinceLastNotification;
- (id)tipViewTotal;

@end

