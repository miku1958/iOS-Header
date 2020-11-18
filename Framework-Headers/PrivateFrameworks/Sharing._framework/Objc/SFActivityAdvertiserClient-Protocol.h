//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sharing/NSObject-Protocol.h>

@class NSData, NSError, NSUUID, SFPeerDevice;

@protocol SFActivityAdvertiserClient <NSObject>
- (void)activityPayloadForAdvertisementPayload:(NSData *)arg1 requestedByDevice:(SFPeerDevice *)arg2 withCompletionHandler:(void (^)(NSUUID *, NSData *, NSError *))arg3;
- (void)didSendPayloadForActivityIdentifier:(NSUUID *)arg1 toDevice:(SFPeerDevice *)arg2 error:(NSError *)arg3;
@end

