//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/AAUIGenericTermsRemoteUIDelegate-Protocol.h>
#import <AppleAccountUI/AAUISignInOperationDelegate-Protocol.h>

@class AAUIGenericTermsRemoteUI, ACAccountStore, ACAccountType, CUMessageSession, NSLock, NSMutableDictionary, NSString, UIViewController;

@interface AAUISignInFlowController : NSObject <AAUIGenericTermsRemoteUIDelegate, AAUISignInOperationDelegate>
{
    ACAccountStore *_accountStore;
    ACAccountType *_appleAccountType;
    AAUIGenericTermsRemoteUI *_genericTermsRemoteUI;
    CDUnknownBlockType _pendingCompletion;
    NSMutableDictionary *_cdpContextsByAccountID;
    NSLock *_cdpContextsByAccountIDLock;
    BOOL _shouldAutomaticallySaveSignInResults;
    BOOL _ignoreLockAssertErrors;
    BOOL _shouldStashLoginResponse;
    UIViewController *_presentingViewController;
    CUMessageSession *_messageSession;
    unsigned long long _activationAction;
}

@property (nonatomic) unsigned long long activationAction; // @synthesize activationAction=_activationAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL ignoreLockAssertErrors; // @synthesize ignoreLockAssertErrors=_ignoreLockAssertErrors;
@property (strong, nonatomic) CUMessageSession *messageSession; // @synthesize messageSession=_messageSession;
@property (weak, nonatomic) UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property (nonatomic) BOOL shouldAutomaticallySaveSignInResults; // @synthesize shouldAutomaticallySaveSignInResults=_shouldAutomaticallySaveSignInResults;
@property (nonatomic) BOOL shouldHideActivationLockAlert;
@property (nonatomic) BOOL shouldStashLoginResponse; // @synthesize shouldStashLoginResponse=_shouldStashLoginResponse;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_appleAccountType;
- (void)_hasActivationLockSupportedWatchWithCompletion:(CDUnknownBlockType)arg1;
- (id)_messageForErrorAlert:(long long)arg1;
- (void)_presentExistingAccountAlert:(id)arg1;
- (void)_presentUnableToSaveAccountAlert;
- (void)_presentValidationErrorAlert:(id)arg1 forAccount:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_promptToEnableFindMyIfPossibleWithAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_saveAccount:(id)arg1 withAllDataclassesEnabledIfPossibleWithCompletion:(CDUnknownBlockType)arg2;
- (void)_showGenericTermsUIforAccount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_stashLoginResponseWithAuthenticationResults:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_titleForError:(id)arg1 account:(id)arg2;
- (void)_updateAppleAccountIfNecessary:(id)arg1 withAltDSID:(id)arg2 rawPassword:(id)arg3;
- (void)_validateCDPStateForAccount:(id)arg1 withCDPContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_verifyLoginResponseForiCloudAccount:(id)arg1 withSuccess:(BOOL)arg2 response:(id)arg3 error:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)genericTermsRemoteUI:(id)arg1 didFinishWithSuccess:(BOOL)arg2;
- (id)init;
- (void)prewarmOperationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)signInOperationManager:(id)arg1 didSaveAccount:(id)arg2 error:(id)arg3;
- (void)signInWithIDMSAuthenticationResults:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

