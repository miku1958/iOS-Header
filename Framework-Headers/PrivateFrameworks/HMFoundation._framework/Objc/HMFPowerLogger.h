//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HMFPowerLogger : HMFObject
{
}

+ (id)sharedPowerLogger;
- (id)linkTypeDescription:(long long)arg1;
- (void)reportConnection:(id)arg1 linkType:(long long)arg2;
- (void)reportIncomingAdvertisementChange:(id)arg1;
- (void)reportIncomingCloudPush:(id)arg1;
- (void)reportIncomingIDSPush:(id)arg1 fromToken:(id)arg2;
- (void)reportIncomingIPEvent:(id)arg1;
- (void)reportIncomingLoxyMessage:(id)arg1;

@end
