//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, UIViewPropertyAnimator;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UIPreviewInteractionDismissTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    id<UIViewControllerContextTransitioning> _transitionContext;
    UIViewPropertyAnimator *_dismissAnimator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_preparedDismissAnimator;
- (void)animateTransition:(id)arg1;
- (void)animationEnded:(BOOL)arg1;
- (id)init;
- (double)transitionDuration:(id)arg1;

@end

