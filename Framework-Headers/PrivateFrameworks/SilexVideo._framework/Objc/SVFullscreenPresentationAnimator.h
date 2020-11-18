//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVFullscreenTransitionCoordinator-Protocol.h>

@class NSString, UIView, UIViewPropertyAnimator;
@protocol SVFullscreenTransitionContext;

@interface SVFullscreenPresentationAnimator : NSObject <SVFullscreenTransitionCoordinator>
{
    UIViewPropertyAnimator *_animator;
    id<SVFullscreenTransitionContext> _context;
    UIView *_fromView;
    CDUnknownBlockType _completionBlock;
}

@property (strong, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property (readonly, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (strong, nonatomic) id<SVFullscreenTransitionContext> context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)animateWithContext:(id)arg1;
- (void)completeTransition:(BOOL)arg1;
- (id)initWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

