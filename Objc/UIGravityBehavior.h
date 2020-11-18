//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIDynamicBehavior.h>

@class NSArray;

@interface UIGravityBehavior : UIDynamicBehavior
{
    struct CGPoint _gravity;
}

@property (nonatomic) double angle;
@property (nonatomic) struct CGVector gravityDirection;
@property (readonly, copy, nonatomic) NSArray *items;
@property (nonatomic) double magnitude;

+ (BOOL)_isPrimitiveBehavior;
- (void)_addItem:(id)arg1;
- (void)_associate;
- (void)_dissociate;
- (void)_setAngle:(double)arg1 magnitude:(double)arg2;
- (void)addItem:(id)arg1;
- (struct CGPoint)denormalizedGravity;
- (id)description;
- (struct CGPoint)gravity;
- (id)init;
- (id)initWithItems:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)setAngle:(double)arg1 magnitude:(double)arg2;
- (void)setGravity:(struct CGPoint)arg1;
- (void)setXComponent:(double)arg1;
- (void)setXComponent:(double)arg1 yComponent:(double)arg2;
- (void)setYComponent:(double)arg1;
- (double)xComponent;
- (double)yComponent;

@end

