//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/SFProxCardXPCClientInterface-Protocol.h>

@class CUBluetoothClient, NSString, SDStatusMonitor, SFBluetoothPairingSession, SFProxCardSessionClient, SFService, SFSession;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFShareAudioService : NSObject <SFProxCardXPCClientInterface>
{
    NSString *_guestDeviceAddress;
    NSString *_headphonesAddress;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    SFBluetoothPairingSession *_pairingSession;
    SFProxCardSessionClient *_proxCardSessionClient;
    CDUnknownBlockType _responseHandler;
    SFService *_sfService;
    SFSession *_sfSession;
    CUBluetoothClient *_searchBTClient;
    NSObject<OS_dispatch_source> *_searchTimer;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SDStatusMonitor *_statusMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SDStatusMonitor *statusMonitor; // @synthesize statusMonitor=_statusMonitor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleSessionEnded:(id)arg1 error:(id)arg2;
- (void)_handleSessionStarted:(id)arg1;
- (void)_handleShareAudioFoundDevice:(id)arg1;
- (void)_handleShareAudioPairingCompleted:(id)arg1 error:(id)arg2;
- (void)_handleShareAudioRequest2:(id)arg1 contact:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)_handleShareAudioRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_handleShareAudioResponse:(int)arg1 error:(id)arg2;
- (void)_handleShareAudioSearchTimeout;
- (void)_invalidate;
- (void)_sfServiceStart;
- (void)activate;
- (id)init;
- (void)invalidate;
- (void)xpcPerformAction:(int)arg1 completion:(CDUnknownBlockType)arg2;

@end

