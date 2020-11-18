//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoAccessoryItemTransitionContext-Protocol.h>

@class NSString, UIView;

@interface SVVideoAccessoryBarItemTransitionContext : NSObject <SVVideoAccessoryItemTransitionContext>
{
    BOOL _transitionWasCancelled;
    UIView *_fromView;
    UIView *_toView;
    UIView *_containerView;
    CDUnknownBlockType _completionBlock;
}

@property (readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *toView; // @synthesize toView=_toView;
@property (nonatomic) BOOL transitionWasCancelled; // @synthesize transitionWasCancelled=_transitionWasCancelled;

- (void).cxx_destruct;
- (void)completeTransition:(BOOL)arg1;
- (id)initWithContainerView:(id)arg1 fromView:(id)arg2 toView:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end
