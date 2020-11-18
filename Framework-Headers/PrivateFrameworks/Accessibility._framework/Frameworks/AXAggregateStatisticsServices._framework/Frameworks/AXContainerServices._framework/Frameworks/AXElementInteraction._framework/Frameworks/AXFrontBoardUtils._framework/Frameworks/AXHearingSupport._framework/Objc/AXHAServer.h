//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AXHearingSupport/AXHeardServer.h>

#import <AXHearingSupport/AXHARemoteUpdateProtocol-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol AXHAServerDelegate;

@interface AXHAServer : AXHeardServer <AXHARemoteUpdateProtocol>
{
    NSMutableDictionary *_responseBlocks;
    BOOL _hearingAidConnectedOrReachable;
    NSArray *_availableHearingAids;
    NSArray *_availableControllers;
    NSMutableDictionary *_updates;
}

@property (strong, nonatomic) NSArray *availableControllers; // @synthesize availableControllers=_availableControllers;
@property (strong, nonatomic) NSArray *availableHearingAids; // @synthesize availableHearingAids=_availableHearingAids;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<AXHAServerDelegate> delegate; // @dynamic delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hearingAidConnectedOrReachable; // @synthesize hearingAidConnectedOrReachable=_hearingAidConnectedOrReachable;
@property (readonly, nonatomic) BOOL hearingAidReachable;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSMutableDictionary *updates; // @synthesize updates=_updates;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)availableDevicesDidUpdate:(id)arg1;
- (void)cancelHearingAidConnectionRequest;
- (void)connectToControllerWithID:(id)arg1;
- (void)dealloc;
- (void)deviceDidUpdateProperty:(id)arg1;
- (void)handleMessageWithPayload:(id)arg1 forIdentifier:(unsigned long long)arg2;
- (id)init;
- (void)liveListenDidUpdate:(id)arg1;
- (void)registerListener:(id)arg1 forAvailableDeviceHandler:(CDUnknownBlockType)arg2;
- (void)registerListener:(id)arg1 forLiveListenLevelsHandler:(CDUnknownBlockType)arg2;
- (void)registerListener:(id)arg1 forPropertyUpdateHandler:(CDUnknownBlockType)arg2;
- (void)registerResponseBlock:(CDUnknownBlockType)arg1 forUUID:(id)arg2;
- (void)registerUpdateBlock:(id)arg1 forIdentier:(unsigned long long)arg2 withListener:(id)arg3;
- (void)requestHearingAidConnectionWithReason:(long long)arg1;
- (void)resetConnection;
- (void)startLiveListen;
- (void)startServerWithDelegate:(id)arg1;
- (void)stopLiveListen;
- (void)unregisterUpdateListener:(id)arg1;
- (void)updateProperty:(unsigned long long)arg1 forDeviceID:(id)arg2;
- (void)writeValue:(id)arg1 forProperty:(unsigned long long)arg2 forDeviceID:(id)arg3;

@end

