//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturbServer/DNDSHeartbeatMetricsProtocol-Protocol.h>

@class NSNumber;

@protocol DNDSMutableHeartbeatMetricsProtocol <DNDSHeartbeatMetricsProtocol>

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL enabledAtLocation;
@property (nonatomic) BOOL enabledDrivingMode;
@property (nonatomic) BOOL enabledDuringEvent;
@property (nonatomic) BOOL enabledForOneHour;
@property (nonatomic) BOOL enabledFromControlCenterPhone;
@property (nonatomic) BOOL enabledFromControlCenterWatch;
@property (nonatomic) BOOL enabledSleepMode;
@property (nonatomic) BOOL enabledUntilEvening;
@property (nonatomic) BOOL enabledUntilMorning;
@property (nonatomic) BOOL manuallyEnabled;
@property (copy, nonatomic) NSNumber *numberOfManualSessions;
@property (copy, nonatomic) NSNumber *numberOfSessions;

@end

