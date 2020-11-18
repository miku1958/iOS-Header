//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableSet;

@interface _SBValueConvergenceAnimatorEngine : NSObject
{
    NSMutableSet *_animators;
    CADisplayLink *_displayLink;
    NSMutableSet *_finishedAnimators;
}

+ (id)sharedEngine;
- (void).cxx_destruct;
- (void)_ensureDisplayLink;
- (void)_onDisplayLink:(id)arg1;
- (void)_tearDownDisplayLink;
- (void)_updateDisplayLink;
- (id)init;
- (BOOL)isRunningAnimator:(id)arg1;
- (void)startAnimator:(id)arg1;
- (void)stopAnimator:(id)arg1;
- (void)updateAnimator:(id)arg1;

@end
