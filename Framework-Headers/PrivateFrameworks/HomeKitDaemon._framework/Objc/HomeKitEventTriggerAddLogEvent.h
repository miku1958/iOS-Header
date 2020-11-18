//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class HMDAnalyticsAddEventTriggerData, NSString;

@interface HomeKitEventTriggerAddLogEvent : HMDLogEvent <HMDAWDLogEvent>
{
    HMDAnalyticsAddEventTriggerData *_analyticsData;
}

@property (readonly, nonatomic) HMDAnalyticsAddEventTriggerData *analyticsData; // @synthesize analyticsData=_analyticsData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)uuid;
- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)init;
- (id)metricForAWD;

@end
