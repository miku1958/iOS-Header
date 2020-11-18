//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/UIActionSheetPresentationControllerDelegate-Protocol.h>
#import <UIKitCore/_UIRemoteViewControllerContaining-Protocol.h>
#import <UIKitCore/_UISharingPublicController-Protocol.h>

@class CKContainer, CKContainerSetupInfo, CKShare, NSDictionary, NSObject, NSString, _UIRemoteViewController, _UIResilientRemoteViewContainerViewController, _UIShareInvitationRemoteViewController;
@protocol OS_dispatch_semaphore, UICloudSharingControllerDelegate, _UICloudSharingControllerDelegate_Internal;

@interface UICloudSharingController : UIViewController <_UISharingPublicController, UIActionSheetPresentationControllerDelegate, _UIRemoteViewControllerContaining>
{
    BOOL _isDelayingPresentation;
    NSObject<OS_dispatch_semaphore> *_viewServiceValidSema;
    BOOL _shareNeedsDeletion;
    BOOL _primaryAuxiliarySwitchState;
    BOOL _secondaryAuxiliarySwitchState;
    id<UICloudSharingControllerDelegate> _delegate;
    CKShare *_share;
    unsigned long long _availablePermissions;
    _UIResilientRemoteViewContainerViewController *_childViewController;
    _UIShareInvitationRemoteViewController *_remoteViewController;
    CKContainer *_container;
    CKContainerSetupInfo *_containerSetupInfo;
    NSDictionary *_participantDetails;
    CDUnknownBlockType _preparationHandler;
    UIViewController *_originalPresentingViewController;
    UIViewController *_strongReferenceToOurself;
    NSString *_primaryAuxiliarySwitchTitle;
    NSString *_secondaryAuxiliarySwitchTitle;
    id<_UICloudSharingControllerDelegate_Internal> _internalDelegate;
}

@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (nonatomic) unsigned long long availablePermissions; // @synthesize availablePermissions=_availablePermissions;
@property (strong, nonatomic, getter=_childViewController, setter=_setChildViewController:) _UIResilientRemoteViewContainerViewController *childViewController; // @synthesize childViewController=_childViewController;
@property (strong, nonatomic) CKContainer *container; // @synthesize container=_container;
@property (strong, nonatomic) CKContainerSetupInfo *containerSetupInfo; // @synthesize containerSetupInfo=_containerSetupInfo;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UICloudSharingControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<_UICloudSharingControllerDelegate_Internal> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property (weak, nonatomic, getter=_originalPresentingViewController, setter=_setOriginalPresentingViewController:) UIViewController *originalPresentingViewController; // @synthesize originalPresentingViewController=_originalPresentingViewController;
@property (strong, nonatomic, getter=_participantDetails, setter=_setParticipantDetails:) NSDictionary *participantDetails; // @synthesize participantDetails=_participantDetails;
@property (copy, nonatomic) CDUnknownBlockType preparationHandler; // @synthesize preparationHandler=_preparationHandler;
@property (nonatomic, getter=_primaryAuxiliarySwitchState, setter=_setPrimaryAuxiliarySwitchState:) BOOL primaryAuxiliarySwitchState; // @synthesize primaryAuxiliarySwitchState=_primaryAuxiliarySwitchState;
@property (strong, nonatomic, getter=_primaryAuxiliarySwitchTitle, setter=_setPrimaryAuxiliarySwitchTitle:) NSString *primaryAuxiliarySwitchTitle; // @synthesize primaryAuxiliarySwitchTitle=_primaryAuxiliarySwitchTitle;
@property (readonly, nonatomic, getter=_remoteViewController) _UIShareInvitationRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property (nonatomic, getter=_secondaryAuxiliarySwitchState, setter=_setSecondaryAuxiliarySwitchState:) BOOL secondaryAuxiliarySwitchState; // @synthesize secondaryAuxiliarySwitchState=_secondaryAuxiliarySwitchState;
@property (strong, nonatomic, getter=_secondaryAuxiliarySwitchTitle, setter=_setSecondaryAuxiliarySwitchTitle:) NSString *secondaryAuxiliarySwitchTitle; // @synthesize secondaryAuxiliarySwitchTitle=_secondaryAuxiliarySwitchTitle;
@property (strong, nonatomic) CKShare *share; // @synthesize share=_share;
@property (strong, nonatomic, getter=_strongReferenceToOurself, setter=_setStrongReferenceToOurself:) UIViewController *strongReferenceToOurself; // @synthesize strongReferenceToOurself=_strongReferenceToOurself;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)__viewControllerWillBePresented:(BOOL)arg1;
- (void)_callPreparationHandler:(CDUnknownBlockType)arg1;
- (void)_cloudSharingControllerDidModifyPrimarySwitch:(BOOL)arg1;
- (void)_cloudSharingControllerDidModifySecondarySwitch:(BOOL)arg1;
- (BOOL)_commonInit;
- (id)_customPresentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)_deleteShareAfterDismissalWithoutSave:(CDUnknownBlockType)arg1;
- (void)_didDismiss;
- (void)_dismissForActivityRepresentation:(CDUnknownBlockType)arg1;
- (void)_dismissViewControllerWithError:(id)arg1;
- (void)_performAuxiliaryActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_performHeaderActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_representFullscreenAfterActivityDismissal:(CDUnknownBlockType)arg1;
- (void)_requestSavedShareWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_requiresCustomPresentationController;
- (void)_sendDidStopSharingDelegate;
- (void)_shareDidChange:(id)arg1;
- (void)_shareWasMadePrivate;
- (id)_sharingViewPresentationController;
- (id)activityItemSource;
- (void)dealloc;
- (id)initWithPreparationHandler:(CDUnknownBlockType)arg1;
- (id)initWithShare:(id)arg1 container:(id)arg2;
- (id)initWithShare:(id)arg1 preparationHandler:(CDUnknownBlockType)arg2;

@end

