//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNPhotoPickerVariantListController.h>

#import <ContactsUI/_UIScrollViewLayoutObserver-Protocol.h>

@class OBBoldTrayButton, OBButtonTray, OBHeaderView, OBLinkTrayButton, OBNavigationBarDisplayState, UINavigationController;
@protocol CNSharingProfileOnboardingVariantViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNSharingProfileOnboardingVariantViewController : CNPhotoPickerVariantListController <_UIScrollViewLayoutObserver>
{
    BOOL _shouldShowPoseButton;
    id<CNSharingProfileOnboardingVariantViewControllerDelegate> _onboardingDelegate;
    OBHeaderView *_onboardingHeaderView;
    OBButtonTray *_buttonTray;
    OBBoldTrayButton *_continueButton;
    OBLinkTrayButton *_poseButton;
    UINavigationController *_retainedNavigationController;
    OBNavigationBarDisplayState *_cachedBarState;
}

@property (strong, nonatomic) OBButtonTray *buttonTray; // @synthesize buttonTray=_buttonTray;
@property (strong, nonatomic) OBNavigationBarDisplayState *cachedBarState; // @synthesize cachedBarState=_cachedBarState;
@property (strong, nonatomic) OBBoldTrayButton *continueButton; // @synthesize continueButton=_continueButton;
@property (weak, nonatomic) id<CNSharingProfileOnboardingVariantViewControllerDelegate> onboardingDelegate; // @synthesize onboardingDelegate=_onboardingDelegate;
@property (strong, nonatomic) OBHeaderView *onboardingHeaderView; // @synthesize onboardingHeaderView=_onboardingHeaderView;
@property (strong, nonatomic) OBLinkTrayButton *poseButton; // @synthesize poseButton=_poseButton;
@property (strong, nonatomic) UINavigationController *retainedNavigationController; // @synthesize retainedNavigationController=_retainedNavigationController;
@property (nonatomic) BOOL shouldShowPoseButton; // @synthesize shouldShowPoseButton=_shouldShowPoseButton;

+ (BOOL)_navigationBarTitleShouldShowForHeaderView:(id)arg1 inScrollView:(id)arg2;
+ (void)updateNavigationBarWithNavigationItem:(id)arg1 forHeaderView:(id)arg2 inScrollView:(id)arg3 animated:(BOOL)arg4;
- (void).cxx_destruct;
- (BOOL)_scrollViewContentIsUnderTrayForScrollView:(id)arg1;
- (void)_scrollViewDidLayoutSubviews:(id)arg1;
- (void)applyAutomaticScrollToEdgeBehaviorToNavigationItem:(id)arg1 withDistance:(double)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)didTapContinue:(id)arg1;
- (void)didTapPose:(id)arg1;
- (id)navigationItem;
- (void)restoreNavigationBarAppearance;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateContentInsets:(struct UIEdgeInsets)arg1;
- (void)updateTrayBackgroundForScrollView:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end
