//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIIntervalAnimating-Protocol.h>

@class NSString;
@protocol UIVectorOperatable;

__attribute__((visibility("hidden")))
@interface UIViewSpringAnimation : NSObject <UIIntervalAnimating>
{
    id<UIVectorOperatable> _current;
    id<UIVectorOperatable> _velocity;
    id<UIVectorOperatable> _zero;
    CDStruct_289c5ec3 _state;
    CDStruct_9e265dec _parameters;
    id<UIVectorOperatable> _distance;
    id<UIVectorOperatable> _scaledVelocity;
    id<UIVectorOperatable> _epsilon;
    float _velocityScalingFactor;
    BOOL _parametersInitialized;
    id<UIVectorOperatable> _targetValue;
    id<UIVectorOperatable> _value;
    id<UIVectorOperatable> _intermediate;
    id<UIVectorOperatable> _intermediateVelocity;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<UIVectorOperatable> intermediate; // @synthesize intermediate=_intermediate;
@property (strong, nonatomic) id<UIVectorOperatable> intermediateVelocity; // @synthesize intermediateVelocity=_intermediateVelocity;
@property (readonly) Class superclass;
@property (strong, nonatomic) id<UIVectorOperatable> targetValue; // @synthesize targetValue=_targetValue;
@property (strong, nonatomic) id<UIVectorOperatable> value; // @synthesize value=_value;
@property (strong, nonatomic) id<UIVectorOperatable> velocity;

- (void).cxx_destruct;
- (id)initWithCurrent:(id)arg1 targetValue:(id)arg2;
- (id)initWithDescription:(id)arg1 current:(id)arg2 targetValue:(id)arg3;
- (BOOL)isStable;
- (id)stepWithDelta:(double)arg1;
- (void)updateWithDescription:(id)arg1;
- (void)updateWithDescription:(id)arg1 initial:(BOOL)arg2;

@end

