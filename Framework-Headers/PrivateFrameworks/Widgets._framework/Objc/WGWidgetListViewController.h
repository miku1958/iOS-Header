//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <Widgets/UIScrollViewDelegate-Protocol.h>
#import <Widgets/WGWidgetDebugging-Protocol.h>
#import <Widgets/WGWidgetDiscoveryObserving-Protocol.h>
#import <Widgets/WGWidgetExtensionVisibilityProviding-Protocol.h>
#import <Widgets/WGWidgetHostingViewControllerDelegate-Protocol.h>

@class MTMaterialSettings, NSArray, NSMutableDictionary, NSString, UIScrollView, UIStackView, WGWidgetDiscoveryController, WGWidgetShortLookView;
@protocol WGWidgetListViewControllerDelegate, WGWidgetListViewControllerDelegatePrivate;

@interface WGWidgetListViewController : UIViewController <WGWidgetDebugging, UIScrollViewDelegate, WGWidgetDiscoveryObserving, WGWidgetHostingViewControllerDelegate, WGWidgetExtensionVisibilityProviding>
{
    WGWidgetDiscoveryController *_discoveryController;
    UIStackView *_stackView;
    NSMutableDictionary *_cancelTouchesAssertionsByWidgetID;
    NSMutableDictionary *_shortLookViewsByWidgetID;
    WGWidgetShortLookView *_shortLookViewForMeasuring;
    MTMaterialSettings *_materialSettings;
    BOOL _shouldBlurContent;
    id<WGWidgetListViewControllerDelegate> _delegate;
    NSArray *_previouslyVisibleWidgetIDs;
}

@property (readonly, nonatomic, getter=_activeColumnMode) long long activeColumnMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WGWidgetListViewControllerDelegatePrivate> delegate;
@property (weak, nonatomic) id<WGWidgetListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=_group) NSString *group;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic, getter=_previouslyVisibleWidgetIDs, setter=_setPreviouslyVisibleWidgetIDs:) NSArray *previouslyVisibleWidgetIDs; // @synthesize previouslyVisibleWidgetIDs=_previouslyVisibleWidgetIDs;
@property (nonatomic) BOOL shouldBlurContent; // @synthesize shouldBlurContent=_shouldBlurContent;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long widgetCount;
@property (readonly, nonatomic) UIScrollView *widgetListView;

- (void).cxx_destruct;
- (CDUnknownBlockType)_beginInsertion:(BOOL)arg1 ofWidgetView:(id)arg2 forWidgetWithIdentifier:(id)arg3 withOrderedIdentifiers:(id)arg4 removingViewIfPossible:(BOOL)arg5;
- (void)_cancelTouchesForHitWidgetIfNecessary;
- (void)_cancelTouchesForWidget:(id)arg1;
- (void)_configureStackView;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (CDUnknownBlockType)_insert:(BOOL)arg1 widgetView:(id)arg2 forWidgetWithIdentifier:(id)arg3 withOrderedIdentifiers:(id)arg4 animated:(BOOL)arg5;
- (unsigned long long)_insertionIndexOfWidgetView:(id)arg1 forWidgetWithIdentifier:(id)arg2 intoWidgetViews:(id)arg3 withOrderedIdentifiers:(id)arg4;
- (void)_invalidateAllCancelTouchesAssertions;
- (void)_invokeBlock:(CDUnknownBlockType)arg1 withShortLookViewsPassingTest:(CDUnknownBlockType)arg2;
- (void)_invokeBlockWithShortLookViewsVisibleInBounds:(CDUnknownBlockType)arg1;
- (void)_invokeBlockWithShortLookViewsVisibleInRect:(struct CGRect)arg1 block:(CDUnknownBlockType)arg2;
- (void)_repopulateStackViewForColumnMode:(long long)arg1;
- (id)_repopulateStackViewWithWidgetIdentifiers:(id)arg1 forColumnMode:(long long)arg2;
- (id)_scrollViewIfLoaded;
- (id)_scrollViewLoadingIfNecessary:(BOOL)arg1;
- (id)_shortLookViewAtLocation:(struct CGPoint)arg1;
- (id)_shortLookViewForMeasuring;
- (id)_shortLookViewForWidget:(id)arg1;
- (id)_shortLookViewForWidgetWithIdentifier:(id)arg1 creatingIfNecessary:(BOOL)arg2;
- (void)_updateBackgroundViewForShortLookView:(id)arg1;
- (void)_updateWidgetViewStateWithPreviouslyVisibleWidgetIdentifiers:(id)arg1;
- (void)_validateWidgetHostStateForShortLook:(id)arg1;
- (id)_widgetIdentifiersForShortLookViewsVisibleInBounds;
- (void)brokenViewDidAppearForWidget:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithWidgetDiscoveryController:(id)arg1;
- (BOOL)isWidgetExtensionVisible:(id)arg1;
- (void)loadView;
- (void)makeVisibleWidgetWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct UIEdgeInsets)marginInsetsForWidget:(id)arg1;
- (struct CGSize)maxSizeForWidget:(id)arg1 forDisplayMode:(long long)arg2;
- (void)orderOfVisibleWidgetsDidChange:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)remoteViewControllerDidDisconnectForWidget:(id)arg1;
- (void)remoteViewControllerViewDidAppearForWidget:(id)arg1;
- (void)remoteViewControllerViewDidHideForWidget:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)visibleWidgetIdentifiersForColumnMode:(long long)arg1;
- (void)widget:(id)arg1 didChangeLargestSupportedDisplayMode:(long long)arg2;
- (CDUnknownBlockType)widget:(id)arg1 didUpdatePreferredHeight:(double)arg2 completion:(CDUnknownBlockType)arg3;

@end

