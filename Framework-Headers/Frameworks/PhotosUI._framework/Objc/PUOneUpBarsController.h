//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUBarsController.h>

#import <PhotosUI/PUAssetActionPerformerDelegate-Protocol.h>
#import <PhotosUI/PUBarButtonItemCollectionDataSource-Protocol.h>
#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PUOverOneUpPresentationSessionBarsDelegate-Protocol.h>
#import <PhotosUI/PUPhotoBrowserTitleViewControllerDelegate-Protocol.h>
#import <PhotosUI/PUPlayPauseBarItemsControllerChangeObserver-Protocol.h>
#import <PhotosUI/PUScrubberViewDelegate-Protocol.h>
#import <PhotosUI/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSCache, NSDictionary, NSMutableIndexSet, NSObject, NSString, PUAssetActionPerformer, PUBarButtonItemCollection, PUBrowsingSession, PUPhotoBrowserTitleViewController, PUPlayPauseBarItemsController, PUScrubberView, UITapGestureRecognizer, UIView;
@protocol OS_dispatch_queue, PUOneUpBarsControllerDelegate;

@interface PUOneUpBarsController : PUBarsController <PUBrowsingViewModelChangeObserver, PUAssetActionPerformerDelegate, UIPopoverPresentationControllerDelegate, PUPlayPauseBarItemsControllerChangeObserver, PUOverOneUpPresentationSessionBarsDelegate, PUBarButtonItemCollectionDataSource, PUScrubberViewDelegate, PUPhotoBrowserTitleViewControllerDelegate>
{
    struct {
        BOOL respondsToDidChangeShowingPlayPauseButton;
        BOOL respondsToDidTapPlayPauseButton;
        BOOL respondsToDidTapTitle;
        BOOL respondsToIsAccessoryAvailableForAssetReference;
        BOOL respondsToToggleDetailsVisibility;
        BOOL respondsToToggleCommentsVisibility;
        BOOL respondsToCanShowCommentsForAsset;
        BOOL respondsToShouldTapBeginAtLocationFromProvider;
        BOOL respondsToShouldHideToolbarWhenShowingAccessoryViewForAssetReference;
    } _delegateFlags;
    BOOL _shouldPlaceButtonsInNavigationBar;
    BOOL _shouldUseCompactTitleView;
    BOOL _shouldUseCompactCommentsTitle;
    BOOL _shouldShowDoneButton;
    BOOL _shouldShowAirPlayButton;
    BOOL _shouldShowScrubber;
    BOOL _shouldShowTitleView;
    BOOL _allowTapOnTitle;
    BOOL _isShowingPlayPauseButton;
    BOOL __needsUpdateTitle;
    BOOL __needsUpdateCommentsTitle;
    BOOL __nextCommentsActionShouldBeginEditing;
    BOOL __isDisplayInfoLoadingScheduled;
    BOOL __needsUpdateChromeVisibility;
    PUBrowsingSession *_browsingSession;
    double _maximumToolbarHeight;
    NSString *__scrubbingIdentifier;
    PUAssetActionPerformer *__activeActionPerformer;
    PUScrubberView *__scrubberView;
    NSString *__title;
    PUPhotoBrowserTitleViewController *__titleViewController;
    NSDictionary *__cachedDisplayInfoForCurrentAsset;
    NSCache *__cachedDisplayInfosByAssetReference;
    NSObject<OS_dispatch_queue> *__displayInfoLoadingIsolationQueue;
    UITapGestureRecognizer *__tapGestureRecognizer;
    long long __nextChromeVisibilityUpdateAnimationType;
    PUPlayPauseBarItemsController *__playPauseBarItemsController;
    PUBarButtonItemCollection *__toolbarButtonItemCollection;
    NSMutableIndexSet *__toolbarButtonIdentifiers;
    PUBarButtonItemCollection *__rightNavBarButtonItemCollection;
    NSMutableIndexSet *__rightNavBarButtonIdentifiers;
    PUBarButtonItemCollection *__leftNavBarButtonItemCollection;
    NSMutableIndexSet *__leftNavBarButtonIdentifiers;
}

