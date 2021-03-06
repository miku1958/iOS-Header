//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AvatarUI/AVTGroupPicker-Protocol.h>
#import <AvatarUI/UICollectionViewDataSource-Protocol.h>
#import <AvatarUI/UICollectionViewDelegate-Protocol.h>
#import <AvatarUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class AVTCenteringCollectionViewDelegate, AVTGroupDialMaskingView, AVTUIEnvironment, NSArray, NSIndexPath, NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol AVTGroupPickerDelegate;

@interface AVTGroupDial : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, AVTGroupPicker>
{
    BOOL _isMoving;
    BOOL _hasFinalizedSelection;
    id<AVTGroupPickerDelegate> delegate;
    NSArray *_groupItems;
    AVTUIEnvironment *_environment;
    NSArray *_cachedGroupTitleSizes;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    AVTCenteringCollectionViewDelegate *_centeringCollectionViewDelegate;
    unsigned long long _currentScrollDirection;
    long long _currentSelectedItemIndex;
    AVTGroupDialMaskingView *_maskingView;
    NSIndexPath *_shimmeringItemIndexPath;
}

@property (readonly, nonatomic) NSArray *cachedGroupTitleSizes; // @synthesize cachedGroupTitleSizes=_cachedGroupTitleSizes;
@property (readonly, nonatomic) AVTCenteringCollectionViewDelegate *centeringCollectionViewDelegate; // @synthesize centeringCollectionViewDelegate=_centeringCollectionViewDelegate;
@property (readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (strong, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property (nonatomic) unsigned long long currentScrollDirection; // @synthesize currentScrollDirection=_currentScrollDirection;
@property (nonatomic) long long currentSelectedItemIndex; // @synthesize currentSelectedItemIndex=_currentSelectedItemIndex;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVTGroupPickerDelegate> delegate; // @synthesize delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property (readonly, nonatomic) NSArray *groupItems; // @synthesize groupItems=_groupItems;
@property (nonatomic) BOOL hasFinalizedSelection; // @synthesize hasFinalizedSelection=_hasFinalizedSelection;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isMoving; // @synthesize isMoving=_isMoving;
@property (strong, nonatomic) AVTGroupDialMaskingView *maskingView; // @synthesize maskingView=_maskingView;
@property (nonatomic) long long selectedGroupIndex;
@property (nonatomic) NSIndexPath *shimmeringItemIndexPath; // @synthesize shimmeringItemIndexPath=_shimmeringItemIndexPath;
@property (readonly) Class superclass;

+ (double)estimatedContentWidthForTitleSizes:(id)arg1;
+ (BOOL)shouldScrollGivenTitleSizes:(id)arg1 fittingWidth:(double)arg2;
- (void).cxx_destruct;
- (void)cacheTitleSizes;
- (struct CGSize)cellSizeForItemAtIndex:(long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)initWithGroupItems:(id)arg1 environment:(id)arg2;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadData;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)selectItemAtIndex:(long long)arg1 updateScrollPosition:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setBounds:(struct CGRect)arg1;
- (void)setContentPadding:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setSelectedGroupIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)setupDial;
- (void)setupMasking;
- (void)startDiscoverability;
- (void)stopDiscoverability;
- (void)updateForEndingScroll;
- (void)updateSelectedState:(BOOL)arg1 forItemAtIndexPath:(id)arg2 animated:(BOOL)arg3;

@end

