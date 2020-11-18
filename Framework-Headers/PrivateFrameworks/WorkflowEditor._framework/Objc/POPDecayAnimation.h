//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowEditor/POPPropertyAnimation.h>

@interface POPDecayAnimation : POPPropertyAnimation
{
}

@property (nonatomic) double deceleration;
@property (readonly, nonatomic) double duration;
@property (readonly, copy, nonatomic) id originalVelocity;
@property (copy, nonatomic) id velocity; // @dynamic velocity;

+ (id)animation;
+ (id)animationWithPropertyNamed:(id)arg1;
- (void)_appendDescription:(id)arg1 debug:(BOOL)arg2;
- (void)_ensureComputedProperties;
- (void)_initState;
- (void)_invalidateComputedProperties;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)reversedVelocity;
- (void)setFromValue:(id)arg1;
- (void)setToValue:(id)arg1;
- (id)toValue;

@end
