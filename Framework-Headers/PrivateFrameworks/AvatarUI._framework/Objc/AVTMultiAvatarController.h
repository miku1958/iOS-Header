//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTAvatarDisplayingController-Protocol.h>
#import <AvatarUI/AVTAvatarRecordDataSourceObserver-Protocol.h>
#import <AvatarUI/AVTNotifyingContainerViewDelegate-Protocol.h>
#import <AvatarUI/UICollectionViewDataSource-Protocol.h>
#import <AvatarUI/UICollectionViewDelegate-Protocol.h>

@class AVTAvatarListCell, AVTAvatarRecordDataSource, AVTCarouselPlusButtonView, AVTCenteringCollectionViewDelegate, AVTRenderingScope, AVTTransitionCoordinator, AVTUIEnvironment, AVTViewSession, AVTZIndexEngagementListCollectionViewLayout, NSArray, NSNumber, NSString, UICollectionView, UIView, _AVTAvatarRecordImageProvider;
@protocol AVTAvatarDisplayingControllerDelegate, AVTAvatarListItem, AVTAvatarRecord, AVTPresenterDelegate, AVTUILogger, AVTViewCarouselLayout;

@interface AVTMultiAvatarController : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, AVTAvatarRecordDataSourceObserver, AVTNotifyingContainerViewDelegate, AVTAvatarDisplayingController>
{
    BOOL _allowsCreate;
    BOOL _hideImageForDisplayedRecord;
    id<AVTAvatarDisplayingControllerDelegate> delegate;
    id<AVTPresenterDelegate> presenterDelegate;
    double _decelerationRate;
    AVTRenderingScope *_renderingScope;
    UIView *_view;
    UICollectionView *_collectionView;
    AVTZIndexEngagementListCollectionViewLayout *_collectionViewLayout;
    AVTCenteringCollectionViewDelegate *_centeringDelegate;
    NSArray *_recordListItems;
    AVTViewSession *_avtViewSession;
    AVTCarouselPlusButtonView *_addItemView;
    id<AVTAvatarListItem> _addListItem;
    id<AVTAvatarRecord> _displayedRecord;
    AVTAvatarListCell *_liveCell;
    NSNumber *_cachedCanCreateValue;
    AVTTransitionCoordinator *_transitionCoordinator;
    AVTAvatarRecordDataSource *_dataSource;
    AVTUIEnvironment *_environment;
    id<AVTUILogger> _logger;
    _AVTAvatarRecordImageProvider *_thumbnailRenderer;
    id<AVTViewCarouselLayout> _avtViewLayout;
    struct CGPoint _lastContentOffset;
}

