//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

#import <CoverSheet/CAAnimationDelegate-Protocol.h>

@class NSArray, NSString;

@interface CSShakableView : SBFTouchPassThroughView <CAAnimationDelegate>
{
    CDUnknownBlockType _shakeCompletionBlock;
    SBFTouchPassThroughView *_containerView;
    NSArray *_prototypeSpringAnimations;
    double _shakeDistance;
}

@property (readonly, nonatomic) SBFTouchPassThroughView *containerView; // @synthesize containerView=_containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *prototypeSpringAnimations; // @synthesize prototypeSpringAnimations=_prototypeSpringAnimations;
@property (nonatomic) double shakeDistance; // @synthesize shakeDistance=_shakeDistance;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_defaultSpringAnimations;
- (void)_invokeCompletionBlockIfNecessary;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)beginShakingWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end

