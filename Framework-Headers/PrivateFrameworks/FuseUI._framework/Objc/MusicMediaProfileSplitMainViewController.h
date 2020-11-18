//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FuseUI/MusicClientContextConsuming-Protocol.h>
#import <FuseUI/MusicContainerScrollViewDelegate-Protocol.h>
#import <FuseUI/MusicMediaDetailSplitViewController-Protocol.h>
#import <FuseUI/SKUIScrollingSegmentedControllerDelegate-Protocol.h>

@class MPMediaItemCollection, MusicClientContext, MusicContainerScrollView, MusicMediaDetailTintInformation, MusicProfileAlbumsViewConfiguration, MusicProfileAlbumsViewController, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, SKUIScrollingSegmentedController, UIScrollView, UIView;
@protocol MusicMediaProfileSplitMainViewControllerDelegate;

@interface MusicMediaProfileSplitMainViewController : UIViewController <MusicContainerScrollViewDelegate, SKUIScrollingSegmentedControllerDelegate, MusicClientContextConsuming, MusicMediaDetailSplitViewController>
{
    MusicProfileAlbumsViewConfiguration *_albumsViewConfiguration;
    MusicProfileAlbumsViewController *_albumsViewController;
    NSArray *_allowedSegments;
    MPMediaItemCollection *_artistEntity;
    BOOL _canShowConnectSegment;
    BOOL _canShowSubscriptionSegments;
    MusicContainerScrollView *_containerScrollView;
    struct CGPoint _containerScrollViewNormalizedContentOffset;
    BOOL _didAutomaticallySelectMyMusicSegment;
    UIScrollView *_focusedContentScrollView;
    BOOL _hasInitializedContainerScrollViewNormalizedContentOffset;
    NSString *_initiallySelectedSegmentIdentifier;
    BOOL _isAdjustingContentSize;
    BOOL _isHidingVerticalScrollIndicator;
    NSMutableDictionary *_loadedViewControllersToInsert;
    struct UIEdgeInsets _minimumHeightContentInsetAdditions;
    unsigned long long _profileType;
    SKUIScrollingSegmentedController *_scrollingSegmentedController;
    UIView *_segmentedControlHairlineView;
    struct UIEdgeInsets _segmentedControlScrollViewEdgeInsetAdditions;
    NSMutableArray *_segmentIdentifiers;
    NSMutableSet *_segmentIdentifiersForLoadedViews;
    BOOL _shouldAutomaticallySelectMyMusicSegment;
    BOOL _segmentedControlVisible;
    BOOL _shouldShowStoreSegments;
    BOOL _visuallyInset;
    MusicClientContext *_clientContext;
    double _headerTransitionProgress;
    id<MusicMediaProfileSplitMainViewControllerDelegate> _mediaSplitViewControllerDelegate;
    NSDictionary *_availableContentFlags;
    MusicMediaDetailTintInformation *_mediaDetailTintInformation;
    double _preferredMaximumContentWidth;
}

@property (copy, nonatomic) NSArray *allowedSegments;
@property (copy, nonatomic) NSDictionary *availableContentFlags; // @synthesize availableContentFlags=_availableContentFlags;
@property (strong, nonatomic) MusicClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double headerTransitionProgress; // @synthesize headerTransitionProgress=_headerTransitionProgress;
@property (copy, nonatomic) MusicMediaDetailTintInformation *mediaDetailTintInformation; // @synthesize mediaDetailTintInformation=_mediaDetailTintInformation;
@property (weak, nonatomic) id<MusicMediaProfileSplitMainViewControllerDelegate> mediaSplitViewControllerDelegate; // @synthesize mediaSplitViewControllerDelegate=_mediaSplitViewControllerDelegate;
@property (nonatomic) double preferredMaximumContentWidth; // @synthesize preferredMaximumContentWidth=_preferredMaximumContentWidth;
@property (readonly, nonatomic) SKUIScrollingSegmentedController *scrollingSegmentedController;
@property (readonly, nonatomic, getter=isSegmentedControlVisible) BOOL segmentedControlVisible; // @synthesize segmentedControlVisible=_segmentedControlVisible;
@property (copy, nonatomic) NSString *selectedSegmentIdentifier;
@property (nonatomic) BOOL shouldAutomaticallySelectMyMusicSegment; // @synthesize shouldAutomaticallySelectMyMusicSegment=_shouldAutomaticallySelectMyMusicSegment;
@property (nonatomic) BOOL shouldShowStoreSegments; // @synthesize shouldShowStoreSegments=_shouldShowStoreSegments;
@property (readonly) Class superclass;
@property (nonatomic, getter=isVisuallyInset) BOOL visuallyInset; // @synthesize visuallyInset=_visuallyInset;

- (void).cxx_destruct;
- (struct CGPoint)_adjustContentOffsetForBounds:(struct CGRect)arg1 inScrollView:(id)arg2 withContentInset:(struct UIEdgeInsets)arg3;
- (void)_applyHairlineTintInformation;
- (void)_applyTintInformation;
- (void)_containerScrollViewDidBeginScrolling;
- (void)_containerScrollViewDidFinishScrolling;
- (struct UIEdgeInsets)_currentSegmentedControlContentEdgeInsets;
- (void)_handleCanShowConnectDidChangeNotification:(id)arg1;
- (void)_handleCanShowSubscriptionContentDidChangeNotification:(id)arg1;
- (void)_registerForNotificationsForContentScrollView:(id)arg1;
- (id)_scrollingSegmentedController;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;
- (BOOL)_shouldShowSegmentedControl;
- (void)_unregisterForNotificationsForContentScrollView:(id)arg1;
- (void)_updateContainerScrollViewContentInformationFromScroll:(BOOL)arg1;
- (void)_updateFocusedContentScrollViewIfNeeded;
- (void)_updateHairlineProperties;
- (void)_updateSegmentedControlLayoutForSuperviewChange:(BOOL)arg1;
- (void)_updateSegmentedControlScrollViewVisibility;
- (void)_updateVisibleSegments;
- (void)containerScrollViewContentSizeDidChange:(id)arg1;
- (id)contentScrollView;
- (void)dealloc;
- (id)initWithProfileType:(unsigned long long)arg1 artistEntity:(id)arg2;
- (BOOL)music_allowsMetricsEvents;
- (BOOL)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (void)music_viewInheritedLayoutInsetsDidChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollingSegmentedController:(id)arg1 contentScrollViewDidChangeForViewControllerAtIndex:(unsigned long long)arg2;
- (void)scrollingSegmentedController:(id)arg1 didFocusViewControllerAtIndex:(unsigned long long)arg2;
- (void)scrollingSegmentedController:(id)arg1 willDisplayViewControllerAtIndex:(unsigned long long)arg2;
- (void)scrollingSegmentedControllerDidEndDecelerating:(id)arg1;
- (void)scrollingSegmentedControllerDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollingSegmentedControllerWillBeginDragging:(id)arg1;
- (void)setViewController:(id)arg1 forSegmentIdentifier:(id)arg2;
- (id)viewControllerForSegmentIdentifier:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
