//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIDynamicBehavior.h>

@class NSArray, NSMutableDictionary;

@interface UIPushBehavior : UIDynamicBehavior
{
    double _angle;
    double _magnitude;
    BOOL _active;
    long long _mode;
    struct CGVector _forceVector;
    double _timeInterval;
    NSMutableDictionary *_targetPoints;
    int _i;
}

@property (nonatomic) BOOL active;
@property (nonatomic) double angle;
@property (readonly, copy, nonatomic) NSArray *items;
@property (nonatomic) double magnitude;
@property (readonly, nonatomic) long long mode;
@property (nonatomic) struct CGVector pushDirection;

+ (BOOL)_isPrimitiveBehavior;
- (void).cxx_destruct;
- (void)_associate;
- (void)_dissociate;
- (void)_step;
- (void)addItem:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 mode:(long long)arg2;
- (void)removeItem:(id)arg1;
- (void)setAngle:(double)arg1 magnitude:(double)arg2;
- (void)setTargetOffsetFromCenter:(struct UIOffset)arg1 forItem:(id)arg2;
- (void)setTargetPoint:(struct CGPoint)arg1 forItem:(id)arg2;
- (void)setXComponent:(double)arg1;
- (void)setXComponent:(double)arg1 yComponent:(double)arg2;
- (void)setYComponent:(double)arg1;
- (struct UIOffset)targetOffsetFromCenterForItem:(id)arg1;
- (struct CGPoint)targetPointForItem:(id)arg1;
- (double)xComponent;
- (double)yComponent;

@end

