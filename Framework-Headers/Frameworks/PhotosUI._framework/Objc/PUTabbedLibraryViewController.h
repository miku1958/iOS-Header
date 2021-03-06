//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import <PhotosUI/PLAssetContainerListChangeObserver-Protocol.h>
#import <PhotosUI/PLAssetContainerObserver-Protocol.h>
#import <PhotosUI/PLInvitationRecordsObserver-Protocol.h>
#import <PhotosUI/PXChangeObserver-Protocol.h>
#import <PhotosUI/PXForcedDismissableViewController-Protocol.h>
#import <PhotosUI/PXRootLibraryNavigationController-Protocol.h>
#import <PhotosUI/PXSettingsKeyObserver-Protocol.h>
#import <PhotosUI/PXTabBarItemKeyCommandDelegate-Protocol.h>
#import <PhotosUI/PXUIKeyCommandDelegate-Protocol.h>
#import <PhotosUI/UINavigationControllerDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSMutableIndexSet, NSObject, NSString, PUImportViewController, PUMomentsZoomLevelManager, PUSessionInfo, PUTabbedLibraryViewControllerSpec, PUTabbedLibraryViewModel, PXForYouBadgeManager, PXProgrammaticNavigationRequest, UINavigationController;
@protocol OS_os_log, PXProgrammaticNavigationUpdateTarget;

@interface PUTabbedLibraryViewController : UITabBarController <PXSettingsKeyObserver, PXChangeObserver, PXTabBarItemKeyCommandDelegate, PXUIKeyCommandDelegate, PLAssetContainerListChangeObserver, PLAssetContainerObserver, PLInvitationRecordsObserver, PXForcedDismissableViewController, PXRootLibraryNavigationController, UINavigationControllerDelegate>
{
    PUTabbedLibraryViewControllerSpec *_spec;
    PUSessionInfo *_sessionInfo;
    int _pendingSelectedContentMode;
    BOOL _sharedTabBadgeIsDirty;
    NSString *_lastSelectedTabDescription;
    NSMutableDictionary *_filteredAlbumListsByContentMode;
    PUMomentsZoomLevelManager *_zoomLevelManager;
    NSMutableIndexSet *_everDisplayedContentModes;
    PUTabbedLibraryViewModel *_viewModel;
    BOOL _px_hidesTabBarForRegularHorizontalSizeClass;
    BOOL _shouldNavigateToAllPhotosAlbum;
    BOOL _shouldSuppressAnimationsDuringProgrammaticNavigation;
    PUImportViewController *_importViewController;
    NSArray *_excludedContentModes;
    id<PXProgrammaticNavigationUpdateTarget> _navigationUpdateTarget;
    PXForYouBadgeManager *_badgeManager;
    PXProgrammaticNavigationRequest *_pendingNavigationRequest;
}

