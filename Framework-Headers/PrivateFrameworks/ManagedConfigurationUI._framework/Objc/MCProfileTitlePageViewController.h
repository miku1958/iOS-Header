//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfigurationUI/MCSectionBasedTableViewController.h>

#import <ManagedConfigurationUI/DevicePINControllerDelegate-Protocol.h>
#import <ManagedConfigurationUI/MCProfileQuestionsControllerDelegate-Protocol.h>
#import <ManagedConfigurationUI/MCProfileTitlePageViewModelDelegate-Protocol.h>
#import <ManagedConfigurationUI/MCUIDismissalAwareViewController-Protocol.h>
#import <ManagedConfigurationUI/MCUISignInViewControllerDelegate-Protocol.h>
#import <ManagedConfigurationUI/UIScrollViewDelegate-Protocol.h>

@class MCActivityViewController, MCInstallProfileQuestionViewController, MCProfileTitlePageMetaDataSectionAnimationController, MCProfileTitlePageMetaDataSectionController, MCProfileTitlePageView, MCProfileTitlePageViewModel, NSString;

@interface MCProfileTitlePageViewController : MCSectionBasedTableViewController <UIScrollViewDelegate, MCProfileTitlePageViewModelDelegate, MCUISignInViewControllerDelegate, MCProfileQuestionsControllerDelegate, DevicePINControllerDelegate, MCUIDismissalAwareViewController>
{
    BOOL _hasUpdatedBottomInset;
    MCProfileTitlePageViewModel *_viewModel;
    MCProfileTitlePageView *_profileTitlePageView;
    double _metaDataSectionHeight;
    MCProfileTitlePageMetaDataSectionController *_metaDataSectionController;
    MCProfileTitlePageMetaDataSectionAnimationController *_animationController;
    MCInstallProfileQuestionViewController *_questionsController;
    MCActivityViewController *_activityViewController;
    CDUnknownBlockType _passcodeCompletionHandler;
    CDUnknownBlockType _authenticationCompletionHandler;
    CDUnknownBlockType _authenticationPreparationHandler;
    CDUnknownBlockType _userInputCompletionHandler;
}

@property (strong, nonatomic) MCActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property (strong, nonatomic) MCProfileTitlePageMetaDataSectionAnimationController *animationController; // @synthesize animationController=_animationController;
@property (copy, nonatomic) CDUnknownBlockType authenticationCompletionHandler; // @synthesize authenticationCompletionHandler=_authenticationCompletionHandler;
@property (copy, nonatomic) CDUnknownBlockType authenticationPreparationHandler; // @synthesize authenticationPreparationHandler=_authenticationPreparationHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasUpdatedBottomInset; // @synthesize hasUpdatedBottomInset=_hasUpdatedBottomInset;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MCProfileTitlePageMetaDataSectionController *metaDataSectionController; // @synthesize metaDataSectionController=_metaDataSectionController;
@property (nonatomic) double metaDataSectionHeight; // @synthesize metaDataSectionHeight=_metaDataSectionHeight;
@property (copy, nonatomic) CDUnknownBlockType passcodeCompletionHandler; // @synthesize passcodeCompletionHandler=_passcodeCompletionHandler;
@property (strong, nonatomic) MCProfileTitlePageView *profileTitlePageView; // @synthesize profileTitlePageView=_profileTitlePageView;
@property (strong, nonatomic) MCInstallProfileQuestionViewController *questionsController; // @synthesize questionsController=_questionsController;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType userInputCompletionHandler; // @synthesize userInputCompletionHandler=_userInputCompletionHandler;
@property (strong, nonatomic) MCProfileTitlePageViewModel *viewModel; // @synthesize viewModel=_viewModel;

- (void).cxx_destruct;
- (void)_resetNavigationBarStyleForViewController:(id)arg1;
- (id)_sectionControllersWithProfile:(id)arg1;
- (void)_showAlertForInstallError:(id)arg1;
- (void)_updateBottomInsetToEnableCompleteScrollAnimation;
- (void)_updateMetaDataSectionHeight;
- (void)cancelButtonTapped:(id)arg1;
- (void)dealloc;
- (id)defaultView;
- (void)didAcceptEnteredPIN:(id)arg1;
- (void)didCancelEnteringPIN;
- (void)infoButtonTapped:(id)arg1;
- (void)informQuestionViewControllerOfPreflightResult:(id)arg1 profileConnection:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithViewModel:(id)arg1;
- (void)installButtonTapped:(id)arg1;
- (void)installationFinishedSuccessfully:(BOOL)arg1 shouldDismiss:(BOOL)arg2 shouldRedirect:(BOOL)arg3 errorToDisplay:(id)arg4;
- (void)loadView;
- (void)presentAuthenticationViewControllerWithContext:(id)arg1 authenticationPreparationHandler:(CDUnknownBlockType)arg2 authenticationCompletionHandler:(CDUnknownBlockType)arg3;
- (void)presentSpinnerViewController;
- (void)promptForPasscodeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)promptForUserInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)questionsController:(id)arg1 didFinishWithResponses:(id)arg2;
- (BOOL)questionsControllerIsDisplayedInSheet:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setCurrentQuestionsController:(id)arg1;
- (void)setUserInteractionEnabled:(BOOL)arg1;
- (void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
- (void)signInViewController:(id)arg1 willAuthenticateWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)signInViewControllerDidCancelAuthentication:(id)arg1;
- (void)viewControllerHasBeenDismissed;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
