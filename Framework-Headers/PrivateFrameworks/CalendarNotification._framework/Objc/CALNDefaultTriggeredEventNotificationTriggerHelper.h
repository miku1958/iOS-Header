//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNTriggeredEventNotificationTriggerHelper-Protocol.h>

@class NSString;
@protocol CALNTravelAdvisoryAuthority, CalDateProvider;

@interface CALNDefaultTriggeredEventNotificationTriggerHelper : NSObject <CALNTriggeredEventNotificationTriggerHelper>
{
    id<CALNTravelAdvisoryAuthority> _travelAdvisoryAuthority;
    id<CalDateProvider> _dateProvider;
}

@property (readonly, nonatomic) id<CalDateProvider> dateProvider; // @synthesize dateProvider=_dateProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<CALNTravelAdvisoryAuthority> travelAdvisoryAuthority; // @synthesize travelAdvisoryAuthority=_travelAdvisoryAuthority;

- (void).cxx_destruct;
- (BOOL)_eventWillEndBeforeUserArrivesForHypothesis:(id)arg1 eventEndDate:(id)arg2;
- (BOOL)_exceededMaximumTravelTimeThresholdForHypothesis:(id)arg1;
- (BOOL)_shouldTriggerForTimeToLeaveRefreshForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3;
- (BOOL)_shouldTriggerForTimeToLeaveRefreshGivenImmediateDepartureTimelinessStatusForSourceClientIdentifier:(id)arg1 oldNotificationData:(id)arg2;
- (BOOL)_shouldTriggerForTravelAdviceReceivedForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 oldNotificationData:(id)arg3;
- (BOOL)_shouldTriggerForTravelAdviceReceivedGivenHasExistingNotificationDataForSourceClientIdentifier:(id)arg1 hypothesis:(id)arg2 sourceNotificationInfo:(id)arg3 oldNotificationData:(id)arg4 hasExistingTravelAdvice:(BOOL)arg5 satisfiesMinimumTravelTimeThreshold:(BOOL)arg6;
- (id)initWithTravelAdvisoryAuthority:(id)arg1 dateProvider:(id)arg2;
- (BOOL)shouldTriggerForSourceClientIdentifier:(id)arg1 trigger:(unsigned long long)arg2 sourceNotificationInfo:(id)arg3 oldNotificationData:(id)arg4;

@end

