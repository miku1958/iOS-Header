//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSSet, SFDevice, SFDeviceOperationCDPSetup, SFDeviceOperationHomeKitSetup, SFSession, TROperationQueue, TRSession, UIViewController;
@protocol OS_dispatch_queue;

@interface SFDeviceSetupWHASession : NSObject
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    SFSession *_sfSession;
    int _sfSessionState;
    BOOL _sessionSecured;
    int _pairVerifyState;
    int _pairSetupState;
    int _infoExchangeState;
    unsigned long long _peerFeatureFlags;
    unsigned long long _peerProblemsFlags;
    int _trSessionState;
    TRSession *_trSession;
    NSMutableArray *_trOperations;
    TROperationQueue *_trOperationQueue;
    BOOL _trSetupConfigurationEnabled;
    int _trSetupConfigurationState;
    NSSet *_trUnauthServices;
    BOOL _trAuthenticationEnabled;
    int _trAuthenticationState;
    BOOL _cdpEnabled;
    SFDeviceOperationCDPSetup *_cdpSetupOperation;
    double _cdpSetupSecs;
    int _cdpState;
    SFDeviceOperationHomeKitSetup *_homeKitSetup;
    int _homeKitState;
    BOOL _homeKitDoFullSetup;
    int _finishState;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SFDevice *_peerDevice;
    UIViewController *_presentingViewController;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _promptForHomeHandler;
    CDUnknownBlockType _promptForPINHandler;
    CDUnknownBlockType _promptForRoomHandler;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (strong, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property (strong, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property (copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForHomeHandler; // @synthesize promptForHomeHandler=_promptForHomeHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForPINHandler; // @synthesize promptForPINHandler=_promptForPINHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForRoomHandler; // @synthesize promptForRoomHandler=_promptForRoomHandler;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_reportError:(id)arg1;
- (void)_run;
- (int)_runCDPSetup;
- (int)_runFinish;
- (int)_runHomeKitSetup;
- (int)_runInfoExchange;
- (void)_runInfoExchangeRequest;
- (void)_runInfoExchangeResponse:(id)arg1 error:(id)arg2;
- (int)_runPairSetup;
- (int)_runPairVerify;
- (int)_runSFSessionStart;
- (int)_runTRAuthentication;
- (int)_runTRSessionStart;
- (int)_runTRSetupConfiguration;
- (BOOL)_verifyiCloudMatch:(unsigned long long)arg1 error:(id *)arg2;
- (void)activate;
- (void)dealloc;
- (void)homeKitSelectHome:(id)arg1;
- (void)homeKitSelectRoom:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)pairSetupTryPIN:(id)arg1;

@end

