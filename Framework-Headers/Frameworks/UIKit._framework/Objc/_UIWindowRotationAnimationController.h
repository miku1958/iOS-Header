//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIWindowAnimationController.h>

__attribute__((visibility("hidden")))
@interface _UIWindowRotationAnimationController : _UIWindowAnimationController
{
    BOOL _skipCallbacks;
    BOOL _updateStatusBarIfNecessary;
    CDUnknownBlockType _animations;
    double _duration;
}

@property (copy, nonatomic) CDUnknownBlockType animations; // @synthesize animations=_animations;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (nonatomic) BOOL skipCallbacks; // @synthesize skipCallbacks=_skipCallbacks;
@property (nonatomic) BOOL updateStatusBarIfNecessary; // @synthesize updateStatusBarIfNecessary=_updateStatusBarIfNecessary;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)dealloc;
- (double)transitionDuration:(id)arg1;

@end

