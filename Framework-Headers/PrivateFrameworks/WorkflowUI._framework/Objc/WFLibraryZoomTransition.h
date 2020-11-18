//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WorkflowUI/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, UIView;

@interface WFLibraryZoomTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    UIView *_cellView;
    BOOL _presenting;
    UIView *_morphView;
    UIView *_shadowView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)transitionForDismissingToView:(id)arg1;
+ (id)transitionForPresentingFromView:(id)arg1;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (id)centralAnimation;
- (void)completeAnimations:(id)arg1;
- (void)configureViews:(id)arg1;
- (id)crossfadeAnimation;
- (id)initWithView:(id)arg1 presenting:(BOOL)arg2;
- (id)lessStiffSpringAnimation;
- (id)morphAnimation;
- (id)radiusAnimation;
- (struct CGImage *)snapshotView:(id)arg1;
- (void)startAnimations:(id)arg1;
- (id)stiffSpringAnimation;
- (double)transitionDuration:(id)arg1;

@end
