//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarNotification/CALNTriggeredEventNotificationData.h>

#import <CalendarNotification/NSCopying-Protocol.h>

@class EKTravelEngineHypothesis, NSDate, NSString;

@interface CALNMutableTriggeredEventNotificationData : CALNTriggeredEventNotificationData <NSCopying>
{
}

@property (copy, nonatomic) NSString *alarmID; // @dynamic alarmID;
@property (nonatomic) BOOL hasDisplayedLeaveByMessage; // @dynamic hasDisplayedLeaveByMessage;
@property (nonatomic) BOOL hasDisplayedLeaveNowMessage; // @dynamic hasDisplayedLeaveNowMessage;
@property (nonatomic) BOOL hasDisplayedRunningLateMessage; // @dynamic hasDisplayedRunningLateMessage;
@property (copy, nonatomic) EKTravelEngineHypothesis *hypothesis; // @dynamic hypothesis;
@property (nonatomic) BOOL isOffsetFromTravelTimeStart; // @dynamic isOffsetFromTravelTimeStart;
@property (copy, nonatomic) NSDate *lastFireTimeOfAlertOffsetFromTravelTime; // @dynamic lastFireTimeOfAlertOffsetFromTravelTime;
@property (copy, nonatomic) NSDate *lastTimeNotificationAdded; // @dynamic lastTimeNotificationAdded;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end

