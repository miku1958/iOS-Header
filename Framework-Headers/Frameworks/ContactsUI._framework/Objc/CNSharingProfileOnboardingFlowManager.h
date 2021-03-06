//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNAvatarEditingManagerDelegate-Protocol.h>
#import <ContactsUI/CNPhotoPickerVariantListControllerDelegate-Protocol.h>
#import <ContactsUI/CNSharingProfileOnboardingAudienceControllerDelegate-Protocol.h>
#import <ContactsUI/CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNSharingProfileOnboardingPosePickerControllerDelegate-Protocol.h>
#import <ContactsUI/CNSharingProfileOnboardingVariantViewControllerDelegate-Protocol.h>

@class CNAvatarEditingManager, CNContact, CNPhotoPickerProviderItem, CNPhotoPickerVariantsManager, CNSharingProfileAvatarItemProviderConfiguration, CNSharingProfileLogger, CNSharingProfileOnboardingPhotoSelectionResult, CNSharingProfileOnboardingPhotoSelectionViewController, CNSharingProfileOnboardingPosePickerController, CNSharingProfileOnboardingVariantViewController, NSString, UINavigationController;
@protocol AVTAvatarRecord, CNSharingProfileOnboardingAudienceController, CNSharingProfileOnboardingFlowManagerDelegate;

@interface CNSharingProfileOnboardingFlowManager : NSObject <CNSharingProfileOnboardingPhotoSelectionViewControllerDelegate, CNSharingProfileOnboardingAudienceControllerDelegate, CNPhotoPickerVariantListControllerDelegate, CNSharingProfileOnboardingVariantViewControllerDelegate, CNAvatarEditingManagerDelegate, CNSharingProfileOnboardingPosePickerControllerDelegate>
{
    BOOL _shouldAnimateNavTransitions;
    BOOL _isRunning;
    BOOL _didPersistToMeCard;
    id<CNSharingProfileOnboardingFlowManagerDelegate> _delegate;
    UINavigationController *_navigationController;
    CNContact *_contact;
    id<AVTAvatarRecord> _avatarRecord;
    CNSharingProfileAvatarItemProviderConfiguration *_avatarItemProviderConfiguration;
    CNSharingProfileOnboardingPhotoSelectionViewController *_photoSelectionController;
    CNSharingProfileOnboardingPosePickerController *_posePickerController;
    CNSharingProfileOnboardingVariantViewController *_variantController;
    id<CNSharingProfileOnboardingAudienceController> _audienceViewController;
    CNSharingProfileOnboardingPhotoSelectionResult *_photoSelectionResult;
    CNPhotoPickerVariantsManager *_variantsManager;
    CNPhotoPickerProviderItem *_selectedVariantItem;
    CNAvatarEditingManager *_avatarEditingManager;
    CNSharingProfileLogger *_logger;
}

@property (strong, nonatomic) id<CNSharingProfileOnboardingAudienceController> audienceViewController; // @synthesize audienceViewController=_audienceViewController;
@property (strong, nonatomic) CNAvatarEditingManager *avatarEditingManager; // @synthesize avatarEditingManager=_avatarEditingManager;
@property (strong, nonatomic) CNSharingProfileAvatarItemProviderConfiguration *avatarItemProviderConfiguration; // @synthesize avatarItemProviderConfiguration=_avatarItemProviderConfiguration;
@property (strong, nonatomic) id<AVTAvatarRecord> avatarRecord; // @synthesize avatarRecord=_avatarRecord;
@property (strong, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CNSharingProfileOnboardingFlowManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didPersistToMeCard; // @synthesize didPersistToMeCard=_didPersistToMeCard;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isRunning; // @synthesize isRunning=_isRunning;
@property (strong, nonatomic) CNSharingProfileLogger *logger; // @synthesize logger=_logger;
@property (strong, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property (strong, nonatomic) CNSharingProfileOnboardingPhotoSelectionViewController *photoSelectionController; // @synthesize photoSelectionController=_photoSelectionController;
@property (strong, nonatomic) CNSharingProfileOnboardingPhotoSelectionResult *photoSelectionResult; // @synthesize photoSelectionResult=_photoSelectionResult;
@property (strong, nonatomic) CNSharingProfileOnboardingPosePickerController *posePickerController; // @synthesize posePickerController=_posePickerController;
@property (strong, nonatomic) CNPhotoPickerProviderItem *selectedVariantItem; // @synthesize selectedVariantItem=_selectedVariantItem;
@property (nonatomic) BOOL shouldAnimateNavTransitions; // @synthesize shouldAnimateNavTransitions=_shouldAnimateNavTransitions;
@property (readonly) Class superclass;
@property (strong, nonatomic) CNSharingProfileOnboardingVariantViewController *variantController; // @synthesize variantController=_variantController;
@property (strong, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // @synthesize variantsManager=_variantsManager;

+ (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
- (void)audienceController:(id)arg1 didFinishWithContact:(id)arg2 sharingAudience:(unsigned long long)arg3;
- (void)audienceControllerDidTapSetupLater:(id)arg1;
- (unsigned long long)imageTypeForAvatarType:(long long)arg1;
- (id)initWithNavigationController:(id)arg1 contact:(id)arg2 avatarRecord:(id)arg3 avatarItemProviderConfiguration:(id)arg4;
- (id)initWithNavigationController:(id)arg1 contact:(id)arg2 avatarRecord:(id)arg3 avatarItemProviderConfiguration:(id)arg4 logger:(id)arg5;
- (void)notifyDelegateOfSetupLaterSelected;
- (void)onboardingVariantControllerDidTapBack:(id)arg1;
- (void)onboardingVariantControllerDidTapContinue:(id)arg1;
- (void)onboardingVariantControllerDidTapPose:(id)arg1;
- (void)onboardingVariantControllerDidTapSetupLater:(id)arg1;
- (void)photoSelectionViewControllerDidFinishWithResult:(id)arg1;
- (void)photoSelectionViewControllerDidTapSetupLater:(id)arg1;
- (void)posePickerController:(id)arg1 didFinishWithProviderItem:(id)arg2;
- (void)posePickerControllerDidSelectBack:(id)arg1;
- (void)posePickerControllerDidSelectSetupLater:(id)arg1;
- (id)prepareVariantsControllerForResult:(id)arg1;
- (void)presentAnimojiPoseCapture;
- (void)presentMeCardAlertForResult:(id)arg1;
- (void)presentMeCardPersistanceAlertWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)presentNameAndAudienceControllerForContact:(id)arg1;
- (id)providerItemForPhotoResult:(id)arg1;
- (void)saveCurrentInfoToMeCard;
- (void)startFlow;

@end

