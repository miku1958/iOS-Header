//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AppPredictionUI/APUIIntentHandlingViewControllerDelegate-Protocol.h>
#import <AppPredictionUI/APUILongLookViewControllerDataSource-Protocol.h>
#import <AppPredictionUI/APUILongLookViewControllerDelegate-Protocol.h>
#import <AppPredictionUI/CRKCardPresentationDelegate-Protocol.h>
#import <AppPredictionUI/CRKCardViewControllerDelegate-Protocol.h>
#import <AppPredictionUI/PLPreviewInteractionManagerDelegate-Protocol.h>
#import <AppPredictionUI/PLPreviewInteractionPresenting-Protocol.h>
#import <AppPredictionUI/SearchUIResultShortLook-Protocol.h>

@class APUIIntentHandlingViewController, APUILongLookViewController, ATXAction, CRKCardPresentation, INIntent, INInteraction, NSString, NSUserActivity, NSUserDefaults, PLPreviewInteractionManager, SFSearchResult, UIView;
@protocol APUIShortLookViewControllerDelegate, CRKCardViewControllerDelegate, CRKCardViewControlling, PLPreviewInteractionPresentable;

@interface APUIShortLookViewController : UIViewController <APUIIntentHandlingViewControllerDelegate, CRKCardPresentationDelegate, CRKCardViewControllerDelegate, PLPreviewInteractionPresenting, PLPreviewInteractionManagerDelegate, APUILongLookViewControllerDataSource, APUILongLookViewControllerDelegate, SearchUIResultShortLook>
{
    APUILongLookViewController<PLPreviewInteractionPresentable> *_presentableViewController;
    BOOL _safeToReleaseLongLookViewController;
    double _preferredPlatterContentHeight;
    BOOL _acceptPlatterTaps;
    long long _dismissalReason;
    BOOL _actionCompletedSuccessfully;
    BOOL _hasShownLongLook;
    BOOL _wasPresentedImmediately;
    BOOL _representsVoiceShortcut;
    NSUserDefaults *_userDefaults;
    INIntent *_intent;
    NSUserActivity *_userActivity;
    PLPreviewInteractionManager *_previewInteractionManager;
    NSString *_bundleId;
    SFSearchResult *_searchResult;
    id<APUIShortLookViewControllerDelegate> _delegate;
    APUIIntentHandlingViewController *_intentHandlingViewController;
    ATXAction *_atxAction;
    INInteraction *_interaction;
    CRKCardPresentation *_cardPresentation;
    UIViewController<CRKCardViewControlling> *_currentCardViewController;
}

@property (strong, nonatomic) ATXAction *atxAction; // @synthesize atxAction=_atxAction;
@property (copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property (strong, nonatomic) CRKCardPresentation *cardPresentation; // @synthesize cardPresentation=_cardPresentation;
@property (readonly, nonatomic) id<CRKCardViewControllerDelegate> cardViewControllerDelegate;
@property (strong, nonatomic) UIViewController<CRKCardViewControlling> *currentCardViewController; // @synthesize currentCardViewController=_currentCardViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<APUIShortLookViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) struct CGRect finalDismissedFrameOfViewForPreview;
@property (readonly, nonatomic) struct CGRect finalPresentedFrameOfViewForPreview;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct CGRect initialPresentedFrameOfViewForPreview;
@property (strong, nonatomic) INIntent *intent; // @synthesize intent=_intent;
@property (strong, nonatomic) APUIIntentHandlingViewController *intentHandlingViewController; // @synthesize intentHandlingViewController=_intentHandlingViewController;
@property (strong, nonatomic) INInteraction *interaction; // @synthesize interaction=_interaction;
@property (readonly, nonatomic) PLPreviewInteractionManager *previewInteractionManager; // @synthesize previewInteractionManager=_previewInteractionManager;
@property (strong, nonatomic) SFSearchResult *searchResult; // @synthesize searchResult=_searchResult;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property (readonly, nonatomic) UIView *viewForPreview;

- (void).cxx_destruct;
- (long long)_actionTypeForMetrics;
- (id)_cardContentWithIntentResponse:(id)arg1;
- (id)_debugStringForNSUA;
- (id)_defaults;
- (void)_dismissLongLookWithReason:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleActionButtonForIntent;
- (id)_intentConfirmationActions;
- (BOOL)_isDoNotDisturbIntent;
- (void)_resetRepresentedObjectState;
- (BOOL)_shouldAcceptPlatterTaps;
- (BOOL)_shouldTellDelegateToClearActionOnDismissal:(long long)arg1;
- (id)_titleForLongLookViewController:(id)arg1;
- (id)appIconImageForLongLook:(id)arg1;
- (id)bundleIdentifierForAppIconInLongLook:(id)arg1;
- (void)cardViewControllerBoundsDidChange:(id)arg1;
- (void)cardViewControllerDidLoad:(id)arg1;
- (id)containerViewForPreviewInteractionManager:(id)arg1;
- (BOOL)fetchViewControllerForContentViewInLongLook:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)intentHandlingViewController:(id)arg1 didComplete:(BOOL)arg2;
- (void)intentHandlingViewController:(id)arg1 requiresConfirmationWithResponse:(id)arg2 confirmationActionTitle:(id)arg3;
- (void)intentHandlingViewController:(id)arg1 wantsPreferredSize:(struct CGSize)arg2;
- (void)intentHandlingViewController:(id)arg1 willContinueInAppForIntent:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)intentHandlingViewControllerDidFailAuthorizationCheck:(id)arg1;
- (id)interfaceActionsForLongLook:(id)arg1;
- (void)longLookPlatterDidReceiveTap:(id)arg1;
- (void)longLookPlatterDidTapUtilityButton:(id)arg1;
- (BOOL)longLookPlatterShouldShowUtilityButton:(id)arg1;
- (double)preferredContentHeightForLongLook:(id)arg1;
- (BOOL)presentImmediately:(CDUnknownBlockType)arg1;
- (id)presentedViewControllerForPreviewInteractionManager:(id)arg1;
- (void)previewInteractionManager:(id)arg1 willDismissPresentedContentWithTrigger:(long long)arg2;
- (void)previewInteractionManagerDidEndUserInteraction:(id)arg1;
- (BOOL)previewInteractionManagerShouldAutomaticallyTransitionToPreviewAfterDelay:(id)arg1;
- (void)previewInteractionManagerWillBeginUserInteraction:(id)arg1;
- (void)setView:(id)arg1;
- (id)titleForLongLookHeaderInLongLook:(id)arg1;
- (void)viewDidLoad;

@end

