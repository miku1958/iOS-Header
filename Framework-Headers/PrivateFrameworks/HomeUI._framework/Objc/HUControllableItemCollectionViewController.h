//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemCollectionViewController.h>

#import <HomeUI/HUQuickControlPresentationCoordinatorDelegate-Protocol.h>
#import <HomeUI/HUQuickControlPresentationHost-Protocol.h>
#import <HomeUI/UIGestureRecognizerDelegate-Protocol.h>

@class HFItem, HFItemManager, HUQuickControlPresentationCoordinator, NSMutableDictionary, NSString, UICollectionViewLayout, UIGestureRecognizer, UILongPressGestureRecognizer, UIViewController;
@protocol HUControllableCollectionViewLayout, HUQuickControlPresentationHost, NSCopying;

@interface HUControllableItemCollectionViewController : HUItemCollectionViewController <HUQuickControlPresentationHost, UIGestureRecognizerDelegate, HUQuickControlPresentationCoordinatorDelegate>
{
    BOOL _viewAppeared;
    BOOL _suppressCollectionViewUpdatesForReorderCommit;
    unsigned long long _contentColorStyle;
    HUQuickControlPresentationCoordinator *_quickControlPresentationCoordinator;
    UIViewController<HUQuickControlPresentationHost> *_ancestorQuickControlHostAtPresentationTime;
    UILongPressGestureRecognizer *_reorderGestureRecognizer;
    NSMutableDictionary *_actionSetExecutionFuturesKeyedByIdentifier;
    UIGestureRecognizer *_contextualTapGestureRecognizer;
    HFItem<NSCopying> *_selectedContextualMenuItem;
}

@property (strong, nonatomic) NSMutableDictionary *actionSetExecutionFuturesKeyedByIdentifier; // @synthesize actionSetExecutionFuturesKeyedByIdentifier=_actionSetExecutionFuturesKeyedByIdentifier;
@property (weak, nonatomic) UIViewController<HUQuickControlPresentationHost> *ancestorQuickControlHostAtPresentationTime; // @synthesize ancestorQuickControlHostAtPresentationTime=_ancestorQuickControlHostAtPresentationTime;
@property (readonly, nonatomic) UICollectionViewLayout<HUControllableCollectionViewLayout> *collectionViewLayout; // @dynamic collectionViewLayout;
@property (readonly, nonatomic) unsigned long long contentColorStyle; // @synthesize contentColorStyle=_contentColorStyle;
@property (strong, nonatomic) UIGestureRecognizer *contextualTapGestureRecognizer; // @synthesize contextualTapGestureRecognizer=_contextualTapGestureRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HFItemManager *itemManager;
@property (strong, nonatomic) HUQuickControlPresentationCoordinator *quickControlPresentationCoordinator; // @synthesize quickControlPresentationCoordinator=_quickControlPresentationCoordinator;
@property (strong, nonatomic) UILongPressGestureRecognizer *reorderGestureRecognizer; // @synthesize reorderGestureRecognizer=_reorderGestureRecognizer;
@property (strong, nonatomic) HFItem<NSCopying> *selectedContextualMenuItem; // @synthesize selectedContextualMenuItem=_selectedContextualMenuItem;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressCollectionViewUpdatesForReorderCommit; // @synthesize suppressCollectionViewUpdatesForReorderCommit=_suppressCollectionViewUpdatesForReorderCommit;
@property (nonatomic) BOOL viewAppeared; // @synthesize viewAppeared=_viewAppeared;

- (void).cxx_destruct;
- (id)_ancestorQuickControlPresentationHost;
- (void)_handleApplicationWillResignActiveNotification:(id)arg1;
- (void)_handleContextualGesture:(id)arg1;
- (void)_handleReorderGesture:(id)arg1;
- (BOOL)_hasTapActionForItem:(id)arg1;
- (id)_itemForServiceControlPresentationAtPoint:(struct CGPoint)arg1;
- (void)_itemSetDidChange;
- (void)_logUserMetricsAfterTapOfItem:(id)arg1;
- (id)_performTapActionForItem:(id)arg1;
- (void)_reorderGestureDidBegin:(id)arg1;
- (void)_reorderGestureDidChange:(id)arg1;
- (void)_reorderGestureDidEnd:(id)arg1 finished:(BOOL)arg2;
- (void)_showQuickControlsForSelectedMenuItem;
- (void)_showSettingsForSelectedMenuItem;
- (void)_updateEditingStateForCell:(id)arg1;
- (void)_updateReorderingGestureRecognizer;
- (id)_visibleCellForItem:(id)arg1;
- (BOOL)alwaysAllowReordering;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canReorderItemAtIndexPath:(id)arg1;
- (void)childViewController:(id)arg1 didEndQuickControlsPresentation:(id)arg2;
- (void)childViewController:(id)arg1 willBeginQuickControlsPresentation:(id)arg2;
- (BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)customContextualMenuItemsForItem:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (void)itemManager:(id)arg1 didMoveItem:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (id)prepareToPerformToggleActionForItem:(id)arg1 sourceItem:(id)arg2;
- (void)presentationCoordinator:(id)arg1 applyOverrideAttributes:(id)arg2 toItem:(id)arg3;
- (void)presentationCoordinator:(id)arg1 clearOverrideAttributesForItem:(id)arg2;
- (id)presentationCoordinator:(id)arg1 contextForPresentationAtPoint:(struct CGPoint)arg2;
- (void)presentationCoordinator:(id)arg1 didEndPresentationWithContext:(id)arg2;
- (void)presentationCoordinator:(id)arg1 didRecognizeTapForItem:(id)arg2;
- (BOOL)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint)arg2;
- (void)presentationCoordinator:(id)arg1 willBeginPresentationWithContext:(id)arg2;
- (id)quickControlPresentationContextForItem:(id)arg1 atIndexPath:(id)arg2;
- (id)reorderableHomeKitItemListForSection:(long long)arg1;
- (void)setContentColorStyle:(unsigned long long)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setExecutionFuture:(id)arg1 forActionSet:(id)arg2;
- (void)setReorderableHomeKitItemList:(id)arg1 forSection:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)traitCollectionForPresentationCoordinator:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

