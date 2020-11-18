//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/PKPassFooterContentView.h>

#import <PassKitUI/PKAuthenticatorDelegate-Protocol.h>
#import <PassKitUI/PKContactlessInterfaceSessionDelegate-Protocol.h>
#import <PassKitUI/PKPassPaymentApplicationViewDelegate-Protocol.h>
#import <PassKitUI/PKPassPaymentPayStateViewDelegate-Protocol.h>
#import <PassKitUI/PKPassPaymentSummaryViewDelegate-Protocol.h>
#import <PassKitUI/PKPaymentConfirmationAlertControllerDelegate-Protocol.h>
#import <PassKitUI/PKPaymentServiceDelegate-Protocol.h>

@class NSData, NSMutableArray, NSNumber, NSObject, NSString, PKAuthenticator, PKContactlessInterfaceSession, PKPassLibrary, PKPassPaymentApplicationView, PKPassPaymentPayStateView, PKPassPaymentSummaryView, PKPassValueAddedServiceInfoView, PKPaymentConfirmationAlertController, PKPaymentService, UIButton, UIView, UIViewController, _UIFeedbackEventBehavior, _UIFeedbackImpactBehavior;
@protocol OS_dispatch_source;

@interface PKPassPaymentContainerView : PKPassFooterContentView <PKPaymentServiceDelegate, PKAuthenticatorDelegate, PKPassPaymentSummaryViewDelegate, PKPassPaymentPayStateViewDelegate, PKPassPaymentApplicationViewDelegate, PKContactlessInterfaceSessionDelegate, PKPaymentConfirmationAlertControllerDelegate>
{
    PKPaymentService *_paymentService;
    PKAuthenticator *_authenticator;
    PKContactlessInterfaceSession *_contactlessInterfaceSession;
    PKPassPaymentPayStateView *_payStateView;
    UIView *_summaryView;
    PKPassLibrary *_passLibrary;
    PKPassPaymentSummaryView *_paymentSummaryView;
    PKPassPaymentApplicationView *_applicationsView;
    PKPassValueAddedServiceInfoView *_valueAddedServiceInfoView;
    UIButton *_actionButton;
    NSString *_pendingPayStateTextOverride;
    unsigned long long _payStateTransitionCounter;
    long long _pendingPayState;
    long long _currentPayState;
    unsigned long long _authenticatorState;
    BOOL _authenticating;
    BOOL _recognizing;
    BOOL _returnToSummaryOnFingerOff;
    BOOL _needsConfirmation;
    BOOL _transitioning;
    NSMutableArray *_transitionCompletionHandlers;
    BOOL _waitingForGlyphView;
    BOOL _presentingPasscode;
    BOOL _requiresPasscodeDismissal;
    UIViewController *_passcodePresenterVC;
    BOOL _inBackground;
    unsigned long long _deactivationReasons;
    BOOL _isVisible;
    BOOL _shouldShowApplications;
    BOOL _enhancedContrast;
    BOOL _valueAddedServiceInfoViewHidden;
    BOOL _waitingForPasses;
    double _lastFieldExitTime;
    NSNumber *_pendingPresentationContextState;
    double _lastFingerOnTime;
    double _lastTransactionTime;
    NSObject<OS_dispatch_source> *_summaryAuthenticationTimer;
    PKPaymentConfirmationAlertController *_confirmationAlertController;
    NSData *_stashedAuthenticationCredential;
    long long _style;
    NSMutableArray *_whitelistedValueAddedPasses;
    NSMutableArray *_greylistedValueAddedPasses;
    _UIFeedbackEventBehavior *_paymentSuccessBehavior;
    _UIFeedbackImpactBehavior *_paymentFailureBehavior;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateForPayment;
- (void)_addTransitionCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_applyLatestTransactionAndMessageToSummaryView;
- (void)_applyPayState:(long long)arg1;
- (void)_applyPayState:(long long)arg1 afterDelay:(double)arg2;
- (void)_applyPayState:(long long)arg1 withTextOverride:(id)arg2;
- (void)_applyPayState:(long long)arg1 withTextOverride:(id)arg2 animated:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_applyPayState:(long long)arg1 withTextOverride:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_applyPaymentFailureState:(BOOL)arg1;
- (void)_applyPaymentSuccessfulState;
- (void)_applyPresentationPayState:(long long)arg1;
- (BOOL)_authenticationAllowed;
- (BOOL)_authorizeForTransactionWithCredential:(id)arg1;
- (void)_beginPasscodeOnlyAuthentication;
- (void)_beginPaymentAuthorization;
- (void)_beginPaymentAuthorizationWithImmediatePasscode:(BOOL)arg1;
- (void)_beginSummaryAuthenticationIfNecessary;
- (id)_buttonForState:(long long)arg1;
- (id)_buttonWithTitle:(id)arg1 alignment:(long long)arg2 action:(SEL)arg3;
- (BOOL)_canAuthenticateWithPasscode;
- (BOOL)_canAuthenticateWithTouchID;
- (void)_cancelSummaryAuthenticationTimer;
- (void)_configureForPaymentWithPaymentPass:(id)arg1 context:(id)arg2;
- (void)_configureForStyle:(long long)arg1 context:(id)arg2;
- (void)_configureForValueAddedServiceWithPass:(id)arg1 context:(id)arg2;
- (void)_didPerformConfirmation;
- (void)_dismissPile;
- (id)_emphasisButtonForState:(long long)arg1;
- (void)_emphasizeStateIfPossible:(long long)arg1 withTextOverride:(id)arg2;
- (void)_emphasizeStateIfPossible:(long long)arg1 withTextOverride:(id)arg2 playSystemSound:(BOOL)arg3;
- (void)_endContactlessPaymentSession;
- (void)_endFingerprintAnimationWithSuccess:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_endFingerprintAnimationWithSuccess:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_endPaymentAuthorization;
- (void)_endTransition:(BOOL)arg1;
- (void)_executeTransitionCompletionHandlers:(BOOL)arg1;
- (id)_filledButtonWithTitle:(id)arg1 alignment:(long long)arg2 action:(SEL)arg3;
- (void)_handleAddDeactivationReasonNotification:(id)arg1;
- (void)_handleContactlessInterfaceSessionDidEnterField:(id)arg1 withProperties:(id)arg2;
- (void)_handleEnterBackgroundNotification:(id)arg1;
- (void)_handleEnterForegroundNotification:(id)arg1;
- (void)_handleRemoveDeactivationReasonNotification:(id)arg1;
- (BOOL)_hasValueAddedServicePasses;
- (BOOL)_isDeactivatedWithReasons:(unsigned long long)arg1;
- (BOOL)_isDemoMode;
- (BOOL)_isForegroundActiveWithReasons:(unsigned long long)arg1;
- (BOOL)_isInBackgroundWithReasons:(unsigned long long)arg1;
- (BOOL)_isLifecycleNotificationRelevant:(id)arg1;
- (void)_layoutPaymentSubviews;
- (void)_layoutValueAddedServiceSubviews;
- (void)_lookupLatestMessageWithCompletion:(CDUnknownBlockType)arg1;
- (void)_lookupLatestTransactionWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_passContainsPaymentApplication:(id)arg1;
- (void)_passcodeAuthenticationButtonPressed:(id)arg1;
- (id)_passcodeButtonTitle;
- (void)_passcodeFallbackButtonPressed:(id)arg1;
- (void)_performAuthentication;
- (void)_performConfirmation;
- (void)_performConfirmationUsingAlertWithDelay:(double)arg1 ignoresFinger:(BOOL)arg2;
- (id)_preArmButtonTitle;
- (void)_prearmButtonPressed:(id)arg1;
- (void)_presentConfirmationAlertWithMethod:(long long)arg1 forPass:(id)arg2;
- (void)_presentPassWithUniqueIdentifier:(id)arg1 additionalPassUniqueIdentifiers:(id)arg2;
- (void)_presentPassWithUniqueIdentifier:(id)arg1 additionalPassUniqueIdentifiers:(id)arg2 payState:(long long)arg3;
- (void)_processPaymentTransactionForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_processValueAddedServiceTransactionsForContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_promoteToAuthorizedStateIfPossible;
- (void)_resetToIdleState;
- (void)_resetToIdleStateAfterDelay:(double)arg1;
- (void)_resetToIdleStateAfterDelay:(double)arg1 whileIgnoreField:(BOOL)arg2;
- (void)_resetToIdleStateWhileIgnoringField:(BOOL)arg1;
- (BOOL)_restartPaymentAuthorization;
- (void)_setValueAddedServiceInfoViewHidden:(BOOL)arg1;
- (void)_setValueAddedServiceInfoViewHidden:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setValueAddedServicePasses:(id)arg1;
- (BOOL)_shouldShowTerminalIsNotRequestingPaymentError;
- (BOOL)_showSummaryState;
- (void)_showTerminalIsNotRequestingPaymentError;
- (void)_showTerminalIsRequestingPaymentError;
- (void)_startFingerprintAnimation;
- (void)_transitionToState:(long long)arg1 withTextOverride:(id)arg2 animated:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_transitionViewsAnimated:(BOOL)arg1;
- (void)_updateApplicationsView;
- (void)_updateAuthenticatorState;
- (double)_valueAddedServiceInfoViewTopMargin;
- (BOOL)_valueAddedServiceViewHidden;
- (void)authenticatorDidEncounterFingerOff:(id)arg1;
- (void)authenticatorDidEncounterFingerOn:(id)arg1;
- (void)authenticatorDidEncounterMatchMiss:(id)arg1;
- (void)authenticatorWillRestartEvaluation:(id)arg1;
- (void)contactlessInterfaceSession:(id)arg1 didFinishTransactionWithContext:(id)arg2;
- (void)contactlessInterfaceSession:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)contactlessInterfaceSessionDidEnterField:(id)arg1 withProperties:(id)arg2;
- (void)contactlessInterfaceSessionDidExitField:(id)arg1;
- (void)contactlessInterfaceSessionDidFail:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4;
- (void)contactlessInterfaceSessionDidFailTransaction:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3;
- (void)contactlessInterfaceSessionDidSelectPayment:(id)arg1;
- (void)contactlessInterfaceSessionDidTimeout:(id)arg1 forPaymentApplication:(id)arg2 paymentPass:(id)arg3 valueAddedServicePasses:(id)arg4;
- (void)dealloc;
- (void)didBecomeHiddenAnimated:(BOOL)arg1;
- (void)didBecomeVisibleAnimated:(BOOL)arg1;
- (void)didCancelConfirmationAlert;
- (void)dismissPasscodeViewController;
- (id)initWithStyle:(long long)arg1 pass:(id)arg2 context:(id)arg3 paymentSession:(id)arg4;
- (BOOL)isPassAuthorized;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)payStateView:(id)arg1 revealingCheckmark:(BOOL)arg2;
- (void)paymentApplicationView:(id)arg1 didSelectApplication:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)paymentServiceReceivedInterruption;
- (void)presentPasscodeViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;
- (void)summaryView:(id)arg1 didArchiveMessage:(id)arg2;
- (void)willBecomeHiddenAnimated:(BOOL)arg1;
- (void)willBecomeVisibleAnimated:(BOOL)arg1;

@end