@property (strong, nonatomic, setter=_setActiveActionPerformer:) PUAssetActionPerformer *_activeActionPerformer; // @synthesize _activeActionPerformer=__activeActionPerformer;
@property (copy, nonatomic, setter=_setCachedDisplayInfoForCurrentAsset:) NSDictionary *_cachedDisplayInfoForCurrentAsset; // @synthesize _cachedDisplayInfoForCurrentAsset=__cachedDisplayInfoForCurrentAsset;
@property (readonly, nonatomic) NSCache *_cachedDisplayInfosByAssetReference; // @synthesize _cachedDisplayInfosByAssetReference=__cachedDisplayInfosByAssetReference;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_displayInfoLoadingIsolationQueue; // @synthesize _displayInfoLoadingIsolationQueue=__displayInfoLoadingIsolationQueue;
@property (nonatomic, setter=_setDisplayInfoLoadingScheduled:) BOOL _isDisplayInfoLoadingScheduled; // @synthesize _isDisplayInfoLoadingScheduled=__isDisplayInfoLoadingScheduled;
@property (strong, nonatomic, setter=_setLeftNavBarButtonIdentifiers:) NSMutableIndexSet *_leftNavBarButtonIdentifiers; // @synthesize _leftNavBarButtonIdentifiers=__leftNavBarButtonIdentifiers;
@property (strong, nonatomic, setter=_setLeftNavBarButtonItemCollection:) PUBarButtonItemCollection *_leftNavBarButtonItemCollection; // @synthesize _leftNavBarButtonItemCollection=__leftNavBarButtonItemCollection;
@property (nonatomic, setter=_setNeedsUpdateChromeVisibility:) BOOL _needsUpdateChromeVisibility; // @synthesize _needsUpdateChromeVisibility=__needsUpdateChromeVisibility;
@property (nonatomic, setter=_setNeedsUpdateCommentsTitle:) BOOL _needsUpdateCommentsTitle; // @synthesize _needsUpdateCommentsTitle=__needsUpdateCommentsTitle;
@property (nonatomic, setter=_setNeedsUpdateTitle:) BOOL _needsUpdateTitle; // @synthesize _needsUpdateTitle=__needsUpdateTitle;
@property (nonatomic, setter=_setNextChromeVisibilityUpdateAnimationType:) long long _nextChromeVisibilityUpdateAnimationType; // @synthesize _nextChromeVisibilityUpdateAnimationType=__nextChromeVisibilityUpdateAnimationType;
@property (nonatomic, setter=_setNextCommentsActionShouldBeginEditing:) BOOL _nextCommentsActionShouldBeginEditing; // @synthesize _nextCommentsActionShouldBeginEditing=__nextCommentsActionShouldBeginEditing;
@property (readonly, nonatomic) PUPlayPauseBarItemsController *_playPauseBarItemsController; // @synthesize _playPauseBarItemsController=__playPauseBarItemsController;
@property (strong, nonatomic, setter=_setRightNavBarButtonIdentifiers:) NSMutableIndexSet *_rightNavBarButtonIdentifiers; // @synthesize _rightNavBarButtonIdentifiers=__rightNavBarButtonIdentifiers;
@property (strong, nonatomic, setter=_setRightNavBarButtonItemCollection:) PUBarButtonItemCollection *_rightNavBarButtonItemCollection; // @synthesize _rightNavBarButtonItemCollection=__rightNavBarButtonItemCollection;
@property (readonly, nonatomic) PUScrubberView *_scrubberView; // @synthesize _scrubberView=__scrubberView;
@property (readonly, nonatomic) NSString *_scrubbingIdentifier; // @synthesize _scrubbingIdentifier=__scrubbingIdentifier;
@property (strong, nonatomic, setter=_setTapGestureRecognizer:) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property (copy, nonatomic, setter=_setTitle:) NSString *_title; // @synthesize _title=__title;
@property (readonly, nonatomic) PUPhotoBrowserTitleViewController *_titleViewController; // @synthesize _titleViewController=__titleViewController;
@property (strong, nonatomic, setter=_setToolbarButtonIdentifiers:) NSMutableIndexSet *_toolbarButtonIdentifiers; // @synthesize _toolbarButtonIdentifiers=__toolbarButtonIdentifiers;
@property (strong, nonatomic, setter=_setToolbarButtonItemCollection:) PUBarButtonItemCollection *_toolbarButtonItemCollection; // @synthesize _toolbarButtonItemCollection=__toolbarButtonItemCollection;
@property (nonatomic) BOOL allowTapOnTitle; // @synthesize allowTapOnTitle=_allowTapOnTitle;
@property (strong, nonatomic) PUBrowsingSession *browsingSession; // @synthesize browsingSession=_browsingSession;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PUOneUpBarsControllerDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, setter=_setShowingPlayPauseButton:) BOOL isShowingPlayPauseButton; // @synthesize isShowingPlayPauseButton=_isShowingPlayPauseButton;
@property (nonatomic) double maximumToolbarHeight; // @synthesize maximumToolbarHeight=_maximumToolbarHeight;
@property (readonly, nonatomic) UIView *ppt_scrubberView;
@property (nonatomic) BOOL shouldPlaceButtonsInNavigationBar; // @synthesize shouldPlaceButtonsInNavigationBar=_shouldPlaceButtonsInNavigationBar;
@property (nonatomic) BOOL shouldShowAirPlayButton; // @synthesize shouldShowAirPlayButton=_shouldShowAirPlayButton;
@property (nonatomic) BOOL shouldShowDoneButton; // @synthesize shouldShowDoneButton=_shouldShowDoneButton;
@property (nonatomic) BOOL shouldShowScrubber; // @synthesize shouldShowScrubber=_shouldShowScrubber;
@property (nonatomic) BOOL shouldShowTitleView; // @synthesize shouldShowTitleView=_shouldShowTitleView;
@property (nonatomic) BOOL shouldUseCompactCommentsTitle; // @synthesize shouldUseCompactCommentsTitle=_shouldUseCompactCommentsTitle;
@property (nonatomic) BOOL shouldUseCompactTitleView; // @synthesize shouldUseCompactTitleView=_shouldUseCompactTitleView;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (readonly, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)_activeBarButtonItemForIdentifier:(long long)arg1;
- (id)_barButtonItemCollectionForLocation:(long long)arg1;
- (id)_barButtonItemForActionType:(unsigned long long)arg1;
- (id)_barButtonItemForIdentifier:(long long)arg1 location:(long long)arg2;
- (void)_browsingViewModel:(id)arg1 didChange:(id)arg2;
- (BOOL)_canShowCommentsForCurrentAsset;
- (void)_didLoadDisplayInfo:(id)arg1 forAssetReference:(id)arg2;
- (void)_executeActionPerformer:(id)arg1;
- (void)_executeActionPerformer:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_handleAssetViewModelBeginEditingTimer:(id)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (long long)_identifierForButton:(id)arg1;
- (void)_initializeBarButtonItemCollections;
- (void)_invalidateChromeVisibilityWithAnimationType:(long long)arg1;
- (void)_invalidateCommentsTitle;
- (void)_invalidateScrubber;
- (void)_invalidateTitle;
- (void)_loadDisplayInfoForCurrentAsset;
- (long long)_locationForBarButtonItemCollection:(id)arg1;
- (long long)_locationForBarButtonItemWithIdentifier:(long long)arg1;
- (id)_newBarButtonItemWithIdentifier:(long long)arg1 location:(long long)arg2;
- (id)_newBarButtonItemWithImageName:(id)arg1 offset:(struct UIOffset)arg2 landscapeImagePhoneName:(id)arg3 offset:(struct UIOffset)arg4 location:(long long)arg5;
- (id)_newBarButtonWithSystemItem:(long long)arg1 offset:(struct UIOffset)arg2 landscapeImagePhoneOffset:(struct UIOffset)arg3;
- (id)_newCustomButtonItem;
- (void)_performAirPlayAction;
- (void)_performAllPhotosAction;
- (void)_performAssetExplorerReviewScreenActionType:(unsigned long long)arg1;
- (void)_performCancelAction;
- (void)_performDuplicateActivityWithAssetsByAssetCollection:(id)arg1;
- (void)_performEditAction;
- (void)_performHideActivityWithAssetsByAssetCollection:(id)arg1;
- (void)_performLikeAction:(BOOL)arg1;
- (void)_performPlayPauseAction:(long long)arg1;
- (void)_performRestoreAction;
- (void)_performReviewAction;
- (void)_performShareAction;
- (void)_performSlideShowAction;
- (void)_performToggleCommentsAction;
- (void)_performToggleDetailsAction;
- (void)_performToggleFavoriteAction;
- (void)_performTrashAction;
- (void)_resetIdentifierIndexes;
- (long long)_scrubberType;
- (void)_toolbarViewModel:(id)arg1 didChange:(id)arg2;
- (void)_updateChromeVisibilityIfNeeded;
- (void)_updateCommentsTitleIfNeeded;
- (void)_updateFavoriteBarButtonItem;
- (void)_updateIdentifiersIndexesWithIdentifier:(long long)arg1 location:(long long)arg2 shouldEnable:(BOOL)arg3;
- (void)_updateScrubberViewIfNeeded;
- (void)_updateShowingPlayPauseButton;
- (void)_updateTitleIfNeeded;
- (BOOL)_wantsChromeVisible;
- (void)assetActionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (BOOL)assetActionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)assetActionPerformer:(id)arg1 presentViewController:(id)arg2;
- (id)barButtonItemCollection:(id)arg1 newBarButtonItemForIdentifier:(long long)arg2;
- (void)barButtonItemTapped:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidateViewControllerView;
- (id)overOneUpPresentationSession:(id)arg1 barButtonItemForActivityType:(id)arg2;
- (void)overOneUpPresentationSession:(id)arg1 didCompleteWithActivityType:(id)arg2 assetsByAssetCollection:(id)arg3 success:(BOOL)arg4;
- (void)photoBrowserTitleViewControllerTapped:(id)arg1;
- (void)playPauseBarItemsController:(id)arg1 didChange:(id)arg2;
- (void)ppt_performAction:(unsigned long long)arg1;
- (long long)preferredBarStyle;
- (BOOL)prefersStatusBarHidden;
- (void)prepareForPopoverPresentation:(id)arg1;
- (BOOL)scrubberView:(id)arg1 shouldIgnoreHitTest:(struct CGPoint)arg2 withEvent:(id)arg3;
- (void)setViewController:(id)arg1;
- (BOOL)shouldTapBeginAtLocationFromProvider:(id)arg1;
- (void)updateBars;
- (void)updateContentGuideInsets;
- (void)updateGestureRecognizersWithHostingView:(id)arg1;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (BOOL)wantsNavigationBarVisible;
- (BOOL)wantsToolbarVisible;

@end

