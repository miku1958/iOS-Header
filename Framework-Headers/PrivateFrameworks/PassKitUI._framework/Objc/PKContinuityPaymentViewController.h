//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKAuthenticatorDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationFooterViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationStateMachineDelegate-Protocol.h>

@class LAUIPhysicalButtonView, NSArray, NSString, NSTimer, PKAuthenticator, PKContinuityPaymentCardSummaryView, PKContinuityPaymentFaviconView, PKPaymentAuthorizationFooterView, PKPaymentAuthorizationStateMachine, PKRemotePaymentRequest, UILabel, UIStackView, UIView, UIVisualEffectView;
@protocol PKPaymentAuthorizationHostProtocol;

@interface PKContinuityPaymentViewController : UIViewController <PKAuthenticatorDelegate, PKPaymentAuthorizationFooterViewDelegate, PKPaymentAuthorizationStateMachineDelegate>
{
    UIVisualEffectView *_backdropView;
    UIView *_dimmingBackgroundView;
    UIView *_compactRegion;
    LAUIPhysicalButtonView *_physicalButtonView;
    UILabel *_requestingDeviceLabel;
    UILabel *_requestingSiteLabel;
    UILabel *_priceLabel;
    UIView *_priceView;
    UIStackView *_summaryContainerView;
    PKContinuityPaymentCardSummaryView *_cardView;
    PKPaymentAuthorizationFooterView *_authorizationView;
    PKContinuityPaymentFaviconView *_faviconImage;
    UIViewController *_passcodeViewController;
    UIViewController *_passphraseViewController;
    BOOL _viewAppeared;
    BOOL _userIntentRequired;
    long long _userIntentStyle;
    long long _internalAuthenticationEvaluationState;
    BOOL _idleStateIsPasscode;
    long long _coachingState;
    long long _internalCoachingState;
    NSArray *_activeConstraints;
    NSArray *_defaultConstraints;
    NSArray *_compactConstraints;
    BOOL _authenticating;
    PKAuthenticator *_authenticator;
    PKPaymentAuthorizationStateMachine *_stateMachine;
    NSTimer *_timeoutTimer;
    BOOL _attemptedTimeout;
    id<PKPaymentAuthorizationHostProtocol> _delegate;
    PKRemotePaymentRequest *_remoteRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKPaymentAuthorizationHostProtocol> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) PKRemotePaymentRequest *remoteRequest; // @synthesize remoteRequest=_remoteRequest;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_authenticatorPolicy;
- (BOOL)_canShowWhileLocked;
- (void)_cancelPassphrasePressed;
- (void)_didCancel;
- (void)_didFailWithError:(id)arg1;
- (void)_didFailWithFatalError:(id)arg1;
- (void)_didSucceedWithAuthorizationStateParam:(id)arg1;
- (id)_evaluationRequestWithHasInitialAuthenticatorState:(BOOL)arg1 initialAuthenticatorState:(unsigned long long)arg2;
- (void)_invalidPaymentDataWithParam:(id)arg1;
- (void)_processClientCallback:(id)arg1;
- (long long)_progressStateForAuthenticationWithBiometricFailure:(BOOL)arg1;
- (void)_resetAndScheduleTimeout;
- (void)_resumeAuthenticationWithPreviousError:(id)arg1;
- (void)_setAuthenticating:(BOOL)arg1;
- (void)_setPasscodeViewController:(id)arg1;
- (void)_setPassphraseViewController:(id)arg1;
- (void)_setUserIntentRequired:(BOOL)arg1;
- (void)_startEvaluationWithHasInitialAuthenticatorState:(BOOL)arg1 initialAuthenticatorState:(unsigned long long)arg2;
- (void)_suspendAuthentication;
- (void)_timeoutFired;
- (void)_updateActiveConstraints;
- (void)_updateCardView;
- (void)_updateCoachingState;
- (void)_updatePendingTransaction:(id)arg1 withAuthorizationStateParam:(id)arg2;
- (void)_updateProgressStateIfAuthenticatingWithBiometricFailure:(BOOL)arg1;
- (void)_updateUserIntentRequired;
- (void)_updateUserIntentStyle;
- (void)authenticator:(id)arg1 didTransitionToCoachingState:(long long)arg2;
- (void)authenticator:(id)arg1 didTransitionToEvaluationStateWithEvent:(CDStruct_912cb5d2)arg2;
- (void)authorizationDidAuthorizePaymentCompleteWithResult:(id)arg1;
- (void)authorizationFooterViewDidChangeConstraints:(id)arg1;
- (void)authorizationFooterViewPasscodeButtonPressed:(id)arg1;
- (void)cancelPressed:(id)arg1;
- (void)dealloc;
- (void)dismissPasscodeViewController;
- (void)dismissPassphraseViewController;
- (id)init;
- (id)initWithRemotePaymentRequest:(id)arg1;
- (void)invalidate;
- (void)loadView;
- (BOOL)paymentAuthorizationStateMachine:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 withParam:(id)arg4;
- (BOOL)paymentPass:(id *)arg1 paymentApplication:(id *)arg2 fromAID:(id)arg3;
- (void)presentPasscodeViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;
- (void)presentPassphraseViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setProgressState:(long long)arg1 string:(id)arg2 animated:(BOOL)arg3;
- (void)setProgressState:(long long)arg1 string:(id)arg2 animated:(BOOL)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)updatePaymentWithClientUpdate:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

