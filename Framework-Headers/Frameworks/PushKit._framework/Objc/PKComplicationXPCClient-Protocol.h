//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSDictionary;

@protocol PKComplicationXPCClient
- (void)complicationPayloadReceived:(NSDictionary *)arg1;
- (void)complicationRegistrationSucceededWithDeviceToken:(NSData *)arg1;

@optional
- (void)complicationRegistrationFailed;
@end

