//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/TVShelfViewLayoutDelegate-Protocol.h>
#import <VideosUI/UICollectionViewDelegate-Protocol.h>

@class NSIndexPath, NSString, UICollectionView, UIView, VUIShelfView;

__attribute__((visibility("hidden")))
@interface VUIShelfViewController : UIViewController <UICollectionViewDelegate, TVShelfViewLayoutDelegate>
{
    BOOL _shouldUpdateBeforeLayout;
    UICollectionView *_collectionView;
    UIView *_headerView;
    long long _gridStyle;
    VUIShelfView *_containerView;
    NSIndexPath *_focusedIndexPath;
}

@property (strong, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (strong, nonatomic) VUIShelfView *containerView; // @synthesize containerView=_containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSIndexPath *focusedIndexPath; // @synthesize focusedIndexPath=_focusedIndexPath;
@property (readonly, nonatomic) long long gridStyle; // @synthesize gridStyle=_gridStyle;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_ensureScrollViewSnaps;
- (id)_findSnappingItemFromContentOffset:(inout struct CGPoint *)arg1 withVelocity:(struct CGPoint)arg2;
- (void)_snapTargetContentOffset:(inout struct CGPoint *)arg1 toItemIndexPath:(id)arg2 atItemOffset:(struct CGPoint)arg3;
- (void)_updateCollectionViewLayout:(BOOL)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;
- (id)initWithGridStyle:(long long)arg1;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContentOffsetWithTransitionCoordinator:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

