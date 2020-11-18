//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Messages/UICollectionViewDataSource-Protocol.h>
#import <Messages/UICollectionViewDelegate-Protocol.h>

@class MSStickerBrowserViewLayoutSpec, NSDictionary, NSMutableArray, NSString, NSTimer, UICollectionView, UICollectionViewFlowLayout;
@protocol MSStickerBrowserViewDataSource, MSStickerBrowserViewDisplayDelegate;

@interface MSStickerBrowserView : UIView <UICollectionViewDelegate, UICollectionViewDataSource>
{
    BOOL _isRestoringContentOffset;
    BOOL _animating;
    long long _stickerSize;
    id<MSStickerBrowserViewDataSource> _dataSource;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    MSStickerBrowserViewLayoutSpec *_layoutSpec;
    NSMutableArray *_cellsToAnimate;
    NSTimer *_animationTimer;
    unsigned long long _currentlyAnimatingIndex;
    id<MSStickerBrowserViewDisplayDelegate> _displayDelegate;
    struct CGPoint _restoredContentOffset;
    struct CGSize _browserSizeToRestoreFrom;
}

@property (nonatomic, getter=isAnimating) BOOL animating; // @synthesize animating=_animating;
@property (strong, nonatomic) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property (nonatomic) struct CGSize browserSizeToRestoreFrom; // @synthesize browserSizeToRestoreFrom=_browserSizeToRestoreFrom;
@property (strong, nonatomic) NSMutableArray *cellsToAnimate; // @synthesize cellsToAnimate=_cellsToAnimate;
@property (strong, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (nonatomic) struct UIEdgeInsets contentInset;
@property (nonatomic) struct CGPoint contentOffset;
@property (nonatomic) unsigned long long currentlyAnimatingIndex; // @synthesize currentlyAnimatingIndex=_currentlyAnimatingIndex;
@property (weak, nonatomic) id<MSStickerBrowserViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) id<MSStickerBrowserViewDisplayDelegate> displayDelegate; // @synthesize displayDelegate=_displayDelegate;
@property (strong, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isRestoringContentOffset; // @synthesize isRestoringContentOffset=_isRestoringContentOffset;
@property (strong, nonatomic) MSStickerBrowserViewLayoutSpec *layoutSpec; // @synthesize layoutSpec=_layoutSpec;
@property (nonatomic) struct CGPoint restoredContentOffset; // @synthesize restoredContentOffset=_restoredContentOffset;
@property (readonly, nonatomic) NSDictionary *stateRestorationInfo;
@property (readonly, nonatomic) long long stickerSize; // @synthesize stickerSize=_stickerSize;
@property (readonly, nonatomic) long long stickerSizeClass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_startAnimating;
- (id)_stickerAtIndexPath:(id)arg1;
- (void)_stopAnimating;
- (void)_updateCollectionViewSpecIfNeeded;
- (void)animateNextCell;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)configureStickerView;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 layout:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 stickerSize:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 stickerSizeClass:(long long)arg2;
- (void)invalidateFlowLayout;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)prepareForSnapshotting;
- (void)reloadData;
- (void)restoreFromState:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)setUserInteractionEnabled:(BOOL)arg1;

@end

