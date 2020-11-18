//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/SFActivityAdvertiserClient-Protocol.h>
#import <Sharing/SFCompanionXPCManagerObserver-Protocol.h>

@class NSString, SFInternalAdvertisement;
@protocol SFActivityAdvertiserDelegate, SFActivityAdvertiserProtocol;

@interface SFActivityAdvertiser : NSObject <SFCompanionXPCManagerObserver, SFActivityAdvertiserClient>
{
    id<SFActivityAdvertiserDelegate> _delegate;
    id<SFActivityAdvertiserProtocol> _connectionProxy;
    SFInternalAdvertisement *_currentAdvertisement;
}

@property (strong) id<SFActivityAdvertiserProtocol> connectionProxy; // @synthesize connectionProxy=_connectionProxy;
@property (strong) SFInternalAdvertisement *currentAdvertisement; // @synthesize currentAdvertisement=_currentAdvertisement;
@property (readonly, copy) NSString *debugDescription;
@property id<SFActivityAdvertiserDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedAdvertiser;
- (void)activityPayloadForAdvertisementPayload:(id)arg1 requestedByDevice:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)advertiseAdvertisementPayload:(id)arg1 options:(id)arg2;
- (void)dealloc;
- (void)didSendPayloadForActivityIdentifier:(id)arg1 toDevice:(id)arg2 error:(id)arg3;
- (id)init;
- (void)setupXPCConnection;
- (void)xpcManagerConnectionInterrupted;

@end

