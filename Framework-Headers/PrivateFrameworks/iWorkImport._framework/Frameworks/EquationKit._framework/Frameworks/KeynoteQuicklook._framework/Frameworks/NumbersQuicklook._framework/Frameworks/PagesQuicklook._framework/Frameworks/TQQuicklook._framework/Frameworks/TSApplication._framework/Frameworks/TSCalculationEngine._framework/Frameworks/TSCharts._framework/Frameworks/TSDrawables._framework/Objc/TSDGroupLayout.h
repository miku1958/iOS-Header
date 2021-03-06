//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDContainerLayout.h>

#import <TSDrawables/TSDWrappableParent-Protocol.h>

@class NSOrderedSet, TSDLayoutGeometry, TSUBezierPath;

@interface TSDGroupLayout : TSDContainerLayout <TSDWrappableParent>
{
    TSDLayoutGeometry *mDynamicLayoutGeometry;
    struct CGRect mBoundsForStandardKnobs;
    TSUBezierPath *mCachedWrapPath;
    TSUBezierPath *mCachedPathForClippingConnectionLines;
    NSOrderedSet *mCachedGroupedChildren;
    BOOL mHasInvalidated;
}

- (void).cxx_destruct;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (struct CGRect)alignmentFrame;
- (struct CGRect)alignmentFrameForCaptionEdgeInsetsCalculation;
- (BOOL)allowsConnections;
- (void)beginDynamicOperation;
- (struct CGRect)boundsForStandardKnobs;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (BOOL)canFlip;
- (id)childInfosForChildLayouts;
- (struct CGRect)clipRect;
- (struct CGRect)computeBoundsForStandardKnobs;
- (id)computeInfoGeometryDuringResize;
- (id)computeLayoutGeometry;
- (id)descendentWrappables;
- (BOOL)descendentWrappablesContainsWrappable:(id)arg1;
- (void)dragBy:(struct CGPoint)arg1;
- (void)endDynamicOperation;
- (struct CGRect)frameForCaptionPositioning;
- (void)i_clearInvalidationCache;
- (id)i_computeWrapPath;
- (id)i_wrapPath;
- (id)i_wrapPathIncludingTitleAndCaption;
- (void)invalidate;
- (void)invalidateExteriorWrap;
- (BOOL)isDraggable;
- (id)layoutGeometryFromInfo;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (struct CGSize)minimumSize;
- (id)p_childWrapPathsFrom:(id)arg1 inDescendents:(id)arg2 includingTitleAndCaption:(BOOL)arg3;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (id)p_groupInfo;
- (id)p_groupedChildren;
- (void)p_invalidateParentForWrap;
- (id)pathForClippingConnectionLines;
- (void)processChangedProperty:(int)arg1;
- (BOOL)providesGuidesForChildLayouts;
- (struct CGRect)rectInRootForCalculatingActivityLineEndpoint;
- (struct CGRect)rectInRootForPresentingAnnotationPopoverForSelectionPath:(id)arg1;
- (struct CGRect)rectInRootForSelectionPath:(id)arg1;
- (id)reliedOnLayouts;
- (BOOL)resizeMayChangeAspectRatio;
- (void)setDynamicGeometry:(id)arg1;
- (BOOL)shouldBeIncludedInParentFrameForCulling;
- (BOOL)supportsFlipping;
- (BOOL)supportsInspectorPositioning;
- (BOOL)supportsParentFlipping;
- (BOOL)supportsRotation;
- (void)transferLayoutGeometryToInfo:(id)arg1 withAdditionalTransform:(struct CGAffineTransform)arg2 assertIfInDocument:(BOOL)arg3;
- (void)updateChildrenFromInfo;
- (void)updateLayoutGeometryInPreparationForPartitioning;
- (id)visibleGeometries;

@end

