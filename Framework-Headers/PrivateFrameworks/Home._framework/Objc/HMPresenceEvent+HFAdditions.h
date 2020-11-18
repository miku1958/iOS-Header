//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMPresenceEvent.h>

#import <Home/HFLocationBasedEvent-Protocol.h>

@class NSString;

@interface HMPresenceEvent (HFAdditions) <HFLocationBasedEvent>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long hf_activationGranularity;
@property (readonly, nonatomic) unsigned long long hf_eventType;
@property (readonly) Class superclass;

+ (unsigned long long)hf_locationEventTypeForPresenceEventType:(unsigned long long)arg1;
+ (unsigned long long)hf_presenceDisableReasonsForHome:(id)arg1;
@end
