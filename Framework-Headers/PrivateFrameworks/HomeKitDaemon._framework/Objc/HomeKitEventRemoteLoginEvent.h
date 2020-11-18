//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>
#import <HomeKitDaemon/HomeKitEventRemoteLoginMetricProtocol-Protocol.h>

@class AWDHomeKitRemoteLogin, NSDate, NSString;

@interface HomeKitEventRemoteLoginEvent : HMDLogEvent <HMDAWDLogEvent, HomeKitEventRemoteLoginMetricProtocol>
{
    AWDHomeKitRemoteLogin *_metric;
    NSDate *_startTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) AWDHomeKitRemoteLogin *metric; // @synthesize metric=_metric;
@property (readonly, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)uuid;
- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)initWithSessionID:(id)arg1;
- (id)metricForAWD;
- (void)setError:(id)arg1;

@end

