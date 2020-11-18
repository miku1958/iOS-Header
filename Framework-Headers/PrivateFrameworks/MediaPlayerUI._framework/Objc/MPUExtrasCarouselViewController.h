//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <MediaPlayerUI/MPUExtrasCarouselCollectionViewDelegate-Protocol.h>
#import <MediaPlayerUI/MPUExtrasZoomingImageTransitionParticipant-Protocol.h>
#import <MediaPlayerUI/UICollectionViewDataSource-Protocol.h>
#import <MediaPlayerUI/UICollectionViewDelegate-Protocol.h>

@class MPUExtrasCarouselCollectionView, NSString, UICollectionViewLayout;
@protocol MPUExtrasCarouselCollectionViewLayout, MPUExtrasCarouselViewControllerDataSource, MPUExtrasCarouselViewControllerDelegate;

@interface MPUExtrasCarouselViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, MPUExtrasCarouselCollectionViewDelegate, MPUExtrasZoomingImageTransitionParticipant>
{
    BOOL _revealingNavigationBarDuringTransition;
    id<MPUExtrasCarouselViewControllerDataSource> _dataSource;
    id<MPUExtrasCarouselViewControllerDelegate> _delegate;
    MPUExtrasCarouselCollectionView *_carouselCollectionView;
    UICollectionViewLayout<MPUExtrasCarouselCollectionViewLayout> *_carouselCollectionViewLayout;
}

@property (strong, nonatomic) MPUExtrasCarouselCollectionView *carouselCollectionView; // @synthesize carouselCollectionView=_carouselCollectionView;
@property (strong, nonatomic) UICollectionViewLayout<MPUExtrasCarouselCollectionViewLayout> *carouselCollectionViewLayout; // @synthesize carouselCollectionViewLayout=_carouselCollectionViewLayout;
@property (weak, nonatomic) id<MPUExtrasCarouselViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MPUExtrasCarouselViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long indexOfVisibleItem;
@property (nonatomic, getter=isRevealingNavigationBarDuringTransition) BOOL revealingNavigationBarDuringTransition; // @synthesize revealingNavigationBarDuringTransition=_revealingNavigationBarDuringTransition;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_isPhone;
- (void)_loadCarouselCollectionViewInView:(id)arg1 withContraintsAccumulator:(id)arg2;
- (long long)_numberOfItems;
- (void)_updateOpacityOfTextInVisibleCells;
- (void)_updateWindowSizeForVisibleCells;
- (id)carouselCollectionViewCellForItemAtIndex:(unsigned long long)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)dealloc;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setIndexOfVisibleItem:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)subviewsDidChangeForCarouselCollectionView:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

