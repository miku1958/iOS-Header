//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CDPContext, CDPStateController, SFDevice, SFSession;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupSessioniOS : NSObject
{
    BOOL _activateCalled;
    BOOL _buddyComplete;
    BOOL _configRequestSent;
    BOOL _configResponseReceived;
    BOOL _invalidateCalled;
    BOOL _pairSetupDone;
    BOOL _pairSetupReset;
    BOOL _pairSetupRunning;
    int _preAuthPairSetupState;
    BOOL _preAuthRequestSent;
    BOOL _preAuthResponseReceived;
    SFSession *_sfSession;
    BOOL _sfSessionActivated;
    int _cdpState;
    CDPContext *_cdpContext;
    CDPStateController *_cdpController;
    unsigned int _pairFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    SFDevice *_peerDevice;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _promptForPINHandler;
    CDUnknownBlockType _receivedObjectHandler;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (nonatomic) unsigned int pairFlags; // @synthesize pairFlags=_pairFlags;
@property (strong, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property (copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForPINHandler; // @synthesize promptForPINHandler=_promptForPINHandler;
@property (copy, nonatomic) CDUnknownBlockType receivedObjectHandler; // @synthesize receivedObjectHandler=_receivedObjectHandler;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_completedWithError:(id)arg1;
- (void)_handleSetupActionRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_receivedConfigResponse:(id)arg1;
- (void)_receivedObject:(id)arg1 flags:(unsigned int)arg2;
- (void)_run;
- (int)_runCoreCDPSetup;
- (int)_runPreAuthPairSetup;
- (void)_runSFSessionActivated;
- (void)_runSFSessionStart;
- (void)_sendConfigInfo;
- (void)_sendPreAuthInfo;
- (void)_startBuddySession;
- (void)activate;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)tryPIN:(id)arg1;

@end