@property (strong, nonatomic) AVTCarouselPlusButtonView *addItemView; // @synthesize addItemView=_addItemView;
@property (strong, nonatomic) id<AVTAvatarListItem> addListItem; // @synthesize addListItem=_addListItem;
@property (nonatomic) BOOL allowsCreate; // @synthesize allowsCreate=_allowsCreate;
@property (strong, nonatomic) id<AVTViewCarouselLayout> avtViewLayout; // @synthesize avtViewLayout=_avtViewLayout;
@property (strong, nonatomic) AVTViewSession *avtViewSession; // @synthesize avtViewSession=_avtViewSession;
@property (nonatomic) NSNumber *cachedCanCreateValue; // @synthesize cachedCanCreateValue=_cachedCanCreateValue;
@property (strong, nonatomic) AVTCenteringCollectionViewDelegate *centeringDelegate; // @synthesize centeringDelegate=_centeringDelegate;
@property (strong, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (strong, nonatomic) AVTZIndexEngagementListCollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property (readonly, nonatomic) AVTAvatarRecordDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double decelerationRate; // @synthesize decelerationRate=_decelerationRate;
@property (weak, nonatomic) id<AVTAvatarDisplayingControllerDelegate> delegate; // @synthesize delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) id<AVTAvatarRecord> displayedRecord; // @synthesize displayedRecord=_displayedRecord;
@property (readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hideImageForDisplayedRecord; // @synthesize hideImageForDisplayedRecord=_hideImageForDisplayedRecord;
@property (nonatomic) struct CGPoint lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property (strong, nonatomic) AVTAvatarListCell *liveCell; // @synthesize liveCell=_liveCell;
@property (readonly, nonatomic) id<AVTUILogger> logger; // @synthesize logger=_logger;
@property (weak, nonatomic) id<AVTPresenterDelegate> presenterDelegate; // @synthesize presenterDelegate;
@property (strong, nonatomic) NSArray *recordListItems; // @synthesize recordListItems=_recordListItems;
@property (readonly, nonatomic) AVTRenderingScope *renderingScope; // @synthesize renderingScope=_renderingScope;
@property (readonly) Class superclass;
@property (readonly, nonatomic) _AVTAvatarRecordImageProvider *thumbnailRenderer; // @synthesize thumbnailRenderer=_thumbnailRenderer;
@property (readonly, nonatomic) AVTTransitionCoordinator *transitionCoordinator; // @synthesize transitionCoordinator=_transitionCoordinator;
@property (strong, nonatomic) UIView *view; // @synthesize view=_view;

+ (id)listItemsForAvatarRecords:(id)arg1;
+ (id)newCollectionViewLayoutForEngagedCellSize:(struct CGSize)arg1 boundsSize:(struct CGSize)arg2 environment:(id)arg3;
+ (id)snapshotProviderFocusedOnRecordWithIdentifier:(id)arg1 size:(struct CGSize)arg2 avtViewAspectRatio:(struct CGSize)arg3 dataSource:(id)arg4 environment:(id)arg5;
- (void).cxx_destruct;
- (void)buildCollectionViewAndConfigureLayoutIfNeeded;
- (id)cellForRecordItem:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)createAddItemViewIfNeeded;
- (void)createAvatar;
- (void)dataSource:(id)arg1 didAddRecord:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)dataSource:(id)arg1 didEditRecord:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)dataSource:(id)arg1 didRemoveRecord:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)dealloc;
- (void)displayAvatarForRecord:(id)arg1 animated:(BOOL)arg2;
- (id)getFirstItem;
- (id)indexPathForItemClosestToCenter;
- (id)initWithDataSource:(id)arg1 environment:(id)arg2;
- (id)initWithDataSource:(id)arg1 environment:(id)arg2 initialAVTViewLayout:(id)arg3;
- (BOOL)isViewLoaded;
- (void)layoutDidChangeWhileMoving:(BOOL)arg1 offset:(struct CGPoint)arg2;
- (unsigned long long)listItemIndexForRecord:(id)arg1;
- (id)listItemsForDisplay;
- (id)loadRecords;
- (void)loadRecordsIfNeeded;
- (void)loadView;
- (void)notifyDelegateForScrollingTowardItem:(id)arg1 ratio:(double)arg2;
- (void)notifyDelegateForScrollingTowardItemFromOffset:(struct CGPoint)arg1;
- (void)notifyingContainerViewDidChangeSize:(struct CGSize)arg1;
- (void)notifyingContainerViewWillChangeSize:(struct CGSize)arg1;
- (void)preloadAll;
- (void)prepareToTransitionToVisible:(BOOL)arg1 completionHandler:(CDUnknownBlockType *)arg2;
- (void)prepareViewWithLayout:(id)arg1;
- (id)recordForItem:(id)arg1;
- (void)reloadData;
- (void)reloadRecordListItems;
- (void)scrollToDisplayedRecord;
- (void)scrollToViewAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)scrollToViewForAvatarRecord:(id)arg1 animated:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAllowsCreate:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setDisplayedRecordFromIndex:(unsigned long long)arg1;
- (BOOL)shouldCurrentlyDisplayedRecordTransitionToLive;
- (void)significantRecordChangeInDataSource:(id)arg1;
- (void)snapshotInBlock:(CDUnknownBlockType)arg1;
- (void)stopUsingAVTViewSessionSynchronously:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)transitionCell:(id)arg1 indexPath:(id)arg2 toStartFocusingAnimated:(BOOL)arg3 session:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)transitionCell:(id)arg1 toStopFocusingAnimated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)transitionCenterCellIfPresentToStartFocusing;
- (void)transitionCenterCellIfPresentToStopFocusingAnimated:(BOOL)arg1;
- (void)transitionCenterCellToStartFocusing:(id)arg1 indexPath:(id)arg2;
- (void)transitionCurrentDisplayedRecordAnimated:(BOOL)arg1;
- (void)updateCachedCanCreateValueIfNeeded;
- (void)updateDisplayedRecordIfNeeded;
- (void)useAVTViewFromSession:(id)arg1 withLayout:(id)arg2;

@end

