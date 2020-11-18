//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import <PassKitUI/PKPaymentServiceDelegate-Protocol.h>
#import <PassKitUI/SBSHardwareButtonEventConsuming-Protocol.h>

@class CLInUseAssertion, NSArray, NSObject, NSString, PKAssertion, PKFieldDetectEducationViewController, PKFieldProperties, PKPassGroupsViewController, PKPaymentService, SBSAssertion;
@protocol BSInvalidatable, OS_dispatch_group;

@interface PKPaymentRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentServiceDelegate, SBSHardwareButtonEventConsuming>
{
    PKPassGroupsViewController *_passGroupsViewController;
    PKPaymentService *_paymentService;
    PKFieldProperties *_fieldProperties;
    NSArray *_fieldPassUniqueIdentifiers;
    NSString *_passUniqueIdentifier;
    CLInUseAssertion *_passbookForegroundAssertion;
    id<BSInvalidatable> _lockButtonObserver;
    SBSAssertion *_lockButtonAssertion;
    PKAssertion *_notificationSuppressionAssertion;
    NSObject<OS_dispatch_group> *_fieldPropertiesLookupGroup;
    long long _presentationSource;
    unsigned long long _presentationStartTime;
    BOOL _backlightActive;
    BOOL _deviceUILocked;
    BOOL _processHomeButtonEvents;
    PKFieldDetectEducationViewController *_educationVC;
    BOOL _appearedOnce;
    BOOL _insertedGroupsVC;
    BOOL _shouldInsertGroupsVC;
    BOOL _invalidated;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)_isSecureForRemoteViewService;
+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (id)groupsControllerWithSource:(long long)arg1;
- (void).cxx_destruct;
- (void)_appearIfNecessary;
- (void)_contactlessInterfaceSessionDidAuthorize:(id)arg1;
- (void)_contactlessInterfaceSessionFinishTransaction:(id)arg1;
- (void)_dismissForSource:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_dismissIfRestricted;
- (void)_insertGroupController;
- (void)_invalidate;
- (BOOL)_notificationIsFromChildViewController:(id)arg1;
- (void)_paymentDidReceiveSuccessfulTransactionNotification:(id)arg1;
- (void)_presentHomeButtonDoubleTapAlertIfNecessary;
- (void)_presentPassAnimated:(BOOL)arg1;
- (void)_setupGroupController;
- (void)_willAppearInRemoteViewController;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)consumeDoublePressUpForButtonKind:(long long)arg1;
- (void)dealloc;
- (void)handleHomeButtonPressed;
- (id)init;
- (void)linkedApplicationOpen:(id)arg1;
- (void)loadView;
- (void)setUserInfo:(id)arg1;
- (BOOL)shouldAutorotate;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end

