//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sharing/SFXPCClient.h>

#import <Sharing/SFActivityAdvertiserClient-Protocol.h>

@class NSString;
@protocol SFActivityAdvertiserDelegate;

@interface SFActivityAdvertiser : SFXPCClient <SFActivityAdvertiserClient>
{
    id<SFActivityAdvertiserDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property id<SFActivityAdvertiserDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedAdvertiser;
- (void)_getRemoteObjectProxyOnQueue:(CDUnknownBlockType)arg1;
- (void)activityPayloadForAdvertisementPayload:(id)arg1 command:(id)arg2 requestedByDevice:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)advertiseAdvertisementPayload:(id)arg1 options:(id)arg2;
- (void)didSendPayloadForActivityIdentifier:(id)arg1 toDevice:(id)arg2 error:(id)arg3;
- (id)exportedInterface;
- (void)fetchLoginIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchPeerForUUID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)fetchSFPeerDevicesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)machServiceName;
- (void)pairedDevicesChanged:(id)arg1;
- (id)remoteObjectInterface;
- (BOOL)shouldEscapeXpcTryCatch;

@end

