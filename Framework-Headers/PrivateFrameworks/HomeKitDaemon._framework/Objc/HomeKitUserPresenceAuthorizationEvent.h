//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class AWDHomeKitUserPresenceAuthorization, NSString;

@interface HomeKitUserPresenceAuthorizationEvent : HMDLogEvent <HMDAWDLogEvent>
{
    AWDHomeKitUserPresenceAuthorization *_metric;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) AWDHomeKitUserPresenceAuthorization *metric; // @synthesize metric=_metric;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)uuid;
- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)init;
- (id)metricForAWD;

@end

