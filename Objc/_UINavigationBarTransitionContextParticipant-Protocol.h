//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class _UINavigationBarTransitionContext;

@protocol _UINavigationBarTransitionContextParticipant <NSObject>
- (void)adoptFinalStateFromTransition:(_UINavigationBarTransitionContext *)arg1 transitionCompleted:(BOOL)arg2;
- (void)ensureBackButtonTruncationOccursWithContext:(_UINavigationBarTransitionContext *)arg1;
- (void)recordFromStateForTransition:(_UINavigationBarTransitionContext *)arg1;
- (void)recordToStateForTransition:(_UINavigationBarTransitionContext *)arg1;
@end

