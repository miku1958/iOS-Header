//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class NSData, NSDictionary, VCTransportSessionLegacy;

@protocol VCTransportSessionLegacyDelegate <NSObject>
- (void)transportSession:(VCTransportSessionLegacy *)arg1 cancelRelayRequest:(NSDictionary *)arg2;
- (void)transportSession:(VCTransportSessionLegacy *)arg1 connectionSetupDataDidChange:(NSData *)arg2;
- (void)transportSession:(VCTransportSessionLegacy *)arg1 initiateRelayRequest:(NSDictionary *)arg2;
- (void)transportSession:(VCTransportSessionLegacy *)arg1 sendRelayResponse:(NSDictionary *)arg2;
@end