@property (strong, nonatomic) PXForYouBadgeManager *badgeManager; // @synthesize badgeManager=_badgeManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *excludedContentModes; // @synthesize excludedContentModes=_excludedContentModes;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PUImportViewController *importViewController; // @synthesize importViewController=_importViewController;
@property (weak, nonatomic) id<PXProgrammaticNavigationUpdateTarget> navigationUpdateTarget; // @synthesize navigationUpdateTarget=_navigationUpdateTarget;
@property (strong, nonatomic) PXProgrammaticNavigationRequest *pendingNavigationRequest; // @synthesize pendingNavigationRequest=_pendingNavigationRequest;
@property (nonatomic, setter=px_setHidesTabBarForRegularHorizontalSizeClass:) BOOL px_hidesTabBarForRegularHorizontalSizeClass; // @synthesize px_hidesTabBarForRegularHorizontalSizeClass=_px_hidesTabBarForRegularHorizontalSizeClass;
@property (readonly, nonatomic) NSArray *rootViewControllers;
@property (nonatomic) int selectedContentMode;
@property (readonly, nonatomic) UINavigationController *selectedNavigationController;
@property (strong, nonatomic) PUSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property (nonatomic) BOOL shouldNavigateToAllPhotosAlbum; // @synthesize shouldNavigateToAllPhotosAlbum=_shouldNavigateToAllPhotosAlbum;
@property (nonatomic) BOOL shouldSuppressAnimationsDuringProgrammaticNavigation; // @synthesize shouldSuppressAnimationsDuringProgrammaticNavigation=_shouldSuppressAnimationsDuringProgrammaticNavigation;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_os_log> *tabbedLibraryLog;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
- (void).cxx_destruct;
- (id)_albumListForContentMode:(int)arg1 library:(id)arg2;
- (id)_availableAlbumToNavigateToAsset:(id)arg1 preferredAlbum:(id)arg2;
- (int)_contentModeForAlbum:(id)arg1;
- (int)_contentModeForNavigationController:(id)arg1;
- (void)_didFinishPostingNotifications:(id)arg1;
- (void)_enumerateViewControllersWithBlock:(CDUnknownBlockType)arg1;
- (id)_existingNavigationControllerForContentMode:(int)arg1;
- (void)_handleFetchedMomentShare:(id)arg1 atURL:(id)arg2 error:(id)arg3 timedOut:(BOOL)arg4;
- (BOOL)_isNavigationControllerBadged:(id)arg1;
- (void)_navigateToAlbum:(id)arg1 andPerformAction:(int)arg2 initiallyHidden:(BOOL)arg3 animated:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_navigateToAsset:(id)arg1 andPerformAction:(int)arg2 inAlbum:(id)arg3 animated:(BOOL)arg4;
- (void)_navigateToContentMode:(int)arg1 animated:(BOOL)arg2 dismissAnyPresentedViewController:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_navigateToContentMode:(int)arg1 defaultLocationIfNeverDisplayed:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)_navigateToDefaultLocationInNavigationController:(id)arg1 animated:(BOOL)arg2;
- (id)_navigateToForYou;
- (id)_navigateToMemoriesDismissingAnyPresentedViewController:(BOOL)arg1;
- (BOOL)_navigateToRootOfCurrentTabAnimated:(BOOL)arg1;
- (BOOL)_navigateToRootOfCurrentTabAnimated:(BOOL)arg1 dismissAnyPresentedViewController:(BOOL)arg2;
- (id)_navigationControllerForContentMode:(int)arg1;
- (Class)_navigationControllerLayoutTransitioningClass:(id)arg1;
- (BOOL)_navigationControllerShouldCrossFadeBottomBars:(id)arg1;
- (BOOL)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (id)_newNavigationControllerWithRootController:(id)arg1;
- (id)_nextCloudFeedNavigatingObject;
- (void)_sceneWillEnterForeground:(id)arg1;
- (id)_snapBackRootViewControllerInNavigationController:(id)arg1;
- (id)_tabRootViewControllerInNavigationController:(id)arg1;
- (void)_updateRootViewControllersInNavigationControllers:(id)arg1 tabBarHidden:(BOOL)arg2;
- (void)_updateSharedAlbumBadges;
- (void)_updateTabBarVisibilityForHorizontalSizeClass:(long long)arg1;
- (BOOL)albumIsAvailableForNavigation:(id)arg1;
- (void)assetContainerDidChange:(id)arg1;
- (void)assetContainerListDidChange:(id)arg1;
- (BOOL)assetIsAvailableForNavigation:(id)arg1 inAlbum:(id)arg2;
- (BOOL)assetIsAvailableForNavigationInMoments:(id)arg1;
- (BOOL)assetIsAvailableForNavigationInMoments:(id)arg1 refetchSectionsIfNeeded:(BOOL)arg2;
- (BOOL)cloudFeedAssetIsAvailableForNavigation:(id)arg1;
- (BOOL)cloudFeedCommentIsAvailableForNavigation:(id)arg1;
- (BOOL)cloudFeedInvitationForAlbumIsAvailableForNavigation:(id)arg1;
- (BOOL)cloudFeedIsAvailableForNavigation;
- (BOOL)commentIsAvailableForNavigation:(id)arg1 inAsset:(id)arg2;
- (int)contentModeForTabIdentifier:(unsigned long long)arg1;
- (BOOL)contentModeIsAvailableForNavigation:(int)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSpec:(id)arg1;
- (void)invitationRecordsDidChange:(id)arg1;
- (void)keyCommandDidRequestToBePerformed:(id)arg1;
- (id)keyCommands;
- (id)localizedDiscoverabilityTitleForTabBarItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)navigateToAlbum:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)navigateToAsset:(id)arg1 inAlbum:(id)arg2 animated:(BOOL)arg3;
- (void)navigateToAsset:(id)arg1 openOneUp:(BOOL)arg2 animated:(BOOL)arg3;
- (void)navigateToCloudFeedAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)navigateToCloudFeedComment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)navigateToCloudFeedWithCompletion:(CDUnknownBlockType)arg1;
- (void)navigateToComment:(id)arg1 forAsset:(id)arg2 animated:(BOOL)arg3;
- (void)navigateToContentMode:(int)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)navigateToFeaturedPhotoWithSuggestionIdentifier:(id)arg1 animated:(BOOL)arg2;
- (void)navigateToInitialLocationInCurrentNavigationController;
- (void)navigateToInitialLocationInNavigationController:(id)arg1;
- (void)navigateToInvitationCMMWithIdentifier:(id)arg1 animated:(BOOL)arg2;
- (void)navigateToMemoryWithLocalIdentifier:(id)arg1 animated:(BOOL)arg2;
- (void)navigateToMomentShareWithURL:(id)arg1 animated:(BOOL)arg2;
- (void)navigateToOneYearAgoSearch;
- (void)navigateToPeopleAlbumAnimated:(BOOL)arg1 revealPersonWithLocalIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)navigateToPhotosContentBottomAnimated:(BOOL)arg1;
- (void)navigateToPlacesAlbumAnimated:(BOOL)arg1;
- (void)navigateToRevealAlbum:(id)arg1 initiallyHidden:(BOOL)arg2 animated:(BOOL)arg3;
- (void)navigateToRevealAsset:(id)arg1 inAlbum:(id)arg2 animated:(BOOL)arg3;
- (void)navigateToRevealCloudFeedAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)navigateToRevealCloudFeedComment:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)navigateToRevealCloudFeedInvitationForAlbum:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)navigateToRevealTheMostRecentMemoryAnimated:(BOOL)arg1;
- (void)navigateToSearchWithHashtag:(id)arg1;
- (void)navigateToSuggestedCMMWithIdentifier:(id)arg1 animated:(BOOL)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (id)newRootViewControllerForContentMode:(int)arg1;
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)ppt_navigationControllerForContentMode:(int)arg1;
- (void)ppt_runTabSwitchingTestWithName:(id)arg1 options:(id)arg2 delegate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)prepareForDismissingForced:(BOOL)arg1;
- (BOOL)pu_shouldSelectViewController:(id)arg1;
- (struct CGRect)px_frameForTabItem:(unsigned long long)arg1 inCoordinateSpace:(id)arg2;
- (id)px_gridPresentation;
- (id)px_navigateToMemoryWithLocalIdentifier:(id)arg1 dismissAnyPresentedViewController:(BOOL)arg2;
- (void)px_navigationDestinationWillChange:(id)arg1;
- (void)px_switchToTabForDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (unsigned long long)routingOptionsForDestination:(id)arg1;
- (void)setImportViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setSelectedViewController:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (BOOL)shouldExposeShortcutForTabBarItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (unsigned long long)tabIdentifierForContentMode:(int)arg1;
- (void)updateDisplayedTabsAnimated:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end

