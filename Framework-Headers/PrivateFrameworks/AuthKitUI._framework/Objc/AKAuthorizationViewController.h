//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AuthKitUI/AKAuthorizationContainerViewControllerDelegate-Protocol.h>
#import <AuthKitUI/AKAuthorizationPaneViewControllerDelegate-Protocol.h>

@class AKAuthorizationNavigationController, AKAuthorizationPresentationContext, AKAuthorizationScopeChoices, NSString;
@protocol AKAuthorizationViewControllerDelegate;

@interface AKAuthorizationViewController : UIViewController <AKAuthorizationContainerViewControllerDelegate, AKAuthorizationPaneViewControllerDelegate>
{
    AKAuthorizationPresentationContext *_presentationContext;
    id<AKAuthorizationViewControllerDelegate> _delegate;
    AKAuthorizationNavigationController *_navigationController;
    AKAuthorizationScopeChoices *_scopeChoices;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AKAuthorizationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) AKAuthorizationNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property (strong, nonatomic) AKAuthorizationPresentationContext *presentationContext; // @synthesize presentationContext=_presentationContext;
@property (readonly, nonatomic) AKAuthorizationScopeChoices *scopeChoices; // @synthesize scopeChoices=_scopeChoices;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backBarButtonItem;
- (void)_backButtonSelected:(id)arg1;
- (id)_cancelBarButtonItem;
- (void)_cancelButtonSelected:(id)arg1;
- (void)_delegate_authorizationViewControllerDidCompleteWithAuthorization:(id)arg1 error:(id)arg2;
- (id)_inputPaneViewController;
- (BOOL)_isFirstTimeAppleIDAuthorization;
- (id)_logoBarButtonItem:(id)arg1;
- (void)_presentAuthorizationViewController;
- (void)_presentContainerViewControllerWith:(id)arg1;
- (void)_presentFirstTimeViewController;
- (void)_presentInputPaneViewControllerReplacing:(BOOL)arg1;
- (void)authorizationContainerViewControllerDidDismiss:(id)arg1;
- (void)authorizationPaneViewController:(id)arg1 didRequestAuthorizationWithUserProvidedInformation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)authorizationPaneViewController:(id)arg1 didRequestIconWithCompletion:(CDUnknownBlockType)arg2;
- (void)authorizationPaneViewController:(id)arg1 dismissWithAuthorization:(id)arg2 error:(id)arg3;
- (void)authorizationPaneViewController:(id)arg1 pushEditScope:(id)arg2 presentationContext:(id)arg3 options:(id)arg4;
- (id)firstTimeViewController;
- (id)init;
- (id)initWithAuthorizationContext:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)modalPresentationStyle;
- (void)performAppleIDAuthorizationForPaneViewController:(id)arg1;
- (void)performPasswordAuthenticationForPaneViewController:(id)arg1;
- (void)presentAuthenticationChoiceUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentConfirmPaneViewController;
- (void)presentInputPaneViewController;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

