//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSString;

@interface HMDHomeInviteLogEvent : HMDLogEvent <HMDAWDLogEvent>
{
    int _stage;
    int _responseType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) int responseType; // @synthesize responseType=_responseType;
@property (readonly, nonatomic) int stage; // @synthesize stage=_stage;
@property (readonly) Class superclass;

+ (id)homeInvitationWithStage:(int)arg1;
+ (id)homeInvitationWithStage:(int)arg1 responseType:(int)arg2;
+ (id)uuid;
- (unsigned int)AWDMessageType;
- (id)initInvitationWithStage:(int)arg1 responseType:(int)arg2;
- (id)metricForAWD;

@end

