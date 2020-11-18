//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIDynamicBehavior.h>

@class NSMutableArray, PKPhysicsBody;

@interface UISnapBehavior : UIDynamicBehavior
{
    struct CGPoint _anchorPoint;
    double _damping;
    double _distance;
    double _frequency;
    struct {
        unsigned int attachedToView:1;
        unsigned int dampingSet:1;
        unsigned int frequencySet:1;
        unsigned int lengthSet:1;
    } _stateFlags;
    NSMutableArray *_joints;
    PKPhysicsBody *_anchorBody;
}

@property (nonatomic) double damping; // @synthesize damping=_damping;
@property (nonatomic) struct CGPoint snapPoint;

+ (BOOL)_isPrimitiveBehavior;
- (void).cxx_destruct;
- (void)_associate;
- (void)_dissociate;
- (double)_distance;
- (double)_frequency;
- (void)_setDistance:(double)arg1;
- (void)_setFrequency:(double)arg1;
- (id)description;
- (id)init;
- (id)initWithItem:(id)arg1 snapToPoint:(struct CGPoint)arg2;

@end

