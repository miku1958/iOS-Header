//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, SFEventMessage, SFRequestMessage, SFResponseMessage, SFSession;

@protocol SDXPCSessionInterface
- (void)sessionActivate:(SFSession *)arg1 completion:(void (^)(NSError *))arg2;
- (void)sessionSendEvent:(SFEventMessage *)arg1;
- (void)sessionSendFrameType:(unsigned char)arg1 data:(NSData *)arg2;
- (void)sessionSendRequest:(SFRequestMessage *)arg1;
- (void)sessionSendResponse:(SFResponseMessage *)arg1;
@end
