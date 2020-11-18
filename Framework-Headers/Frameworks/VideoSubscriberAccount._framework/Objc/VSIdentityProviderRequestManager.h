//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/VSApplicationControllerDelegate-Protocol.h>

@class NSMutableArray, NSOperationQueue, NSString, VSAccount, VSAccountStore, VSApplicationController, VSApplicationControllerRequest, VSIdentityProvider, VSViewModel;
@protocol OS_dispatch_source, VSIdentityProviderRequestManagerDelegate;

@interface VSIdentityProviderRequestManager : NSObject <VSApplicationControllerDelegate>
{
    BOOL _showingUserInterface;
    BOOL _didCreateAccount;
    BOOL _allowsApplicationControllerTimer;
    VSIdentityProvider *_identityProvider;
    id<VSIdentityProviderRequestManagerDelegate> _delegate;
    NSOperationQueue *_privateQueue;
    NSMutableArray *_requestContexts;
    VSApplicationController *_applicationController;
    VSApplicationControllerRequest *_currentApplicationControllerRequest;
    VSViewModel *_viewModel;
    VSAccount *_account;
    VSAccountStore *_accountStore;
    NSObject<OS_dispatch_source> *_applicationControllerTimerSource;
    double _applicationControllerTimerLeeway;
    double _requestCompletionDelayAfterShowingUserInterface;
    double _applicationControllerTimerDelay;
}

@property (strong, nonatomic) VSAccount *account; // @synthesize account=_account;
@property (strong, nonatomic) VSAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property (nonatomic) BOOL allowsApplicationControllerTimer; // @synthesize allowsApplicationControllerTimer=_allowsApplicationControllerTimer;
@property (strong, nonatomic) VSApplicationController *applicationController; // @synthesize applicationController=_applicationController;
@property (nonatomic) double applicationControllerTimerDelay; // @synthesize applicationControllerTimerDelay=_applicationControllerTimerDelay;
@property (nonatomic) double applicationControllerTimerLeeway; // @synthesize applicationControllerTimerLeeway=_applicationControllerTimerLeeway;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *applicationControllerTimerSource; // @synthesize applicationControllerTimerSource=_applicationControllerTimerSource;
@property (strong, nonatomic) VSApplicationControllerRequest *currentApplicationControllerRequest; // @synthesize currentApplicationControllerRequest=_currentApplicationControllerRequest;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VSIdentityProviderRequestManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didCreateAccount; // @synthesize didCreateAccount=_didCreateAccount;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) VSIdentityProvider *identityProvider; // @synthesize identityProvider=_identityProvider;
@property (strong, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property (nonatomic) double requestCompletionDelayAfterShowingUserInterface; // @synthesize requestCompletionDelayAfterShowingUserInterface=_requestCompletionDelayAfterShowingUserInterface;
@property (strong, nonatomic) NSMutableArray *requestContexts; // @synthesize requestContexts=_requestContexts;
@property (nonatomic) BOOL showingUserInterface; // @synthesize showingUserInterface=_showingUserInterface;
@property (readonly) Class superclass;
@property (strong, nonatomic) VSViewModel *viewModel; // @synthesize viewModel=_viewModel;

- (void).cxx_destruct;
- (id)_accountMetadataWithSAMLResponseString:(id)arg1 accountMetadataRequest:(id)arg2 verificationData:(id)arg3;
- (id)_applicationControllerRequestWithIdentityProviderRequest:(id)arg1;
- (BOOL)_canShowAuthenticationUI;
- (void)_completeAuthenticationRequestWithApplicationControllerResponse:(id)arg1;
- (void)_completeCachedAccountMetadataRequest;
- (void)_completeCurrentRequestWithApplicationControllerResponse:(id)arg1;
- (void)_completeCurrentRequestWithApplicationControllerResponse:(id)arg1 verificationData:(id)arg2;
- (void)_completeCurrentRequestWithError:(id)arg1;
- (void)_completeCurrentRequestWithResult:(id)arg1;
- (void)_completeDeletingAccountWithError:(id)arg1;
- (id)_currentRequest;
- (id)_currentRequestContext;
- (BOOL)_handleAccountMetadataRequest:(id)arg1 didCompleteWithResponse:(id)arg2;
- (void)_handleApplicationControllerError:(id)arg1 forRequest:(id)arg2;
- (BOOL)_handleAuthenticationRequest:(id)arg1 didCompleteWithResponse:(id)arg2;
- (BOOL)_handleLogoutRequestDidComplete:(id)arg1;
- (BOOL)_handleSilentAuthenticationRequest:(id)arg1 didCompleteWithResponse:(id)arg2;
- (void)_hideUserInterfaceIfNecessary;
- (void)_notifyDidAuthenticateAccount;
- (void)_processRequestContext:(id)arg1;
- (double)_requestCompletionDelay;
- (BOOL)_requestRequiresApplicationController:(id)arg1;
- (BOOL)_requestRequiresApplicationControllerIgnoringAuthentication:(id)arg1;
- (void)_resetVerificationStateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_showAuthenticationUIWithPurpose:(long long)arg1;
- (void)_startApplicationControllerTimer;
- (void)_startDeletingAccount;
- (void)_startObservingViewModel:(id)arg1;
- (void)_stopApplicationController;
- (void)_stopApplicationControllerTimer;
- (void)_stopObservingViewModel:(id)arg1;
- (void)_submitApplicationControllerRequest:(id)arg1;
- (void)_updateAccountWithAccountAuthentication:(id)arg1;
- (void)applicationController:(id)arg1 didReceiveViewModel:(id)arg2;
- (void)applicationController:(id)arg1 didReceiveViewModelError:(id)arg2;
- (void)applicationController:(id)arg1 request:(id)arg2 didCompleteWithResponse:(id)arg3;
- (void)applicationController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;
- (void)applicationController:(id)arg1 startDidFailWithError:(id)arg2;
- (void)applicationControllerDidStart:(id)arg1;
- (void)dealloc;
- (void)enqueueRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithIdentityProvider:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end
