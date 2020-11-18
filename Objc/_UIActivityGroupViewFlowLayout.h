//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray, NSIndexPath, UILongPressGestureRecognizer, _UIActivityGroupActivityCell;

__attribute__((visibility("hidden")))
@interface _UIActivityGroupViewFlowLayout : UICollectionViewLayout
{
    UILongPressGestureRecognizer *_editingGestureRecognizer;
    NSIndexPath *_indexPathForDraggedItem;
    double _evaluatedHorizontalItemOffset;
    NSArray *_preparedLayoutAttributes;
    NSArray *_preparedUpdateItems;
    _UIActivityGroupActivityCell *_draggingView;
    struct CGSize _evaluatedItemSize;
    struct CGSize _evaluatedContentSize;
    struct UIOffset _draggingOffset;
    struct UIEdgeInsets _evaluatedInset;
}

@property (nonatomic) struct UIOffset draggingOffset; // @synthesize draggingOffset=_draggingOffset;
@property (strong, nonatomic) _UIActivityGroupActivityCell *draggingView; // @synthesize draggingView=_draggingView;
@property (strong, nonatomic) UILongPressGestureRecognizer *editingGestureRecognizer; // @synthesize editingGestureRecognizer=_editingGestureRecognizer;
@property (nonatomic) struct CGSize evaluatedContentSize; // @synthesize evaluatedContentSize=_evaluatedContentSize;
@property (nonatomic) double evaluatedHorizontalItemOffset; // @synthesize evaluatedHorizontalItemOffset=_evaluatedHorizontalItemOffset;
@property (nonatomic) struct UIEdgeInsets evaluatedInset; // @synthesize evaluatedInset=_evaluatedInset;
@property (nonatomic) struct CGSize evaluatedItemSize; // @synthesize evaluatedItemSize=_evaluatedItemSize;
@property (copy, nonatomic) NSIndexPath *indexPathForDraggedItem; // @synthesize indexPathForDraggedItem=_indexPathForDraggedItem;
@property (copy, nonatomic) NSArray *preparedLayoutAttributes; // @synthesize preparedLayoutAttributes=_preparedLayoutAttributes;
@property (copy, nonatomic) NSArray *preparedUpdateItems; // @synthesize preparedUpdateItems=_preparedUpdateItems;

- (void).cxx_destruct;
- (double)_evaluateHorizontalItemOffsetForItemSize:(struct CGSize)arg1 inset:(struct UIEdgeInsets)arg2 offscreenPeekInFactor:(float)arg3;
- (struct UIEdgeInsets)_evaluateInsetForSectionAtIndex:(long long)arg1;
- (struct CGSize)_evaluatePreferredItemSizeForItemsAtIndexPaths:(id)arg1;
- (id)_indexPathsForItemsInSection:(long long)arg1;
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2;
- (BOOL)_shouldScrollToContentBeginningInRightToLeft;
- (id)adjustLayoutAttributesForDraggingIfNeeded:(id)arg1;
- (void)beginDraggingForGesture:(id)arg1;
- (void)cancelDraggingForGesture:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)draggingViewForItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)handleEditingGesture:(id)arg1;
- (id)indexPathForItemRecognizedByGesture:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)invalidateGroupViewLayoutAnimated:(BOOL)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareLayout;
- (BOOL)shouldCancelDraggingForGesture:(id)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (BOOL)shouldReverseLayoutDirection;
- (void)updateDraggingViewForGesture:(id)arg1;

@end

