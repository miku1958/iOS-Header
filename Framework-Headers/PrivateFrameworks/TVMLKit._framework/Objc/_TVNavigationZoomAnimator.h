//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVMLKit/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString;

@interface _TVNavigationZoomAnimator : NSObject <UIViewControllerAnimatedTransitioning>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_beginZoomAnimationFromViewController:(id)arg1 toViewController:(id)arg2 containerView:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;

@end

