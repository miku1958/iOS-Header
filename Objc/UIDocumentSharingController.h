//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UIKit/UIActionSheetPresentationControllerDelegate-Protocol.h>
#import <UIKit/_UISharingPublicController-Protocol.h>

@class NSString, UIImage, _UIResilientRemoteViewContainerViewController, _UIShareInvitationRemoteViewController;
@protocol _UIDocumentSharingControllerDelegate_Private;

@interface UIDocumentSharingController : UIViewController <UIActionSheetPresentationControllerDelegate, _UISharingPublicController>
{
    BOOL _collaborationUIEnabled;
    BOOL _showOnlyAddPeople;
    BOOL _legacyAppearance;
    _UIResilientRemoteViewContainerViewController *_childViewController;
    UIViewController *_originalPresentingViewController;
    UIViewController *_strongReferenceToOurself;
    id _delegate;
    UIImage *_thumbnail;
    NSString *_auxiliaryActionTitle;
    NSString *_mailTemplate;
    NSString *_messageTemplate;
    NSString *_mailSubject;
    NSString *_initialHeaderSubtitle;
    NSString *_headerSubtitle;
    NSString *_headerActionTitle;
    NSString *_appName;
    id<_UIDocumentSharingControllerDelegate_Private> __privateDelegate;
}

@property (weak, nonatomic, getter=_privateDelegate, setter=_setPrivateDelegate:) id<_UIDocumentSharingControllerDelegate_Private> _privateDelegate; // @synthesize _privateDelegate=__privateDelegate;
@property (copy, nonatomic, getter=_appName, setter=_setAppName:) NSString *appName; // @synthesize appName=_appName;
@property (copy, nonatomic, getter=_auxiliaryActionTitle, setter=_setAuxiliaryActionTitle:) NSString *auxiliaryActionTitle; // @synthesize auxiliaryActionTitle=_auxiliaryActionTitle;
@property (strong, nonatomic, getter=_childViewController, setter=_setChildViewController:) _UIResilientRemoteViewContainerViewController *childViewController; // @synthesize childViewController=_childViewController;
@property (nonatomic, getter=_collaborationUIEnabled, setter=_setCollaborationUIEnabled:) BOOL collaborationUIEnabled; // @synthesize collaborationUIEnabled=_collaborationUIEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic, getter=_headerActionTitle, setter=_setHeaderActionTitle:) NSString *headerActionTitle; // @synthesize headerActionTitle=_headerActionTitle;
@property (copy, nonatomic, getter=_headerSubtitle, setter=_setHeaderSubtitle:) NSString *headerSubtitle; // @synthesize headerSubtitle=_headerSubtitle;
@property (copy, nonatomic, getter=_initialHeaderSubtitle, setter=_setInitialHeaderSubtitle:) NSString *initialHeaderSubtitle; // @synthesize initialHeaderSubtitle=_initialHeaderSubtitle;
@property (nonatomic, getter=_legacyAppearance, setter=_setLegacyAppearance:) BOOL legacyAppearance; // @synthesize legacyAppearance=_legacyAppearance;
@property (copy, nonatomic, getter=_mailSubject, setter=_setMailSubject:) NSString *mailSubject; // @synthesize mailSubject=_mailSubject;
@property (copy, nonatomic, getter=_mailTemplate, setter=_setMailTemplate:) NSString *mailTemplate; // @synthesize mailTemplate=_mailTemplate;
@property (copy, nonatomic, getter=_messageTemplate, setter=_setMessageTemplate:) NSString *messageTemplate; // @synthesize messageTemplate=_messageTemplate;
@property (weak, nonatomic, getter=_originalPresentingViewController, setter=_setOriginalPresentingViewController:) UIViewController *originalPresentingViewController; // @synthesize originalPresentingViewController=_originalPresentingViewController;
@property (readonly, nonatomic, getter=_remoteViewController) _UIShareInvitationRemoteViewController *remoteViewController;
@property (nonatomic, getter=_showOnlyAddPeople, setter=_setShowOnlyAddPeople:) BOOL showOnlyAddPeople; // @synthesize showOnlyAddPeople=_showOnlyAddPeople;
@property (strong, nonatomic, getter=_strongReferenceToOurself, setter=_setStrongReferenceToOurself:) UIViewController *strongReferenceToOurself; // @synthesize strongReferenceToOurself=_strongReferenceToOurself;
@property (readonly) Class superclass;
@property (copy, nonatomic, getter=_thumbnail, setter=_setThumbnail:) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;

- (void).cxx_destruct;
- (id)_customPresentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_didDismiss;
- (void)_dismissForActivityRepresentation:(CDUnknownBlockType)arg1;
- (void)_dismissViewControllerWithError:(id)arg1;
- (void)_performAuxiliaryActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performHeaderActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_representFullscreenAfterActivityDismissal:(CDUnknownBlockType)arg1;
- (void)_requestSavedShareWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_requiresCustomPresentationController;
- (void)_setMailSubject:(id)arg1 template:(id)arg2;
- (void)_shareDidChange:(id)arg1;
- (void)_shareWasMadePrivate;
- (id)_sharingViewPresentationController;
- (void)_updatePresentationStyleForLegacyAppearance;
- (void)dealloc;
- (id)initWithFileURL:(id)arg1;

@end

