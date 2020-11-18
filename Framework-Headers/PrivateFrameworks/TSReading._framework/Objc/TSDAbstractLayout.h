//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, TSDLayoutGeometry;

@interface TSDAbstractLayout : NSObject
{
    TSDAbstractLayout *mParent;
    NSMutableArray *mChildren;
    TSDLayoutGeometry *mGeometry;
    struct CGPoint mInterimPosition;
    BOOL mInterimPositionXSet;
    BOOL mInterimPositionYSet;
    struct CGPoint mLastInterimPosition;
    BOOL mLastInterimPositionXSet;
    BOOL mLastInterimPositionYSet;
}

@property (copy, nonatomic) NSArray *children;
@property (copy, nonatomic) TSDLayoutGeometry *geometry; // @synthesize geometry=mGeometry;
@property (nonatomic) double interimPositionX;
@property (nonatomic) double interimPositionY;
@property (nonatomic) TSDAbstractLayout *parent; // @synthesize parent=mParent;
@property (readonly, nonatomic) TSDAbstractLayout *root;

- (void)addChild:(id)arg1;
- (void)addDescendentLayoutsToArray:(id)arg1;
- (void)addLayoutsInRect:(struct CGRect)arg1 toArray:(id)arg2 deep:(BOOL)arg3;
- (void)addLayoutsToArray:(id)arg1;
- (id)additionalDependenciesForChildLayout:(id)arg1;
- (struct CGRect)alignmentFrame;
- (struct CGRect)alignmentFrameForProvidingGuidesInRoot;
- (struct CGRect)alignmentFrameInRoot;
- (struct CGPoint)alignmentFrameOriginForFixingInterimPosition;
- (BOOL)canRotateChildLayout:(id)arg1;
- (void)dealloc;
- (id)delegateConformingToProtocol:(id)arg1 forLayout:(id)arg2;
- (void)exchangeChildAtIndex:(unsigned long long)arg1 withChildAtIndex:(unsigned long long)arg2;
- (void)fixTransformFromInterimPosition;
- (void)fixTransformFromLastInterimPosition;
- (struct CGRect)frame;
- (struct CGRect)frameForCulling;
- (struct CGRect)frameInParent;
- (struct CGRect)frameInRoot;
- (id)geometryForTransforming;
- (id)geometryInParent;
- (id)geometryInRoot;
- (id)geometryInRoot:(id)arg1;
- (id)init;
- (void)insertChild:(id)arg1 above:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertChild:(id)arg1 below:(id)arg2;
- (BOOL)isAxisAlignedUnflippedInRoot;
- (BOOL)isRootLayoutForInspectorGeometry;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (void)offsetGeometryBy:(struct CGPoint)arg1;
- (void)p_fixTransformFromInterimPosition:(struct CGPoint)arg1 interimPositionXSet:(BOOL)arg2 interimPositionYSet:(BOOL)arg3;
- (id)parentLayoutForProvidingGuides;
- (struct CGPoint)positionInRootForAttachmentPositioner;
- (BOOL)providesGuidesForChildLayouts;
- (struct CGRect)rectInParent:(struct CGRect)arg1;
- (struct CGRect)rectInRoot:(struct CGRect)arg1;
- (void)removeFromParent;
- (void)replaceChild:(id)arg1 with:(id)arg2;
- (BOOL)shouldSnapWhileResizing;
- (BOOL)supportsFlipping;
- (BOOL)supportsInspectorPositioning;
- (BOOL)supportsParentRotation;
- (BOOL)supportsResize;
- (BOOL)supportsRotation;
- (struct CGAffineTransform)transform;
- (struct CGAffineTransform)transformInParent;
- (struct CGAffineTransform)transformInRoot;
- (id)visibleGeometries;

@end

