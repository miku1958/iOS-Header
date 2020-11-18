//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <CameraUI/CAMFilterScrubberCollectionViewLayoutDelegate-Protocol.h>
#import <CameraUI/UICollectionViewDataSource-Protocol.h>
#import <CameraUI/UICollectionViewDelegate-Protocol.h>
#import <CameraUI/UIGestureRecognizerDelegate-Protocol.h>
#import <CameraUI/UIPreviewInteractionDelegate-Protocol.h>

@class CAMAnimationGenerator, CAMDialGradientView, CAMFilterScrubberCollectionViewLayout, NSArray, NSString, UICollectionView, UILongPressGestureRecognizer, UIPreviewInteraction, UISelectionFeedbackGenerator, UITapGestureRecognizer;
@protocol CAMFilterScrubberViewDelegate;

@interface CAMFilterScrubberView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, CAMFilterScrubberCollectionViewLayoutDelegate, UIPreviewInteractionDelegate, UIGestureRecognizerDelegate>
{
    BOOL _suspended;
    id<CAMFilterScrubberViewDelegate> _delegate;
    id _layerContents;
    NSArray *_filterTypes;
    long long _defaultFilterType;
    long long _selectedFilterType;
    long long _lastCapturedFilterType;
    double _selectionDotCenterTopSpacing;
    CAMFilterScrubberCollectionViewLayout *__collectionViewLayout;
    UICollectionView *__collectionView;
    UIView *__selectedFilterOverlayView;
    CAMDialGradientView *__dialGradientView;
    UILongPressGestureRecognizer *__pressGestureRecognizer;
    UITapGestureRecognizer *__tapGestureRecognizer;
    UISelectionFeedbackGenerator *__selectionFeedbackGenerator;
    NSArray *__reducedFilterIndicesToShow;
    UIPreviewInteraction *__previewInteraction;
    double __previewTransitionProgress;
    CAMAnimationGenerator *__animationGenerator;
    UIView *__collectionViewSnapshot;
    struct UIEdgeInsets _thumbnailEdgeInsets;
}

@property (readonly, nonatomic) CAMAnimationGenerator *_animationGenerator; // @synthesize _animationGenerator=__animationGenerator;
@property (readonly, nonatomic) UICollectionView *_collectionView; // @synthesize _collectionView=__collectionView;
@property (readonly, nonatomic) CAMFilterScrubberCollectionViewLayout *_collectionViewLayout; // @synthesize _collectionViewLayout=__collectionViewLayout;
@property (strong, nonatomic, setter=_setCollectionViewSnapshot:) UIView *_collectionViewSnapshot; // @synthesize _collectionViewSnapshot=__collectionViewSnapshot;
@property (readonly, nonatomic) CAMDialGradientView *_dialGradientView; // @synthesize _dialGradientView=__dialGradientView;
@property (readonly, nonatomic) UILongPressGestureRecognizer *_pressGestureRecognizer; // @synthesize _pressGestureRecognizer=__pressGestureRecognizer;
@property (strong, nonatomic) UIPreviewInteraction *_previewInteraction; // @synthesize _previewInteraction=__previewInteraction;
@property (nonatomic, setter=_setPreviewTransitionProgress:) double _previewTransitionProgress; // @synthesize _previewTransitionProgress=__previewTransitionProgress;
@property (strong, nonatomic, setter=_setReducedFilterIndicesToShow:) NSArray *_reducedFilterIndicesToShow; // @synthesize _reducedFilterIndicesToShow=__reducedFilterIndicesToShow;
@property (readonly, nonatomic) UIView *_selectedFilterOverlayView; // @synthesize _selectedFilterOverlayView=__selectedFilterOverlayView;
@property (readonly, nonatomic) UISelectionFeedbackGenerator *_selectionFeedbackGenerator; // @synthesize _selectionFeedbackGenerator=__selectionFeedbackGenerator;
@property (readonly, nonatomic) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long defaultFilterType; // @synthesize defaultFilterType=_defaultFilterType;
@property (weak, nonatomic) id<CAMFilterScrubberViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSArray *filterTypes; // @synthesize filterTypes=_filterTypes;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long lastCapturedFilterType; // @synthesize lastCapturedFilterType=_lastCapturedFilterType;
@property (strong, nonatomic) id layerContents; // @synthesize layerContents=_layerContents;
@property (nonatomic) long long selectedFilterType; // @synthesize selectedFilterType=_selectedFilterType;
@property (readonly, nonatomic) double selectedThumbnailBorderWidth;
@property (nonatomic) double selectionDotCenterTopSpacing; // @synthesize selectionDotCenterTopSpacing=_selectionDotCenterTopSpacing;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;
@property (nonatomic) struct UIEdgeInsets thumbnailEdgeInsets; // @synthesize thumbnailEdgeInsets=_thumbnailEdgeInsets;
@property (readonly, nonatomic) struct CGSize thumbnailSize;

- (void).cxx_destruct;
- (double)_alphaForUnselectedItemsWithPreviewTransitionProgress:(double)arg1;
- (struct CGPoint)_contentOffsetForFractionalItemOffset:(double)arg1 withPreviewTransitionProgress:(double)arg2;
- (struct CGSize)_defaultItemSize;
- (long long)_filterTypeForItemIndex:(long long)arg1;
- (double)_fractionalItemOffsetForContentOffset:(struct CGPoint)arg1 withPreviewTransitionProgress:(double)arg2;
- (void)_handlePressGesture:(id)arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (double)_idealFractionalItemOffsetTargetForFractionalItemOffset:(double)arg1 allowUnselectedItems:(BOOL)arg2;
- (long long)_itemIndexForFilterType:(long long)arg1;
- (long long)_itemIndexUsingHysteresisForScrollingToContentOffset:(struct CGPoint)arg1 switchToNextFilterThreshold:(double)arg2 withPreviewTransitionProgress:(double)arg3;
- (id)_newReducedFilterIndicesToShow;
- (long long)_nominalItemIndexForFractionalItemOffset:(double)arg1;
- (void)_performFeedback;
- (void)_prepareFeedback;
- (void)_resetForTouchesEnded;
- (void)_scrollToFilterType:(long long)arg1 animated:(BOOL)arg2 shouldOvershoot:(BOOL)arg3;
- (void)_setSelectedFilterType:(long long)arg1 shouldNotify:(BOOL)arg2 shouldSuppressHaptic:(BOOL)arg3;
- (BOOL)_shouldPerformFeedback;
- (void)_switchToFilterAtIndexOffset:(long long)arg1 shouldOvershoot:(BOOL)arg2;
- (void)_switchToFilterType:(long long)arg1 shouldOvershoot:(BOOL)arg2 shouldSuppressHaptic:(BOOL)arg3;
- (void)_updateCollectionViewForLastCapturedFilterTypeAnimated:(BOOL)arg1;
- (void)_updateFilteredLayerContentsForCell:(id)arg1;
- (double)_widthForItemIndex:(long long)arg1 withPreviewTransitionProgress:(double)arg2;
- (double)_widthForUnselectedItemsWithPreviewTransitionProgress:(double)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (BOOL)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)dealloc;
- (double)filterScrubberCollectionViewLayout:(id)arg1 alphaForItemAtIndexPath:(id)arg2;
- (struct CGSize)filterScrubberCollectionViewLayout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(BOOL)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (BOOL)previewInteractionShouldBegin:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setLastCapturedFilterType:(long long)arg1 animated:(BOOL)arg2;
- (void)switchToNextFilter;
- (void)switchToPreviousFilter;

@end

