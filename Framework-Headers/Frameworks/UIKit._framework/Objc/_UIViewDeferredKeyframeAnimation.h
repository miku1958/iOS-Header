//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIViewDeferredAnimation.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIViewDeferredKeyframeAnimation : _UIViewDeferredAnimation
{
    NSMutableArray *_animationFrames;
}

- (void).cxx_destruct;
- (id)_animationFrames;
- (void)_enumerateAnimationFramesForKeyframes:(CDUnknownBlockType)arg1;
- (void)_finalize;
- (void)addAnimationFrameForValue:(id)arg1;
- (void)animateFrameAtIndex:(long long)arg1 animations:(CDUnknownBlockType)arg2;
- (BOOL)isEmpty;

@end

