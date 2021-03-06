//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Sharing/AAUIGenericTermsRemoteUIDelegate-Protocol.h>

@class AAUIGenericTermsRemoteUI, ACAccountStore, NSMutableArray, NSString, SFDevice, SFSession, TROperationQueue, TRSession, UIViewController;
@protocol OS_dispatch_queue;

@interface SFAuthenticateAccountsSession : NSObject <AAUIGenericTermsRemoteUIDelegate>
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    unsigned long long _startTicks;
    int _accountsState;
    ACAccountStore *_accountStore;
    int _iCloudTermsState;
    AAUIGenericTermsRemoteUI *_termsRemoteUI;
    SFSession *_sfSession;
    int _sfSessionState;
    BOOL _sessionSecured;
    int _pairVerifyState;
    int _pairSetupState;
    int _infoExchangeState;
    unsigned int _targetedAccountTypes;
    int _trSessionState;
    TRSession *_trSession;
    NSMutableArray *_trOperations;
    TROperationQueue *_trOperationQueue;
    BOOL _trAuthenticationEnabled;
    int _trAuthenticationState;
    int _finishState;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SFDevice *_peerDevice;
    UIViewController *_presentingViewController;
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _promptForPINHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property (strong, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property (copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property (copy, nonatomic) CDUnknownBlockType promptForPINHandler; // @synthesize promptForPINHandler=_promptForPINHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)__runFinishWithSFSession:(id)arg1;
- (int)__validateAccountsWithAccountStore:(id)arg1;
- (id)_availableAccountsToSignIn;
- (void)_cleanup;
- (void)_handleShowTermsUI:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)_presentiCloudTermsUIWithAccount:(id)arg1;
- (void)_reportError:(id)arg1;
- (void)_run;
- (int)_runFinish;
- (int)_runInfoExchange;
- (void)_runInfoExchangeRequest;
- (void)_runInfoExchangeResponse:(id)arg1 error:(id)arg2;
- (int)_runPairSetup;
- (int)_runPairVerify;
- (int)_runSFSessionStart;
- (int)_runTRAuthentication;
- (int)_runTRSessionStart;
- (id)_trTargetedServices;
- (int)_validateAccounts;
- (int)_validateiCloudAccountTerms;
- (void)activate;
- (void)dealloc;
- (void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(BOOL)arg2;
- (id)init;
- (void)invalidate;
- (void)pairSetupTryPIN:(id)arg1;

@end

