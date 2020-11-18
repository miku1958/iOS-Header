//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TVMLKit/UICollectionViewDataSource-Protocol.h>
#import <TVMLKit/UICollectionViewDelegate-Protocol.h>

@class CADisplayLink, NSArray, NSDate, NSDictionary, NSIndexPath, NSObject, NSString, _TVCarouselCollectionView;
@protocol OS_dispatch_source, TVCarouselViewDataSource, TVCarouselViewDelegate;

@interface TVCarouselView : UIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSObject<OS_dispatch_source> *_autoScrollTimer;
    _TVCarouselCollectionView *_collectionView;
    unsigned long long _indexToDeque;
    NSIndexPath *_focusedIndexPath;
    unsigned long long _numberOfRealItemsForDataSource;
    double _originalSelectionDuration;
    double _originalUnselectionDuration;
    long long _numFocusChangesInInterval;
    id<TVCarouselViewDataSource> _dataSource;
    id<TVCarouselViewDelegate> _delegate;
    double _interitemSpacing;
    unsigned long long _scrollMode;
    double _autoScrollInterval;
    double _continuousScrollVelocity;
    NSDictionary *_collectionToDatasourceIndexMap;
    CADisplayLink *_displayLink;
    double _previousDisplayLinkTimestamp;
    double _offsetChangePerSecond;
    NSDate *_firstFocusChangeInInterval;
    struct CGSize _itemSize;
    struct CGPoint _focusDirection;
    struct CGPoint _targetContentOffset;
}

@property (nonatomic) double autoScrollInterval; // @synthesize autoScrollInterval=_autoScrollInterval;
@property (strong, nonatomic) NSDictionary *collectionToDatasourceIndexMap; // @synthesize collectionToDatasourceIndexMap=_collectionToDatasourceIndexMap;
@property (nonatomic) double continuousScrollVelocity; // @synthesize continuousScrollVelocity=_continuousScrollVelocity;
@property (weak, nonatomic) id<TVCarouselViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TVCarouselViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property (strong, nonatomic) NSDate *firstFocusChangeInInterval; // @synthesize firstFocusChangeInInterval=_firstFocusChangeInInterval;
@property (nonatomic) struct CGPoint focusDirection; // @synthesize focusDirection=_focusDirection;
@property (readonly) unsigned long long hash;
@property (nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property (nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property (nonatomic) double offsetChangePerSecond; // @synthesize offsetChangePerSecond=_offsetChangePerSecond;
@property (nonatomic) double previousDisplayLinkTimestamp; // @synthesize previousDisplayLinkTimestamp=_previousDisplayLinkTimestamp;
@property (nonatomic) unsigned long long scrollMode; // @synthesize scrollMode=_scrollMode;
@property (readonly) Class superclass;
@property (nonatomic) struct CGPoint targetContentOffset; // @synthesize targetContentOffset=_targetContentOffset;
@property (readonly, copy, nonatomic) NSArray *visibleCells;

- (void).cxx_destruct;
- (void)_adjustCarouselForDirectionShift:(long long)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (BOOL)_canScrollCarouselView;
- (id)_cellForItemAtIndex:(unsigned long long)arg1;
- (long long)_centerCollectionViewCellIndex;
- (id)_collectionView;
- (double)_contentOffsetXForCollectionViewIndex:(long long)arg1;
- (void)_handlePlayGesture:(id)arg1;
- (long long)_numberOfCells;
- (void)_prepareIndexMap:(long long)arg1;
- (void)_setContentOffsetForCollectionViewIndex:(long long)arg1;
- (void)_startAutoScrollTimer;
- (void)_startContinuousScroll;
- (void)_stopAutoScrollTimer;
- (void)_stopContinuousScroll;
- (void)_updateAutoScrollTimer;
- (void)_updateCarouselWithCenterIndex:(long long)arg1 indexToRemove:(long long)arg2 indexToAdd:(long long)arg3;
- (void)_updateCollectionViewLayout;
- (void)_updateCollectionViewLayoutAnimated:(BOOL)arg1;
- (void)_updateContentOffsetForFocusedIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)_updateIdleModeLayoutAttributes;
- (BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)dealloc;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)displayLinkDidFire:(id)arg1;
- (id)focusedCell;
- (unsigned long long)indexForCell:(id)arg1;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)preferredFocusedView;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setInteritemSpacing:(double)arg1 animated:(BOOL)arg2;
- (void)setSemanticContentAttribute:(long long)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
