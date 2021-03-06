//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UICollectionView, _UIDragDestinationControllerSessionState, _UIDragMovementCadenceSettings, _UIVelocityIntegrator;

__attribute__((visibility("hidden")))
@interface _UIDragDestinationControllerReorderingState : NSObject
{
    BOOL _supportsLocalSessionReordering;
    BOOL _hasStartedInteractiveReorder;
    _UIVelocityIntegrator *_velocityIntegrator;
    long long _reorderCount;
    _UIDragDestinationControllerSessionState *_sessionState;
    UICollectionView *_collectionView;
    double _reorderBecamePossibleTime;
    long long _dragMovementPhase;
    _UIDragMovementCadenceSettings *_reorderCadenceSettings;
}

@property (weak, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (nonatomic) long long dragMovementPhase; // @synthesize dragMovementPhase=_dragMovementPhase;
@property (readonly, nonatomic) BOOL hasPerformedReordering;
@property (nonatomic) BOOL hasStartedInteractiveReorder; // @synthesize hasStartedInteractiveReorder=_hasStartedInteractiveReorder;
@property (nonatomic) double reorderBecamePossibleTime; // @synthesize reorderBecamePossibleTime=_reorderBecamePossibleTime;
@property (strong, nonatomic) _UIDragMovementCadenceSettings *reorderCadenceSettings; // @synthesize reorderCadenceSettings=_reorderCadenceSettings;
@property (nonatomic) long long reorderCount; // @synthesize reorderCount=_reorderCount;
@property (strong, nonatomic) _UIDragDestinationControllerSessionState *sessionState; // @synthesize sessionState=_sessionState;
@property (nonatomic) BOOL supportsLocalSessionReordering; // @synthesize supportsLocalSessionReordering=_supportsLocalSessionReordering;
@property (strong, nonatomic) _UIVelocityIntegrator *velocityIntegrator; // @synthesize velocityIntegrator=_velocityIntegrator;

- (void).cxx_destruct;
- (id)_reorderCadenceSettings;
- (void)didBeginInteractiveReorder;
- (void)didEndInteractiveReorder;
- (void)didReorder;
- (BOOL)hasEnoughTimeElapsedSizeReorderingBecamePossibleForInterval:(double)arg1;
- (id)initWithSessionState:(id)arg1 collectionView:(id)arg2;
- (void)reorderResetToStartingLocation;
- (void)reorderingDidBecomePossible;
- (void)velocityExceededThreshold;

@end

