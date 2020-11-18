//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewTransitionLayout.h>

@class PUCollectionViewLayoutCache;

__attribute__((visibility("hidden")))
@interface PUStackedAlbumTransitionLayout : UICollectionViewTransitionLayout
{
    struct CGPoint _expandedStackDelta;
    BOOL _didPrepareLayout;
    PUCollectionViewLayoutCache *_currentLayoutCache;
    PUCollectionViewLayoutCache *_nextLayoutCache;
    BOOL _isExpanding;
    struct CGPoint _expandedStackFinalDelta;
    struct CGPoint _interactionOffset;
    struct CGPoint _initialCollapsedStackCenter;
    struct CGPoint _finalCollapsedStackCenter;
    struct CGPoint _currentCollapsedStackCenter;
}

@property (nonatomic) struct CGPoint currentCollapsedStackCenter; // @synthesize currentCollapsedStackCenter=_currentCollapsedStackCenter;
@property (readonly, nonatomic) struct CGPoint expandedStackFinalDelta; // @synthesize expandedStackFinalDelta=_expandedStackFinalDelta;
@property (nonatomic) struct CGPoint finalCollapsedStackCenter; // @synthesize finalCollapsedStackCenter=_finalCollapsedStackCenter;
@property (nonatomic) struct CGPoint initialCollapsedStackCenter; // @synthesize initialCollapsedStackCenter=_initialCollapsedStackCenter;
@property (nonatomic) struct CGPoint interactionOffset; // @synthesize interactionOffset=_interactionOffset;
@property (readonly, nonatomic) BOOL isExpanding; // @synthesize isExpanding=_isExpanding;

- (void).cxx_destruct;
- (struct CGPoint)_centerOfLayoutAttributes:(id)arg1;
- (struct CGPoint)_newCenterForLayoutAttributes:(id)arg1 transitionProgress:(double)arg2;
- (id)initWithCurrentLayout:(id)arg1 nextLayout:(id)arg2 isExpanding:(BOOL)arg3;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)prepareLayout;

@end

