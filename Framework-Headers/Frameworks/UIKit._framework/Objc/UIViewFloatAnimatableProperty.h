//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIAnimatablePropertyState, _UIViewAnimatablePropertyTransformer;
@protocol OS_dispatch_queue;

@interface UIViewFloatAnimatableProperty : NSObject
{
    NSObject<OS_dispatch_queue> *_animatablePropertyStateLockingQueue;
    NSObject<OS_dispatch_queue> *_presentationValueLockingQueue;
    NSObject<OS_dispatch_queue> *_invalidationLockingQueue;
    double _presentationValue;
    BOOL _invalidated;
    UIAnimatablePropertyState *_animatablePropertyState;
    BOOL _performingInterpolationBetweenTwoStates;
    double _value;
    _UIViewAnimatablePropertyTransformer *_transformer;
}

@property (strong, nonatomic) UIAnimatablePropertyState *animatablePropertyState;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (nonatomic) BOOL performingInterpolationBetweenTwoStates; // @synthesize performingInterpolationBetweenTwoStates=_performingInterpolationBetweenTwoStates;
@property (nonatomic) double presentationValue;
@property (strong, nonatomic) _UIViewAnimatablePropertyTransformer *transformer; // @synthesize transformer=_transformer;
@property (nonatomic) double value; // @synthesize value=_value;
@property (nonatomic) double velocity;

- (void).cxx_destruct;
- (BOOL)_performAnimation;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)invalidateAndStopImmediately:(BOOL)arg1;

@end

