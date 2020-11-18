//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@class UIView;

@protocol SVVideoAccessoryItemTransitionContext <NSObject>

@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) UIView *fromView;
@property (readonly, nonatomic) UIView *toView;
@property (readonly, nonatomic) BOOL transitionWasCancelled;

- (void)completeTransition:(BOOL)arg1;
@end

