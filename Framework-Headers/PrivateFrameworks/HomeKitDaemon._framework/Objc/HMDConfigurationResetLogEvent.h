//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSString;

@interface HMDConfigurationResetLogEvent : HMDLogEvent <HMDAWDLogEvent>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)configurationReset;
+ (id)uuid;
- (unsigned int)AWDMessageType;
- (id)metricForAWD;

@end

