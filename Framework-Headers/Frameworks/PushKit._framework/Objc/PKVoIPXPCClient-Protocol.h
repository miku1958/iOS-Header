//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSDictionary;

@protocol PKVoIPXPCClient
- (void)voipPayloadReceived:(NSDictionary *)arg1;
- (void)voipRegistrationSucceededWithDeviceToken:(NSData *)arg1;

@optional
- (void)voipRegistrationFailed;
@end

