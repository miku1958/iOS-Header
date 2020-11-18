//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIDynamicBehavior.h>

@class NSArray, NSMutableDictionary, PKExtendedPhysicsBody;
@protocol UICollisionBehaviorDelegate;

@interface UICollisionBehavior : UIDynamicBehavior
{
    BOOL _usesImplicitBounds;
    struct UIEdgeInsets _implicitBoundsInsets;
    PKExtendedPhysicsBody *_implicitBoundsBody;
    NSMutableDictionary *_boundaryBodies;
    NSMutableDictionary *_boundaryPaths;
    unsigned long long _collisionMode;
    id<UICollisionBehaviorDelegate> _collisionDelegate;
    unsigned int _groupVID;
    unsigned int _groupBID;
    struct {
        unsigned int delegateBeganWithItem:1;
        unsigned int delegateEndedWithItem:1;
        unsigned int delegateBeganWithBoundary:1;
        unsigned int delegateEndedWithBoundary:1;
    } _collisionBehaviorFlags;
}

@property (readonly, copy, nonatomic) NSArray *boundaryIdentifiers;
@property (weak, nonatomic) id<UICollisionBehaviorDelegate> collisionDelegate;
@property (nonatomic) unsigned long long collisionMode;
@property (readonly, copy, nonatomic) NSArray *items;
@property (nonatomic) BOOL translatesReferenceBoundsIntoBoundary;

+ (BOOL)_isPrimitiveBehavior;
- (void).cxx_destruct;
- (void)_addCollisionItem:(id)arg1;
- (void)_applySettings;
- (void)_associate;
- (void)_didBeginContact:(id)arg1;
- (void)_didEndContact:(id)arg1;
- (void)_dissociate;
- (void)_reevaluate:(unsigned long long)arg1;
- (void)_registerBodyForIdentifier:(id)arg1 path:(id)arg2;
- (void)_registerBoundaryForIdentifier:(id)arg1 path:(id)arg2;
- (void)_removeExplicitBoundaryBodies;
- (void)_removeExplicitBoundaryPaths;
- (void)_removeImplicitBoundaries;
- (void)_setCollisions:(BOOL)arg1 forBody:(id)arg2 isEdge:(BOOL)arg3;
- (void)_setTranslatesReferenceItemBounds:(BOOL)arg1 intoBoundaryWithInsets:(struct UIEdgeInsets)arg2;
- (void)_setupExplicitBoundaries;
- (void)_setupImplicitBoundaries;
- (void)addBoundaryWithIdentifier:(id)arg1 forPath:(id)arg2;
- (void)addBoundaryWithIdentifier:(id)arg1 fromPoint:(struct CGPoint)arg2 toPoint:(struct CGPoint)arg3;
- (void)addItem:(id)arg1;
- (id)boundaryWithIdentifier:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithItems:(id)arg1;
- (void)removeAllBoundaries;
- (void)removeBoundaryWithIdentifier:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)setTranslatesReferenceBoundsIntoBoundaryWithInsets:(struct UIEdgeInsets)arg1;

@end
