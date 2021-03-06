//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionView.h>

#import <TVMLKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSIndexPath, NSString;

@interface _TVStackCollectionView : UICollectionView <UIGestureRecognizerDelegate>
{
    double _bottomPadding;
    struct UIEdgeInsets _gradientBoundsInsets;
    CDStruct_ce7ae26c _flags;
    NSIndexPath *_indexPathForLastFocusedItem;
}

@property (nonatomic, getter=_gradientBoundsInsets, setter=_setGradientBoundsInsets:) struct UIEdgeInsets _gradientBoundsInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSIndexPath *indexPathForLastFocusedItem; // @synthesize indexPathForLastFocusedItem=_indexPathForLastFocusedItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_getGradientMaskBounds:(out struct CGRect *)arg1 startInsets:(out struct UIEdgeInsets *)arg2 endInsets:(out struct UIEdgeInsets *)arg3 intensities:(out struct UIEdgeInsets *)arg4;
- (void)_performWithoutLayoutBelow:(CDUnknownBlockType)arg1;
- (BOOL)_shouldFadeCellsForBoundChangeWhileRotating;
- (struct CGRect)_visibleBounds;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutBelowIfNeeded;
- (void)reloadData;
- (void)setBottomPaddingForVisibleBounds:(double)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;

@end

