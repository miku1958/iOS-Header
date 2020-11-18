//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/PKAuthenticatorDelegate-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationPresentationObserver-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationServiceProtocol-Protocol.h>
#import <PassKitUI/PKPaymentAuthorizationStateMachineDelegate-Protocol.h>
#import <PassKitUI/UINavigationControllerDelegate-Protocol.h>
#import <PassKitUI/UITableViewDataSource-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, PKAuthenticator, PKPaymentAuthorizationFooterView, PKPaymentAuthorizationLayout, PKPaymentAuthorizationNavigationBar, PKPaymentAuthorizationStateMachine, PKPaymentAuthorizationSummaryItemsView, PKPaymentAuthorizationTotalView, PKPaymentPreferencesViewController, UITableView, UIView, _UIFeedbackEventBehavior, _UIFeedbackImpactBehavior;
@protocol PKPaymentAuthorizationHostProtocol;

@interface PKPaymentAuthorizationServiceViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UINavigationControllerDelegate, PKAuthenticatorDelegate, PKPaymentAuthorizationStateMachineDelegate, PKPaymentAuthorizationServiceProtocol, PKPaymentAuthorizationPresentationObserver>
{
    PKPaymentAuthorizationLayout *_layout;
    PKPaymentAuthorizationNavigationBar *_navBar;
    UIView *_contentView;
    UITableView *_detailTableView;
    PKPaymentAuthorizationSummaryItemsView *_summaryItemsView;
    PKPaymentAuthorizationTotalView *_totalView;
    PKPaymentAuthorizationFooterView *_footerView;
    UIView *_passphraseSeparatorView;
    NSLayoutConstraint *_contentViewTopConstraint;
    NSLayoutConstraint *_contentViewRightConstraint;
    PKPaymentPreferencesViewController *_shippingMethodPreferencesController;
    PKPaymentPreferencesViewController *_shippingAddressPreferencesController;
    PKPaymentPreferencesViewController *_shippingContactPreferencesController;
    PKPaymentPreferencesViewController *_paymentCardPreferencesController;
    BOOL _hostApplicationResignedActive;
    BOOL _hostApplicationEnteredBackground;
    BOOL _treatingHostAsBackgrounded;
    BOOL _requestingInAppPIN;
    int _preferencesStyle;
    struct __IOHIDEventSystemClient *_hidSystemClient;
    _UIFeedbackEventBehavior *_paymentSuccessBehavior;
    _UIFeedbackImpactBehavior *_paymentFailureBehavior;
    PKPaymentAuthorizationStateMachine *_stateMachine;
    PKAuthenticator *_authenticator;
    id<PKPaymentAuthorizationHostProtocol> _delegate;
}

@property (strong, nonatomic) PKAuthenticator *authenticator; // @synthesize authenticator=_authenticator;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKPaymentAuthorizationHostProtocol> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PKPaymentAuthorizationStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addPassphraseViewControllerToHierarchy:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (long long)_authenticatorPolicy;
- (void)_createSubviews;
- (void)_didCancel:(BOOL)arg1;
- (void)_didFailWithError:(id)arg1;
- (void)_didFailWithFatalError:(id)arg1;
- (void)_didSucceed;
- (id)_evaluationRequest;
- (void)_handleModelUpdate;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (void)_invalidPaymentDataWithParam:(id)arg1;
- (void)_payWithPasscodePressed:(id)arg1;
- (id)_paymentAuthorizationPresentationController;
- (id)_paymentWithToken:(id)arg1;
- (void)_processClientCallback:(id)arg1;
- (void)_removePassphraseViewFromHierarchy;
- (void)_removeSimulatorHIDListener;
- (void)_resumeAuthenticationWithPreviousError:(id)arg1;
- (void)_selectOptionsForDataItem:(id)arg1;
- (void)_setupPaymentPassAndBillingAddress;
- (void)_setupShippingAddress;
- (void)_setupShippingContact;
- (void)_setupShippingMethods;
- (void)_setupWithPaymentRequest:(id)arg1 fromAppWithLocalizedName:(id)arg2 andApplicationIdentifier:(id)arg3;
- (void)_startEvaluation;
- (void)_startSimulatorHIDListener;
- (void)_suspendAuthentication;
- (Class)_tableViewClassForDataItem:(id)arg1;
- (long long)_totalViewStyle;
- (void)_updateBackgroundedState:(BOOL)arg1;
- (void)_updatePreferredContentSize;
- (void)_updatePreferredContentSize:(struct CGSize)arg1;
- (void)_updateShippingMethods;
- (Class)_viewPresenterClassForDataItem:(id)arg1;
- (void)authenticatorDidEncounterFingerOff:(id)arg1;
- (void)authenticatorDidEncounterFingerOn:(id)arg1;
- (void)authenticatorDidEncounterMatchMiss:(id)arg1;
- (void)authorizationDidAuthorizePaymentCompleteWithStatus:(long long)arg1;
- (void)authorizationDidRequestMerchantSessionCompleteWithSession:(id)arg1 error:(id)arg2;
- (void)authorizationDidSelectPaymentMethodCompleteWithPaymentSummaryItems:(id)arg1;
- (void)authorizationDidSelectShippingAddressCompleteWithStatus:(long long)arg1 shippingMethods:(id)arg2 paymentSummaryItems:(id)arg3;
- (void)authorizationDidSelectShippingMethodCompleteWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2;
- (void)cancelPressed:(id)arg1;
- (void)dealloc;
- (void)dismissPasscodeViewController;
- (void)dismissPassphraseViewController;
- (void)handleHostApplicationDidBecomeActive;
- (void)handleHostApplicationDidCancel;
- (void)handleHostApplicationWillResignActive:(BOOL)arg1;
- (id)handlePaymentRequest:(id)arg1 fromAppWithLocalizedName:(id)arg2 andApplicationIdentifier:(id)arg3;
- (id)initWithLayout:(id)arg1;
- (BOOL)paymentAuthorizationStateMachine:(id)arg1 didTransitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3 withParam:(id)arg4;
- (void)presentPasscodeViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;
- (void)presentPassphraseViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 reply:(CDUnknownBlockType)arg3;
- (void)resumeAndUpdateContentSize;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
